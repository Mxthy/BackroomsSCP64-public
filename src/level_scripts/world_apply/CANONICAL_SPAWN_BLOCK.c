/* BackroomsSCP64 – CANONICAL SPAWN BLOCK
 * Paste into script_func_local_1[] of target levels.
 * Requires: group0.h, MODEL_SCP*, MODEL_DATA_PAD, MODEL_SEAL_NODE, MODEL_DIM_*,
 *           bhvScp173/096/106, bhvDataPad, bhvSealNode, bhvDimProp
 * DO NOT edit behaviors while World-Apply is active.
 */

    /* --- SCPs --- */
    OBJECT(/*model*/ MODEL_SCP173, /*pos*/ 0, 400, 0, /*angle*/ 0, 0, 0, /*behParam*/ 0, /*beh*/ bhvScp173),
    OBJECT(/*model*/ MODEL_SCP096, /*pos*/ 900, 400, 600, /*angle*/ 0, 0, 0, /*behParam*/ 0, /*beh*/ bhvScp096),
    OBJECT(/*model*/ MODEL_SCP106, /*pos*/ -900, 300, -500, /*angle*/ 0, 0, 0, /*behParam*/ 0, /*beh*/ bhvScp106),

    /* --- Collectibles --- */
    OBJECT(/*model*/ MODEL_DATA_PAD, /*pos*/ 500, 350, -800, /*angle*/ 0, 0, 0, /*behParam*/ 0, /*beh*/ bhvDataPad),
    OBJECT(/*model*/ MODEL_DATA_PAD, /*pos*/ -600, 350, 400, /*angle*/ 0, 0, 0, /*behParam*/ 0, /*beh*/ bhvDataPad),
    OBJECT(/*model*/ MODEL_SEAL_NODE, /*pos*/ 0, 300, -2000, /*angle*/ 0, 0, 0, /*behParam*/ 0, /*beh*/ bhvSealNode),

    /* --- Dimension props (volumetric, multi-angle) --- */
    OBJECT(/*model*/ MODEL_DIM_STATION, /*pos*/ 0, 200, -2500, /*angle*/ 0, 0, 0, /*behParam*/ 0, /*beh*/ bhvDimProp),
    OBJECT(/*model*/ MODEL_DIM_CRYSTAL, /*pos*/ 800, 150, -1800, /*angle*/ 0, 45, 0, /*behParam*/ 0, /*beh*/ bhvDimProp),
    OBJECT(/*model*/ MODEL_DIM_CORRIDOR, /*pos*/ -1500, 100, -1200, /*angle*/ 0, 90, 0, /*behParam*/ 0, /*beh*/ bhvDimProp),
    OBJECT(/*model*/ MODEL_DIM_GRASS, /*pos*/ 500, 50, 500, /*angle*/ 0, 0, 0, /*behParam*/ 0, /*beh*/ bhvDimProp),
