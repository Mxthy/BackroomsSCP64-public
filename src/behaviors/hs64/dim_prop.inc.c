/* Dimensional prop – static volumetric scenery (station/crystal/corridor/grass)
 * Shared behavior for MODEL_DIM_* – no AI, slight yaw for readability.
 */
void bhv_dim_prop_init(void) {
    o->oGravity = 0;
    o->oDrawingDistance = 10000.0f;
    o->oFlags |= OBJ_FLAG_UPDATE_GFX_POS_AND_ANGLE;
    cur_obj_scale(1.0f);
}

void bhv_dim_prop_loop(void) {
    /* slow idle spin so multi-sided geometry is readable */
    o->oFaceAngleYaw += 0x40;
    o->oInteractStatus = 0;
}
