#include "sanity.h"
void bhv_scp106_init(void) {
    o->oGravity = 1.8f; o->oFriction = 0.97f; o->oBuoyancy = 1.1f;
    o->oDrawingDistance = 8000.0f; cur_obj_scale(1.15f);
}
void bhv_scp106_loop(void) {
    f32 dist = dist_between_objects(o, gMarioObject);
    if (dist < 1500.0f) sanity_drain(0.15f);
    if (dist < 3000.0f) {
        o->oMoveAngleYaw = approach_s16_symmetric(o->oMoveAngleYaw, obj_angle_to_object(o, gMarioObject), 0x300);
        o->oForwardVel = 18.0f;
    } else o->oForwardVel = 0;
    cur_obj_move_standard(-78);
    if (dist < 200.0f && gMarioState->health > 0x100) gMarioState->hurtCounter += 4;
    o->oInteractStatus = 0;
}
