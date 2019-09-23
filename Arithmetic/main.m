//
//  main.m
//  Arithmetic
//
//  Created by 蔡杰 on 2018/6/15.
//  Copyright © 2018年 AllanCai. All rights reserved.
//

#include "ViolentString.h"

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        NSLog(@"Hello, World!");
        
        char *src = "BBC ABCDAB ABCDABCDABDE";
        char *pattern = "ABCDABD";
        
        NSLog(@"字符串 - %d",violentString(src,pattern));
    }
    return 0;
}
