const GeoLayout scp173_geo[] = {
    GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x96, 100),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, scp173_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
