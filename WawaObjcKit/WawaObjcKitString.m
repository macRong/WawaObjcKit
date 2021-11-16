//
//  WawaObjcKitString.m
//  WawaObjcKit
//
//  Created by mac on 2018/11/28.
//  Copyright © 2018年 mac. All rights reserved.
//

#import "WawaObjcKitString.h"
#import "WawaObjcKitObject.h"

static inline BOOL __wawa_mstr_strRange(NSString *str, NSRange range);
static inline BOOL __wawa_str_strRange(NSString *str, NSRange range);


#pragma mark -  —————————————— NSString —————————————————

inline BOOL wawa_str_Is_Valid(NSString *str)
{
    if (wawa_objc_iskindClass_valid(str, [NSString class]) &&
        str.length > 0)
    {
        return YES;
    }
    
    return NO;
}

/** 当为nil时，返回@"" */
inline NSString *wawa_str_protect(NSString *str)
{
    return wawa_str_Is_Valid(str) ? str : @"";
}

BOOL __wawa_str_strRange(NSString *str, NSRange range)
{
    if (wawa_str_Is_Valid(str) &&
        range.location < str.length &&
        range.location + range.length <= str.length)
    {
        return YES;
    }
    
    return NO;
}

/** substringWithRange: */
inline NSString* wawa_str_substringWithRange(NSString *str, NSRange range)
{
    if (__wawa_str_strRange(str, range))
    {
        return [str substringWithRange:range];
    }
    
    return nil;
}


#pragma mark -  —————————————— NSMutableString —————————————

inline BOOL wawa_mstr_Is_Valid(NSMutableString *str)
{
    if (wawa_objc_iskindClass_valid(str, [NSMutableString class]) &&
        str.length > 0)
    {
        return YES;
    }
    
    return NO;
}

BOOL __wawa_mstr_strRange(NSString *str, NSRange range)
{
    if (wawa_mstr_Is_Valid(str) &&
        range.location < str.length &&
        range.location + range.length <= str.length)
    {
        return YES;
    }
    
    return NO;
}

inline NSString* wawa_mstr_protect(NSString *str)
{
    return wawa_mstr_Is_Valid(str) ? str : @"";
}

/** substringWithRange: */
inline NSString* wawa_mstr_substringWithRange(NSMutableString *str, NSRange range)
{
    if (__wawa_mstr_strRange(str, range))
    {
        return [str substringWithRange:range];
    }
    
    return nil;
}

/** replaceCharactersInRange:withString: */
inline void wawa_mstr_replaceCharactersInRangeWithString(NSMutableString *str, NSRange range, NSString *string)
{
    if (__wawa_mstr_strRange(str, range) &&
        wawa_str_Is_Valid(string))
    {
        [str replaceCharactersInRange:range withString:string];
    }
}

/** insertString:atIndex: */
inline void wawa_mstr_insertStringAtIndex(NSMutableString *str, NSString *string, NSUInteger atIndex)
{
    if (wawa_mstr_Is_Valid(str) &&
        wawa_str_Is_Valid(string)&&
        atIndex < str.length)
    {
        [str insertString:string atIndex:atIndex];
    }
}

/** deleteCharactersInRange: */
inline void wawa_mstr_deleteCharactersInRange(NSMutableString *str, NSRange range)
{
    if (__wawa_mstr_strRange(str, range))
    {
        [str deleteCharactersInRange:range];
    }
}
