//
//  WawaArray.h
//  Wawa
//
//  Created by macRong on 2018/10/29.
//  Copyright © 2018年 macRong. All rights reserved.
//

#ifndef WawaArray_H
#define WawaArray_H

#import "WawaObject.h"
NS_ASSUME_NONNULL_BEGIN

// ============== @interface ===================

BOOL wawa_arr_valid(id object);
BOOL wawa_arr_valid_containEmptyArray(id object);
id wawa_arr_getValidObjectFromArray(NSArray *array, NSInteger index);

BOOL wawa_marr_valid(id object);
void wawa_marr_addValidObjectTomArray(NSMutableArray *array, id value);
void wawa_marr_addValidArrayTomArray(NSMutableArray *array, NSArray *anArray);
void wawa_marr_InsertValidObjectTomArray(NSMutableArray *array, id value, NSInteger index);
void wawa_marr_removeObjectAtIndexFrommArray(NSMutableArray *array, NSInteger index);
void wawa_marr_replaceObjectAtIndexFromArray(NSMutableArray *array, id value, NSInteger index);


// ============== @implementation ==============

#pragma mark  --------- array -------------

/** @[obj] 必须有元素 */
BOOL wawa_arr_valid(id object)
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
BOOL wawa_arr_valid_containEmptyArray(id object)
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
id wawa_arr_getValidObjectFromArray(NSArray *array, NSInteger index)
{
    if (wawa_arr_valid(array) &&
        index < array.count)
    {
        return array[index];
    }
    
    return nil;
}


#pragma mark --------- mutableArray -------------

/** @[obj] 必须有元素 */
BOOL wawa_marr_valid(id object)
{
    if (wawa_value_valid(object) &&
        [object isKindOfClass:[NSMutableArray class]])
    {
        return ((NSMutableArray*)object).count > 0 ? YES : NO;
    }
    
    return NO;
}

/** @[] 没元素也是有效数组 */
BOOL wawa_marr_valid_containEmptyArray(id object)
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
void wawa_marr_addValidObjectTomArray(NSMutableArray *array, id value)
{
    if (wawa_marr_valid_containEmptyArray(array) &&
        wawa_value_valid(value))
    {
        [array addObject:value];
    }
}

/** addObjectsFromArray: */
void wawa_marr_addValidArrayTomArray(NSMutableArray *array, NSArray *anArray)
{
    if (wawa_marr_valid_containEmptyArray(array) &&
        wawa_arr_valid(anArray))
    {
        [array addObjectsFromArray:anArray];
    }
}

/** insertObject:atIndex: */
void wawa_marr_InsertValidObjectTomArray(NSMutableArray *array, id value, NSInteger index)
{
    if (wawa_marr_valid_containEmptyArray(array) &&
        wawa_value_valid(value) &&
        index <= array.count)
    {
        [array insertObject:value atIndex:index];
    }
}

/** removeObjectAtIndex: */
void wawa_marr_removeObjectAtIndexFrommArray(NSMutableArray *array, NSInteger index)
{
    if (wawa_marr_valid(array) &&
         index < array.count)
    {
        [array removeObjectAtIndex:index];
    }
}

/** replaceObjectAtIndex:withObject: */
void wawa_marr_replaceObjectAtIndexFromArray(NSMutableArray *array, id value, NSInteger index)
{
    if (wawa_marr_valid(array) &&
        wawa_value_valid(value) &&
        index < array.count)
    {
        [array replaceObjectAtIndex:index withObject:value];
    }
}


NS_ASSUME_NONNULL_END

#endif
