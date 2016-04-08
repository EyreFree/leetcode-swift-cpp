//
//  191.cpp
//  leetcode-swift-cpp
//
//  Created by MBP on 16/3/30.
//  Copyright © 2016年 eyrefree. All rights reserved.
//

#include <stdio.h>

#ifndef _UINT32_T
#define _UINT32_T
typedef unsigned int uint32_t;
#endif /* _UINT32_T */

class Solution191Numberof1Bits {
public:
    int hammingWeight(uint32_t n) {
        int result = 0;
        for (int i = 0; i < 32; ++i) {
            if ((1 & n) == 1) {
                ++result;
            }
            n >>= 1;
        }
        return result;
    }
};