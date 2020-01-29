#ifndef _INSTRUCTIONS_H_
#define _INSTRUCTIONS_H_

#include "Joystick.h"

#if !defined(ARRAY_SIZE)
    #define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))
#endif

static const uint16_t total_boxes = 2; // change this value to alter how many boxes are deleted

typedef enum {
    move_up,
    move_down,
    move_right,
    move_left,
    press_a,
    press_b,
    press_x,
    press_y,
    press_r,
    hang
} action_t;

typedef struct {
    action_t action;
    uint16_t duration;
} command_t;

static const command_t wake_up_hang[] = {
    { hang, 50 }
};

static const command_t open_boxes_steps[] = {
    { hang, 10 },
    { press_a, 5 },
    { hang, 10 },
    { press_x, 7},
    { hang, 20 },
    { press_a, 5 },
    { hang, 50 },
    { press_r, 5},
    { hang, 40 }
};

static const command_t clear_row_steps[] = {

    { hang, 30 },
    // this ^ hang could be decreased
    // release a single pokemon
    { press_a, 5 },
    { hang, 10 },
    { move_up, 5 },
    { hang, 5 }, 
    { move_up, 5 },
    { hang, 5 },
    { press_a, 5 },
    { hang, 40 },
    { move_up, 5 },
    { hang, 5 },
    { press_a, 5 },
    { hang, 50 },
    { press_a, 5 },
    { hang, 20 },
    // move cursor
    { move_right, 5 },
    { hang, 5 },

    { press_a, 5 },
    { hang, 10 },
    { move_up, 5 },
    { hang, 5 }, 
    { move_up, 5 },
    { hang, 5 },
    { press_a, 5 },
    { hang, 40 },
    { move_up, 5 },
    { hang, 5 },
    { press_a, 5 },
    { hang, 50 },
    { press_a, 5 },
    { hang, 20 },

    { move_right, 5 },
    { hang, 5 },

    { press_a, 5 },
    { hang, 10 },
    { move_up, 5 },
    { hang, 5 }, 
    { move_up, 5 },
    { hang, 5 },
    { press_a, 5 },
    { hang, 40 },
    { move_up, 5 },
    { hang, 5 },
    { press_a, 5 },
    { hang, 50 },
    { press_a, 5 },
    { hang, 20 },

    { move_right, 5 },
    { hang, 5 },

    { press_a, 5 },
    { hang, 10 },
    { move_up, 5 },
    { hang, 5 }, 
    { move_up, 5 },
    { hang, 5 },
    { press_a, 5 },
    { hang, 40 },
    { move_up, 5 },
    { hang, 5 },
    { press_a, 5 },
    { hang, 50 },
    { press_a, 5 },
    { hang, 20 },

    { move_right, 5 },
    { hang, 5 },

    { press_a, 5 },
    { hang, 10 },
    { move_up, 5 },
    { hang, 5 }, 
    { move_up, 5 },
    { hang, 5 },
    { press_a, 5 },
    { hang, 40 },
    { move_up, 5 },
    { hang, 5 },
    { press_a, 5 },
    { hang, 50 },
    { press_a, 5 },
    { hang, 20 },

    { move_right, 5 },
    { hang, 5 },

    { press_a, 5 },
    { hang, 10 },
    { move_up, 5 },
    { hang, 5 }, 
    { move_up, 5 },
    { hang, 5 },
    { press_a, 5 },
    { hang, 40 },
    { move_up, 5 },
    { hang, 5 },
    { press_a, 5 },
    { hang, 50 },
    { press_a, 5 },
    { hang, 20 },
};

static const command_t reset_cursor_steps[] = {
    { move_left, 5 },
    { hang, 5 },
    { move_left, 5 },
    { hang, 5 },
    { move_left, 5 },
    { hang, 5 },
    { move_left, 5 },
    { hang, 5 },
    { move_left, 5 },
    { hang, 5 }
};

static const command_t move_down_steps[] = {
    { move_down, 5 },
    { hang, 5 }
};

static const command_t next_box_steps[] = {
    { move_left, 5 },
    { hang, 5 },
    { move_left, 5 },
    { hang, 5 },
    { move_left, 5 },
    { hang, 5 },
    { move_left, 5 },
    { hang, 5 },
    { move_left, 5 },
    { hang, 5 },

    { move_up, 5 },
    { hang, 5 },
    { move_up, 5 },
    { hang, 5 },
    { move_up, 5 },
    { hang, 5 },
    { move_up, 5 },
    { hang, 5 },

    { press_r, 5 },
    { hang, 40 }
};

#endif