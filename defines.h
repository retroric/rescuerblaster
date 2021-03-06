#ifndef DEFINES_H
#define DEFINES_H

enum e_input_commands {
    INPUT_COMMAND_X_AXIS,
    INPUT_COMMAND_Y_AXIS,
    INPUT_COMMAND_QUIT,
    INPUT_COMMAND_FLY,
    INPUT_COMMAND_BOMB,
    INPUT_COMMAND_COUNT
};

enum e_DIRECTION {
    DIRECTION_LEFT,
    DIRECTION_RIGHT,
    DIRECTION_COUNT
};

#define SCREEN_WIDTH 1280
#define SCREEN_HEIGHT 720
#define SCREEN_DEPH 24
#define HUD_HEIGHT 144 // this makes the left size multiple of 64 (tilesize)
#define VISIBLE_HEIGHT (SCREEN_HEIGHT-HUD_HEIGHT)
#define TILESIZE 64
#define LAVA_AREA 16

#define PLAYER_BOX_W 48
#define PLAYER_BOX_H 96
#define MAX_ITEM_COUNT 10
#define HUD_ITEM_SIZE 16

#define MAP_W (SCREEN_WIDTH/TILESIZE)
#define MAP_H (VISIBLE_HEIGHT/TILESIZE)

#endif // DEFINES_H
