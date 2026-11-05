#include "tex_data_pad.inc.c"
static const Vtx data_pad_vertex[] = {
    {{{ -40, 0, -25}, 0, {0,0}, {0xff,0xff,0xff,0xff}}},
    {{{  40, 0, -25}, 0, {992,0}, {0xff,0xff,0xff,0xff}}},
    {{{  40, 0,  25}, 0, {992,992}, {0xff,0xff,0xff,0xff}}},
    {{{ -40, 0,  25}, 0, {0,992}, {0xff,0xff,0xff,0xff}}},
    {{{ -40, 8, -25}, 0, {0,0}, {0xff,0xff,0xff,0xff}}},
    {{{  40, 8, -25}, 0, {992,0}, {0xff,0xff,0xff,0xff}}},
    {{{  40, 8,  25}, 0, {992,992}, {0xff,0xff,0xff,0xff}}},
    {{{ -40, 8,  25}, 0, {0,992}, {0xff,0xff,0xff,0xff}}},
};
const Gfx data_pad_dl[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsDPLoadTextureBlock(data_pad_texture, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0,
        G_TX_WRAP | G_TX_NOMIRROR, G_TX_WRAP | G_TX_NOMIRROR, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(data_pad_vertex, 8, 0),
    gsSP2Triangles(0,1,2,0x0, 0,2,3,0x0),
    gsSP2Triangles(4,6,5,0x0, 4,7,6,0x0),
    gsSP2Triangles(0,3,7,0x0, 0,7,4,0x0),
    gsSP2Triangles(1,5,6,0x0, 1,6,2,0x0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsSPEndDisplayList(),
};
