const GeoLayout dim_grass_geo[] = {
    GEO_CULLING_RADIUS(150),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, dim_grass_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
