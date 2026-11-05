/* Death Star corridor segment – solid both sides */
static const Vtx dim_corridor_vertex[] = {
    {{{-100, 0, -15}, 0, {0,0}, {0x38,0x38,0x40,0xff}}},
    {{{ 100, 0, -15}, 0, {0,0}, {0x38,0x38,0x40,0xff}}},
    {{{ 100, 0,  15}, 0, {0,0}, {0x38,0x38,0x40,0xff}}},
    {{{-100, 0,  15}, 0, {0,0}, {0x38,0x38,0x40,0xff}}},
    {{{-100, 150, -15}, 0, {0,0}, {0x55,0x55,0x60,0xff}}},
    {{{ 100, 150, -15}, 0, {0,0}, {0x55,0x55,0x60,0xff}}},
    {{{ 100, 150,  15}, 0, {0,0}, {0x55,0x55,0x60,0xff}}},
    {{{-100, 150,  15}, 0, {0,0}, {0x55,0x55,0x60,0xff}}},
};
const Gfx dim_corridor_dl[] = {
    gsSPVertex(dim_corridor_vertex, 8, 0),
    gsSP2Triangles(3,6,2,0x0, 3,7,6,0x0),
    gsSP2Triangles(0,1,5,0x0, 0,5,4,0x0),
    gsSP2Triangles(4,5,6,0x0, 4,6,7,0x0),
    gsSP2Triangles(0,2,1,0x0, 0,3,2,0x0),
    gsSP2Triangles(0,4,7,0x0, 0,7,3,0x0),
    gsSP2Triangles(1,2,6,0x0, 1,6,5,0x0),
    gsSPEndDisplayList(),
};
