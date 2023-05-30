// Meres E. Nsoh
// 101419683
#include "rlImGui.h"
#include <game/src/Collision.h>
#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720

int main(void)
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Sunshine");
    SetTargetFPS(60);
    InitAudioDevice(); // Initializing audio device and context (1)

    int x = GetMouseX();  // Get mouse position X (2)
    int y = GetMouseY();  // Get mouse position y
    
    Vector2 ballPositionA = { -100.0f, -100.0f }; // Circle controlled by mouse.
    Vector2 ballPositionB = { SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 }; // Stationary Circle.
    Color ballColorA; 
    Color ballColorB;
    
    Circle circleCollision = { 0 };
    bool collision = true; 

    while (!WindowShouldClose()) 
    {

        collision = CheckCollisionCircles(ballPositionA, 100, ballPositionB, 100); // Function to detect collision (3)
        
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello World!", 16, 9, 20, RED);
        if (collision)
        {
            ballColorA = BLACK;
            ballColorB = GREEN;
        } // color of balls when they collide
        else
        {
            ballColorA = BLUE;
            ballColorB = YELLOW;
        } // color of balls when not collided

        DrawCircleV(ballPositionB, 100, ballColorB); // Stationary circle
        ballPositionA = GetMousePosition();
        DrawCircleV(ballPositionA, 100, ballColorA); // Circle controlled by mouse
        Vector2 GetMousePosition(); // function to give circle mouse control (4)

      
        EndDrawing();

       
        

        
    }
    
    

    //ImageDrawCircle(45, 45, 100, PURPLE);
    HideCursor(); // hide mouse (5)
 

    void PlaySound(Sound sound); // function for sound (6)

   // Sound sound = LoadSound("../game/assets/audio/FatRatForGame.mp3"); // Play a sound. load music
    Sound sound = LoadSound("..C:/Users/101419683/OneDrive - George Brown College/Y1 Semester 2.5/AI_GAME3001/SUNSHINE STUFF/game/assets/audio/FatRatForGame.mp3"); // Play a soundtrack from storage  (7)
}

//int GetRandomValue(int 0, int 9);
//
//
//{
//

//    // Check if a key has been pressed once
//   /* bool IsKeyDown(int key);
//    // Check if a key is being pressed
//    bool IsKeyReleased(int key);                            // Check if a key has been released once
//    bool IsKeyUp(int key);*/
//
//    CloseWindow();
//    return;
//}
//   
//void 
//
//
//        
//        int GetMouseX();

//    //Meres



