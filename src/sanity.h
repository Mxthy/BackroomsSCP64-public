#ifndef SANITY_H
#define SANITY_H
#include <PR/ultratypes.h>
#define SANITY_MAX 100.0f
#define SANITY_MIN 0.0f
extern f32 gSanity;
void sanity_init(void);
void sanity_update(void);
void sanity_drain(f32 amount);
s32 sanity_is_critical(void);
void sanity_draw_hud(void);
#endif
