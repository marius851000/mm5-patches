#include "pmdsky.h"

// Yeah, maybe someone made a lenght video explaining how to best optimise lookup of sin/cos for a N64 game.
// I don’t care. I don’t need performance and the game already has that table. Plus N64 != NDS (idk if it’s relevant).

// A full rotation goes from 0 to 4096 (but a modulo is perforformed, so it’s continuous as properly expected)
// The result is signed fixed-point numbers with 12 fraction bits

// trig_values is 4 bytes in total, can be returned like that.
struct trig_values lookup_rotation(int angle) {
    return TRIG_TABLE[angle % 4096];
}