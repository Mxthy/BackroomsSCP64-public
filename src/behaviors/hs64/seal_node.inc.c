void bhv_seal_node_init(void) {
    o->oGravity = 0; o->oDrawingDistance = 8000.0f; o->oAction = 0; cur_obj_scale(1.5f);
}
void bhv_seal_node_loop(void) {
    if (o->oAction == 0) {
        o->oFaceAngleYaw += 0x100;
        if (dist_between_objects(o, gMarioObject) < 150.0f) {
            o->oAction = 1;
            cur_obj_play_sound_2(SOUND_MENU_STAR_SOUND);
            extern f32 gSanity;
            gSanity = 100.0f;
        }
    }
}
