//
//  WawaObjcKitArray.m
//  WawaObjcKit
//
//  Created by mac on 2018/11/28.
//  Copyright © 2018年 mac. All rights reserved.
//

#import "WawaObjcKitArray.h"

static inline BOOL __wawa_marr_rangeValid(NSMutableArray *array, NSRange range);
static inline BOOL __wawa_arr_rangeValid(NSArray *array, NSRange range);


#pragma mark -  —————————————————— array ——————————————————

/** @[obj] 必须有元素 */
inline BOOL wawa_arr_valid(id object)
{
    if (object != nil &&
        (NSNull *)object != [NSNull null] &&
        [object isKindOfClass:[NSArray class]])
    {
        return ((NSArray*)object).count > 0 ? YES : NO;
    }
    
    return NO;
}

/** @[] 没元素也是有效数组 */
inline BOOL wawa_arr_valid_containEmptyArray(id object)
{
    if (object != nil &&
        (NSNull *)object != [NSNull null] &&
        [object isKindOfClass:[NSArray class]])
    {
        return YES;
    }
    
    return NO;
}

/** objectAtIndex: */
inline id wawa_arr_getValidObject(NSArray *array, NSInteger index)
{
    if (wawa_arr_valid(array) &&
        index < array.count)
    {
        return array[index];
    }
    
    return nil;
}

BOOL __wawa_arr_rangeValid(NSArray *array, NSRange range)
{
    if (wawa_arr_valid(array) &&
        range.location < array.count &&
        range.location + range.length <= array.count)
    {
        return YES;
    }
    
    return NO;
}

inline NSArray* wawa_arr_subarrayWithRange(NSArray *array, NSRange range)
{
    if (__wawa_arr_rangeValid(array, range))
    {
        return [array subarrayWithRange:range];
    }
    
    return nil;
}


#pragma mark -  —————————————————— mutableArray ——————————————

/** @[obj] 必须有元素 */
inline BOOL wawa_marr_valid(id object)
{
    if (wawa_value_valid(object) &&
        [object isKindOfClass:[NSMutableArray class]])
    {
        return ((NSMutableArray*)object).count > 0 ? YES : NO;
    }
    
    return NO;
}

/** @[] 没元素也是有效数组 */
inline BOOL wawa_marr_valid_containEmptyArray(id object)
{
    if (object != nil &&
        (NSNull *)object != [NSNull null] &&
        [object isKindOfClass:[NSMutableArray class]])
    {
        return YES;
    }
    
    return NO;
}

/** addObject: */
inline void wawa_marr_addValidObject(NSMutableArray *array, id value)
{
    if (wawa_marr_valid_containEmptyArray(array) &&
        wawa_value_valid(value))
    {
        [array addObject:value];
    }
}

/** addObjectsFromArray: */
inline void wawa_marr_addValidArray(NSMutableArray *array, NSArray *anArray)
{
    if (wawa_marr_valid_containEmptyArray(array) &&
        wawa_arr_valid(anArray))
    {
        [array addObjectsFromArray:anArray];
    }
}

BOOL __wawa_marr_rangeValid(NSMutableArray *array, NSRange range)
{
    if (wawa_marr_valid(array) &&
        range.location < array.count &&
        range.location + range.length <= array.count)
    {
        return YES;
    }
    
    return NO;
}

/** subarrayWithRange */
inline NSArray* wawa_marr_subarrayWithRange(NSMutableArray *array, NSRange range)
{
    if (__wawa_marr_rangeValid(array, range))
    {
        return  [array subarrayWithRange:range];
    }
    
    return nil;
}

/** removeObjectsInRange */
inline void wawa_marr_removeObjectsInRange(NSMutableArray *array, NSRange range)
{
    if (__wawa_marr_rangeValid(array, range))
    {
        [array removeObjectsInRange:range];
    }
}

/** insertObject:atIndex: */
inline void wawa_marr_InsertValidObject(NSMutableArray *array, id value, NSInteger index)
{
    if (wawa_marr_valid_containEmptyArray(array) &&
        wawa_value_valid(value) &&
        index <= array.count)
    {
        [array insertObject:value atIndex:index];
    }
}

/** removeObjectAtIndex: */
inline void wawa_marr_removeObjectAtIndex(NSMutableArray *array, NSInteger index)
{
    if (wawa_marr_valid(array) &&
        index < array.count)
    {
        [array removeObjectAtIndex:index];
    }
}

/** replaceObjectAtIndex:withObject: */
inline void wawa_marr_replaceObjectAtIndex(NSMutableArray *array, id value, NSInteger index)
{
    if (wawa_marr_valid(array) &&
        wawa_value_valid(value) &&
        index < array.count)
    {
        [array replaceObjectAtIndex:index withObject:value];
    }
}

