/* Broken Twilight Station – full 3D volume */
static const Vtx dim_station_vertex[] = {
    {{{-200,  0, -80}, 0, {0,0}, {0x90,0x70,0x30,0xff}}},
    {{{ 200,  0, -80}, 0, {0,0}, {0x90,0x70,0x30,0xff}}},
    {{{ 200,  0,  80}, 0, {0,0}, {0x90,0x70,0x30,0xff}}},
    {{{-200,  0,  80}, 0, {0,0}, {0x90,0x70,0x30,0xff}}},
    {{{-200, 25, -80}, 0, {0,0}, {0xd0,0xa0,0x50,0xff}}},
    {{{ 200, 25, -80}, 0, {0,0}, {0xd0,0xa0,0x50,0xff}}},
    {{{ 200, 25,  80}, 0, {0,0}, {0xe0,0xb0,0x60,0xff}}},
    {{{-200, 25,  80}, 0, {0,0}, {0xe0,0xb0,0x60,0xff}}},
};
const Gfx dim_station_dl[] = {
    gsSPVertex(dim_station_vertex, 8, 0),
    gsSP2Triangles(4,5,6,0x0, 4,6,7,0x0),
    gsSP2Triangles(0,2,1,0x0, 0,3,2,0x0),
    gsSP2Triangles(0,1,5,0x0, 0,5,4,0x0),
    gsSP2Triangles(3,7,6,0x0, 3,6,2,0x0),
    gsSP2Triangles(0,4,7,0x0, 0,7,3,0x0),
    gsSP2Triangles(1,2,6,0x0, 1,6,5,0x0),
    gsSPEndDisplayList(),
};
