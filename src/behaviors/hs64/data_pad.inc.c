void bhv_data_pad_init(void) {
    o->oGravity = 0; o->oDrawingDistance = 6000.0f; cur_obj_scale(1.0f);
}
void bhv_data_pad_loop(void) {
    o->oFaceAngleYaw += 0x200;
    if (dist_between_objects(o, gMarioObject) < 120.0f) {
        o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
        extern f32 gSanity;
        if (gSanity < 100.0f) gSanity += 8.0f;
        if (gSanity > 100.0f) gSanity = 100.0f;
        cur_obj_play_sound_2(SOUND_MENU_STAR_SOUND);
    }
}
