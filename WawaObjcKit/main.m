//
//  main.m
//  WawaObjcKit
//
//  Created by macRong on 2018/10/30.
//  Copyright © 2018年 macRong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WawaArray.h"
#import "WawaDictionary.h"

int main(int argc, const char * argv[])
{
    @autoreleasepool
    {
//        NSArray *arr = @[@"1"];
//        NSMutableArray *marr = @[@"a"].mutableCopy;
//        wawa_marr_InsertValidObjectTomArray(marr, @"b", 1);
        
        NSMutableDictionary *mdic = @{}.mutableCopy;
        wawa_mdic_setValidObjectFormDictionary(mdic, @"name", @"张三");
        
        
    }
    
    return 0;
}
