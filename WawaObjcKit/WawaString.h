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
NSString* wawa_str_protect(NSString *str);
NSString* wawa_str_substringWithRange(NSString *str, NSRange range);

BOOL wawa_mstr_Is_Valid(NSString *str);
NSString* wawa_mstr_protect(NSString *str);
NSString* wawa_mstr_substringWithRange(NSString *str, NSRange range);
void wawa_mstr_insertStringAtIndex(NSMutableString *str, NSString *string, NSUInteger atIndex);
void wawa_mstr_replaceCharactersInRangeWithString(NSMutableString *str, NSRange range, NSString *string);
void wawa_mstr_deleteCharactersInRange(NSMutableString *str, NSRange range);

// ============== @implementation ===================

#pragma mark -  —————————————— NSString —————————————————

BOOL wawa_str_Is_Valid(NSString *str)
{
    if (wawa_objc_iskindClass_valid(str, [NSString class]) &&
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
NSString* wawa_str_substringWithRange(NSString *str, NSRange range)
{
    if (__wawa_str_strRange(str, range))
    {
        return [str substringWithRange:range];
    }
    
    return nil;
}


#pragma mark -  —————————————— NSMutableString —————————————

BOOL wawa_mstr_Is_Valid(NSMutableString *str)
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

NSString* wawa_mstr_protect(NSString *str)
{
    return wawa_mstr_Is_Valid(str) ? str : @"";
}

/** substringWithRange: */
NSString* wawa_mstr_substringWithRange(NSMutableString *str, NSRange range)
{
    if (__wawa_mstr_strRange(str, range))
    {
        return [str substringWithRange:range];
    }
    
    return nil;
}

/** replaceCharactersInRange:withString: */
void wawa_mstr_replaceCharactersInRangeWithString(NSMutableString *str, NSRange range, NSString *string)
{
    if (__wawa_mstr_strRange(str, range) &&
        wawa_str_Is_Valid(string))
    {
        [str replaceCharactersInRange:range withString:string];
    }
}

/** insertString:atIndex: */
void wawa_mstr_insertStringAtIndex(NSMutableString *str, NSString *string, NSUInteger atIndex)
{
    if (wawa_mstr_Is_Valid(str) &&
        wawa_str_Is_Valid(string)&&
        atIndex < str.length)
    {
        [str insertString:string atIndex:atIndex];
    }
}

/** deleteCharactersInRange: */
void wawa_mstr_deleteCharactersInRange(NSMutableString *str, NSRange range)
{
    if (__wawa_mstr_strRange(str, range))
    {
        [str deleteCharactersInRange:range];
    }
}

NS_ASSUME_NONNULL_END
#endif /* WawaString_h */
