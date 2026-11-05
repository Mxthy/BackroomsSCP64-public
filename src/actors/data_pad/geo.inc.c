const GeoLayout data_pad_geo[] = {
    GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x80, 50),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, data_pad_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
