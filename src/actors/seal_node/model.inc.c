#include "tex_seal_node.inc.c"
static const Vtx seal_node_vertex[] = {
    {{{ -25,   0, -25}, 0, {0,0}, {0xff,0xff,0xff,0xff}}},
    {{{  25,   0, -25}, 0, {992,0}, {0xff,0xff,0xff,0xff}}},
    {{{  25,   0,  25}, 0, {992,992}, {0xff,0xff,0xff,0xff}}},
    {{{ -25,   0,  25}, 0, {0,992}, {0xff,0xff,0xff,0xff}}},
    {{{ -15, 120, -15}, 0, {0,0}, {0xff,0xff,0xff,0xff}}},
    {{{  15, 120, -15}, 0, {992,0}, {0xff,0xff,0xff,0xff}}},
    {{{  15, 120,  15}, 0, {992,992}, {0xff,0xff,0xff,0xff}}},
    {{{ -15, 120,  15}, 0, {0,992}, {0xff,0xff,0xff,0xff}}},
};
const Gfx seal_node_dl[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPLoadTextureBlock(seal_node_texture, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0,
        G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(seal_node_vertex, 8, 0),
    gsSP2Triangles(0,1,5,0x0, 0,5,4,0x0),
    gsSP2Triangles(1,2,6,0x0, 1,6,5,0x0),
    gsSP2Triangles(2,3,7,0x0, 2,7,6,0x0),
    gsSP2Triangles(3,0,4,0x0, 3,4,7,0x0),
    gsSP2Triangles(4,5,6,0x0, 4,6,7,0x0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsSPEndDisplayList(),
};
