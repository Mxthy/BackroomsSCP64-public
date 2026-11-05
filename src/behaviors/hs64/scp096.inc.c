#include "sanity.h"
void bhv_scp096_init(void) {
    o->oGravity = 2.5f; o->oFriction = 0.8f; o->oBuoyancy = 1.3f;
    o->oDrawingDistance = 15000.0f; o->oAction = 0; cur_obj_scale(1.1f);
}
static s32 face_seen(void) {
    if (dist_between_objects(o, gMarioObject) > 1600.0f) return 0;
    return abs_angle_diff(gMarioState->faceAngle[1], obj_angle_to_object(gMarioObject, o)) < 0x1600;
}
void bhv_scp096_loop(void) {
    f32 dist = dist_between_objects(o, gMarioObject);
    if (dist < 1800.0f) sanity_drain(0.12f);
    switch (o->oAction) {
        case 0: o->oForwardVel = 0; if (face_seen()) { o->oAction = 1; o->oTimer = 0; sanity_drain(5.0f); } break;
        case 1: o->oForwardVel = 0; if (o->oTimer > 50) o->oAction = 2; break;
        case 2: o->oMoveAngleYaw = obj_angle_to_object(o, gMarioObject); o->oForwardVel = 95.0f;
            if (dist < 150.0f && gMarioState->health > 0x100) gMarioState->hurtCounter += 16; break;
    }
    cur_obj_move_standard(-78); o->oInteractStatus = 0;
}
