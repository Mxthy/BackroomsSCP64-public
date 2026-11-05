const GeoLayout dim_crystal_geo[] = {
    GEO_CULLING_RADIUS(300),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, dim_crystal_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
