//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
// Copyright (c) 2018 Retargetable Decompiler <info@retdec.com>
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

void _GLOBAL__sub_I_CLIENT_NAME(void);
int32_t CLIENT_DATE(int32_t a1, int32_t result);
int32_t function_11f(void);
int32_t function_122(void);
int32_t function_139(void);
int32_t function_150(void);
int32_t function_166(void);
int32_t function_177(void);
int32_t function_1b3(int32_t a1, int32_t a2);

// --------------------- Global Variables ---------------------

int32_t g1 = 0; // eax
int32_t g2 = 0; // ebp

// ------------------------ Functions -------------------------

// Address range: 0x0 - 0x13
int32_t CLIENT_DATE(int32_t a1, int32_t result) {
    // 0x0
    return result;
}

// Address range: 0x11f - 0x121
int32_t function_11f(void) {
    // 0x11f
    return function_166();
}

// Address range: 0x122 - 0x123
int32_t function_122(void) {
    // 0x122
    return 0;
}

// Address range: 0x139 - 0x13a
int32_t function_139(void) {
    // 0x139
    return 0;
}

// Address range: 0x150 - 0x151
int32_t function_150(void) {
    // 0x150
    return 0;
}

// Address range: 0x166 - 0x172
int32_t function_166(void) {
    int32_t v1 = *(int32_t *)20 ^ *(int32_t *)(g2 - 12); // bp+169
    g1 = v1;
    int32_t result = v1; // bp+170
    if (v1 == 0) {
        // bb
        result = function_177();
        // branch -> 0x172
    }
    // 0x172
    return result;
}

// Address range: 0x177 - 0x17d
int32_t function_177(void) {
    // 0x177
    return g1;
}

// Address range: 0x17d - 0x1ae
// Line range:    0 - 66
void _GLOBAL__sub_I_CLIENT_NAME(void) {
    // 0x17d
    g1 = 0;
    // bb
    function_1b3(1, 0xffff);
    // branch -> 0x1ae
}

// Address range: 0x1b3 - 0x1b5
int32_t function_1b3(int32_t a1, int32_t a2) {
    // 0x1b3
    return g1;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: gcc (4.6.3)
// Detected language: C++
// Detected functions: 9
// Decompilation date: 2018-06-10 00:54:07
