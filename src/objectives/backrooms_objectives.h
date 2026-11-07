/* BackroomsSCP64 objective state – Document → Secure → Survive → Seal */
#ifndef BACKROOMS_OBJECTIVES_H
#define BACKROOMS_OBJECTIVES_H

#include <PR/ultratypes.h>

enum {
    OBJ_FLAG_DOCUMENTED = (1 << 0),
    OBJ_FLAG_SECURED    = (1 << 1),
    OBJ_FLAG_SURVIVED   = (1 << 2),
    OBJ_FLAG_SEALED     = (1 << 3)
};

extern u32 gBackroomsObjectiveFlags;
extern s32 gBackroomsPadsCollected;
extern s32 gBackroomsPadsNeeded;
extern s32 gBackroomsSurviveTimer;

void backrooms_objectives_init(void);
void backrooms_objectives_update(void);
void backrooms_objectives_on_pad_collect(void);
void backrooms_objectives_on_seal(void);
void backrooms_objectives_draw_hud(void);
s32  backrooms_objectives_is_area_clear(void);

#endif
