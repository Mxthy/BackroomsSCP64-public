/* Dimensional crystal – textured variant optional */
#include "tex_dim_crystal.inc.c"
static const Vtx dim_crystal_vertex[] = {
    {{{-35, 0, -35}, 0, {0,0}, {0xff,0xff,0xff,0xff}}},
    {{{ 35, 0, -35}, 0, {992,0}, {0xff,0xff,0xff,0xff}}},
    {{{ 35, 0,  35}, 0, {992,992}, {0xff,0xff,0xff,0xff}}},
    {{{-35, 0,  35}, 0, {0,992}, {0xff,0xff,0xff,0xff}}},
    {{{-20, 160, -20}, 0, {0,0}, {0xff,0xff,0xff,0xff}}},
    {{{ 20, 160, -20}, 0, {992,0}, {0xff,0xff,0xff,0xff}}},
    {{{ 20, 160,  20}, 0, {992,992}, {0xff,0xff,0xff,0xff}}},
    {{{-20, 160,  20}, 0, {0,992}, {0xff,0xff,0xff,0xff}}},
    {{{  0, 210,   0}, 0, {496,496}, {0xff,0xff,0xff,0xff}}},
};
const Gfx dim_crystal_dl[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPLoadTextureBlock(dim_crystal_texture, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0,
        G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(dim_crystal_vertex, 9, 0),
    gsSP2Triangles(0,1,5,0x0, 0,5,4,0x0),
    gsSP2Triangles(1,2,6,0x0, 1,6,5,0x0),
    gsSP2Triangles(2,3,7,0x0, 2,7,6,0x0),
    gsSP2Triangles(3,0,4,0x0, 3,4,7,0x0),
    gsSP2Triangles(4,5,8,0x0, 5,6,8,0x0),
    gsSP2Triangles(6,7,8,0x0, 7,4,8,0x0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsSPEndDisplayList(),
};
