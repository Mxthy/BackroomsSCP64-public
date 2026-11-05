#include "sanity.h"
void bhv_scp173_init(void) {
    o->oGravity = 2.5f; o->oFriction = 0.99f; o->oBuoyancy = 1.3f;
    o->oDrawingDistance = 12000.0f; cur_obj_scale(1.2f);
}
static s32 is_looking(void) {
    return abs_angle_diff(gMarioState->faceAngle[1], obj_angle_to_object(gMarioObject, o)) < 0x1C00;
}
void bhv_scp173_loop(void) {
    f32 dist = dist_between_objects(o, gMarioObject);
    if (dist < 2000.0f) sanity_drain(0.08f);
    if (is_looking()) o->oForwardVel = 0;
    else { o->oMoveAngleYaw = obj_angle_to_object(o, gMarioObject); o->oForwardVel = 70.0f; }
    cur_obj_move_standard(-78);
    if (dist < 160.0f && !is_looking() && gMarioState->health > 0x100) gMarioState->hurtCounter += 12;
    o->oInteractStatus = 0;
}
