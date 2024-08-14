#include "raylib.h"

int main(void) {
    const int width = 800;
    const int height = 600;

    InitWindow(width, height, "Basic Bitch Window");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Congrats! You're an idiot!", 400, 300, 20, LIGHTGRAY);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}