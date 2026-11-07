#include "backrooms_objectives.h"
#include "game/print.h"
#include "game/game_init.h"

u32 gBackroomsObjectiveFlags = 0;
s32 gBackroomsPadsCollected = 0;
s32 gBackroomsPadsNeeded = 2;
s32 gBackroomsSurviveTimer = 0;

void backrooms_objectives_init(void) {
    gBackroomsObjectiveFlags = 0;
    gBackroomsPadsCollected = 0;
    gBackroomsSurviveTimer = 0;
}

void backrooms_objectives_on_pad_collect(void) {
    gBackroomsPadsCollected++;
    if (gBackroomsPadsCollected >= gBackroomsPadsNeeded) {
        gBackroomsObjectiveFlags |= OBJ_FLAG_DOCUMENTED;
        gBackroomsObjectiveFlags |= OBJ_FLAG_SECURED;
    } else {
        gBackroomsObjectiveFlags |= OBJ_FLAG_DOCUMENTED;
    }
}

void backrooms_objectives_on_seal(void) {
    gBackroomsObjectiveFlags |= OBJ_FLAG_SEALED;
}

void backrooms_objectives_update(void) {
    /* Survive: accumulate while not sealed and documented */
    if ((gBackroomsObjectiveFlags & OBJ_FLAG_DOCUMENTED) &&
        !(gBackroomsObjectiveFlags & OBJ_FLAG_SEALED)) {
        gBackroomsSurviveTimer++;
        if (gBackroomsSurviveTimer > 30 * 30) { /* ~30s at 30fps */
            gBackroomsObjectiveFlags |= OBJ_FLAG_SURVIVED;
        }
    }
}

s32 backrooms_objectives_is_area_clear(void) {
    return (gBackroomsObjectiveFlags & OBJ_FLAG_SEALED) != 0;
}

void backrooms_objectives_draw_hud(void) {
    s32 doc = (gBackroomsObjectiveFlags & OBJ_FLAG_DOCUMENTED) ? 1 : 0;
    s32 sec = (gBackroomsObjectiveFlags & OBJ_FLAG_SECURED) ? 1 : 0;
    s32 sur = (gBackroomsObjectiveFlags & OBJ_FLAG_SURVIVED) ? 1 : 0;
    s32 sea = (gBackroomsObjectiveFlags & OBJ_FLAG_SEALED) ? 1 : 0;
    print_text(20, 160, "OBJ");
    print_text_fmt_int(60, 160, "D%d", doc);
    print_text_fmt_int(100, 160, "S%d", sec);
    print_text_fmt_int(140, 160, "V%d", sur);
    print_text_fmt_int(180, 160, "E%d", sea);
    print_text_fmt_int(20, 140, "PAD %d", gBackroomsPadsCollected);
}
