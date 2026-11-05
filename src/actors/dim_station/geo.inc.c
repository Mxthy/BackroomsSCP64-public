const GeoLayout dim_station_geo[] = {
    GEO_CULLING_RADIUS(1000),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, dim_station_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
