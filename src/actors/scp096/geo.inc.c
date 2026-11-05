const GeoLayout scp096_geo[] = {
    GEO_CULLING_RADIUS(800),
    GEO_OPEN_NODE(),
        GEO_DISPLAY_LIST(LAYER_OPAQUE, scp096_dl),
    GEO_CLOSE_NODE(),
    GEO_END(),
};
