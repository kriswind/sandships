#include "raylib.h"

int main() {
    // Initialize the window
    InitWindow(800, 600, "Raylib Example");
    
    // Game loop
    while (!WindowShouldClose()) {
        // Update and draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello, Raylib!", 10, 10, 20, DARKGRAY);
        EndDrawing();
    }
    
    // Close the window
    CloseWindow();
    
    return 0;
}
