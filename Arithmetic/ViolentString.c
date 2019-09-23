//
//  ViolentString.c
//  Arithmetic
//
//  Created by 蔡杰 on 2018/6/15.
//  Copyright © 2018年 AllanCai. All rights reserved.
//

#include "ViolentString.h"
#include <string.h>



int violentString(char *src , char *pattern) {
    
    
    if (src == NULL || pattern == NULL) {
        return -1;
    }
    
    int srcLen  = (int)strlen(src);
    int patternLen = (int) strlen(pattern);
    
    if (srcLen < patternLen) {
        return -1;
    }
    
    int srcInx = 0;
    int patternInx = 0;
    
    while (srcInx < srcLen && patternInx < patternLen) {
        
        if (src[srcInx] == pattern[patternInx]) {
            srcInx ++;
            patternInx ++;
        } else {
            //优化：问题出现在这里，patternInx每次回溯到0
            srcInx = srcInx - patternInx +1;
            patternInx = 0;
        }
    }
    if (patternInx == patternLen) {
        return srcInx - patternInx;
    }
    return -1;
}
