const GeoLayout rupture_room_geo[] = {
    GEO_CULLING_RADIUS(1200),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, rupture_room_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
