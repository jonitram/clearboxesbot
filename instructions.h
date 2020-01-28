#ifndef _INSTRUCTIONS_H_
#define _INSTRUCTIONS_H_

#include "Joystick.h"

#if !defined(ARRAY_SIZE)
    #define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))
#endif

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

static const command_t clear_box_steps[] = {
    { hang, 10 },
    { press_x, 7},
    { hang, 40 },
    { press_a, 5 },
    { hang, 30 },
    { press_a, 5 },
    { hang, 30 },
    { press_a, 5 },
    { hang, 30 },
    { press_a, 5 },
    { hang, 30 },
    { press_a, 5 },
    { hang, 70 },
    { press_a, 5 }
};

static const command_t open_boxes_steps[] = {
    { hang, 10 },
    { press_x, 7},
    { hang, 40 },
    { press_a, 5 },
};

static const command_t next_box_steps[] = {
    { hang, 10 },
    { press_a, 5 }
};

#endif