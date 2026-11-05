#include "sanity.h"
#include "game/mario.h"
#include "game/game_init.h"
#include "game/print.h"

f32 gSanity = SANITY_MAX;

void sanity_init(void) {
    gSanity = SANITY_MAX;
}

void sanity_drain(f32 amount) {
    gSanity -= amount;
    if (gSanity < SANITY_MIN) gSanity = SANITY_MIN;
}

void sanity_update(void) {
    if (gSanity < SANITY_MAX && gSanity > 25.0f) {
        gSanity += 0.02f;
        if (gSanity > SANITY_MAX) gSanity = SANITY_MAX;
    }
    if (gSanity < 15.0f && gMarioState->health > 0x100) {
        if ((gGlobalTimer % 30) == 0) gMarioState->hurtCounter += 1;
    }
}

s32 sanity_is_critical(void) {
    return gSanity < 25.0f;
}

void sanity_draw_hud(void) {
    s32 val = (s32)gSanity;
    print_text(20, 200, "SANITY");
    print_text_fmt_int(100, 200, "%d", val);
    if (val < 25) {
        print_text(20, 180, "CRITICAL");
    }
}
