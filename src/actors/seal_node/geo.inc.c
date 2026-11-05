const GeoLayout seal_node_geo[] = {
    GEO_SHADOW(SHADOW_CIRCLE_4_VERTS, 0x96, 60),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, seal_node_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
