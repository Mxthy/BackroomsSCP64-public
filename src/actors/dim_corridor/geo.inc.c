const GeoLayout dim_corridor_geo[] = {
    GEO_CULLING_RADIUS(250),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, dim_corridor_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
