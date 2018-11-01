//
//  WawaString.h
//  WawaObjcKit
//
//  Created by macRong on 2018/11/1.
//  Copyright © 2018年 macRong. All rights reserved.
//

#ifndef WawaString_h
#define WawaString_h
#import "WawaObject.h"

NS_ASSUME_NONNULL_BEGIN

// ============== @interface ========================

BOOL wawa_str_Is_Valid(NSString *str);
NSString *wawa_str_protect(NSString *str);


// ============== @implementation ===================

BOOL wawa_str_Is_Valid(NSString *str)
{
    if (wawa_objc_valid(str, [NSString class]) &&
        str.length > 0)
    {
        return YES;
    }
    
    return NO;
}

/** 当为nil时，返回@"" */
NSString *wawa_str_protect(NSString *str)
{
    return wawa_str_Is_Valid(str) ? str : @"";
}


NS_ASSUME_NONNULL_END
#endif /* WawaString_h */
