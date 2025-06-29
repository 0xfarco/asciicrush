#include <raylib.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <math.h>

#define BOARD_SIZE 8
#define TILE_SIZE 42
#define TILE_TYPES 5

const char tile_chars[TILE_TYPES] = { '#', '@', '$', '%', '&' };
char board[BOARD_SIZE][BOARD_SIZE];

char random_tile() {
    return tile_chars[rand() % TILE_TYPES];
}

void init_board() {
    for (int y = 0; y < BOARD_SIZE; y++) {
        for (int x = 0; x < BOARD_SIZE; x++) {
            board[y][x] = random_tile();
        }
    }
}

int main() {
    const int screen_width = 800;
    const int screen_height = 450;

    InitWindow(screen_width, screen_height, "ASCII Crush - A 2D Game");
    SetTargetFPS(60);
    srand(time(NULL));

    init_board();

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}
