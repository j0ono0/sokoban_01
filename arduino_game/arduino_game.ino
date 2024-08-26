/** NOTES **********************

display is 320 x 240

*******************************/

#include "input.h"
#include "engine.h"

// Resources supplied to the game engine to create the game
#include "resources.h"

enum GameMode
{
    gm_intro,
    gm_inGame,
    gm_success,
    gm_end,
};

uint8_t current_env;
GameMode game_mode;

void populate_env(uint8_t env_id)
{
    current_env = env_id;
    populateEntities(environmentList[current_env].entities, environmentList[current_env].entity_count);
    setTerrain(environmentList[current_env].terrain);
}

void setup()
{
    Serial.begin(9600);
    setupButtonInputs();
    screenSetup();
    current_env = 0;
    populate_env(current_env);
    game_mode = gm_intro;
}

void loop()
{

    // Queue user keypress
    enqueue_kpq(readUserInput());


    // Wait to start game  //////////////////////////////////////////////

    if (game_mode != gm_inGame)
    {
        if (dequeue_kpq() != 7)
        {
            // Wait for start/cont' keypress
            return;
        }
        switch(game_mode) 
        {
            case gm_intro:
                // Commence new game play
                Serial.println("starting game mode.");
                game_mode = gm_inGame;
                drawAll();
                break;

            case gm_success:
                game_mode = gm_inGame;
                drawAll();
                break;


            case gm_end:
                // cycle game back to splashscreen
                game_mode = gm_intro;
                populate_env(current_env);
                screenIntro();
                break;

            default:
                break;
        }
        return;
        
        
        
    }

    // Complete existing entity transits /////////////////////////////
    if (spritesInTransit())
    {
        advanceSpriteAnimations();
        return;
    }    

    // Test for end game  //////////////////////////////////////////////

    if (gameSolved())
    {
        // Draw final stationary sprites
        advanceSpriteAnimations();

        Serial.println("game solved!");
        delay(200);

        // Prepare entityStore for next level (or restart)
        if (current_env == 0)
        {
            game_mode = gm_success;
            ++current_env;
            populate_env(current_env);
            screenEnvComplete();
        }
        else
        {
            game_mode = gm_end;
            current_env = 0;
            screenSuccess();
        }

        // Return to loop start
        return;
    }


    // Do another render.
    // Entity may have change from in-transit to stationary sprites
    advanceSpriteAnimations();

    runBehaviours();

    sortEntityDrawOrder();
}
