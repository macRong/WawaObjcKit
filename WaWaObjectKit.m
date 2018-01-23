//
//  WaWaObjectKit.m
//  R
//
//  Created by macRong on 2018/1/23.
//  Copyright © 2018年 Shengshui. All rights reserved.
//

#import "WaWaObjectKit.h"

@implementation WaWaObjectKit

BOOL isValidValue(id object)
{
    if (object!=nil && (NSNull *)object != [NSNull null])
    {
        return YES;
    }
    return NO;
}

BOOL isValidObject(id object, Class aClass)
{
    if (object!=nil && (NSNull *)object != [NSNull null] && [object isKindOfClass:aClass])
    {
        return YES;
    }
    return NO;
}

BOOL isValidNSDictionary(id object)
{
    if (object!=nil && (NSNull *)object != [NSNull null] && ([object isKindOfClass:[NSDictionary class]]||[object isKindOfClass:[NSMutableDictionary class]]))
    {
        return ((NSDictionary*)object).allKeys.count>0?YES:NO;
    }
    return NO;
}

BOOL isValidNSArray(id object)
{
    if (object!=nil && (NSNull *)object != [NSNull null] && [object isKindOfClass:[NSArray class]])
    {
        return ((NSArray*)object).count>0?YES:NO;
    }
    return NO;
}

/** @[] 没元素也是有效数组 */
BOOL isValidContainEmptyArray(id object)
{
    if (object!=nil && (NSNull *)object != [NSNull null] && [object isKindOfClass:[NSArray class]])
    {
        return YES;
    }
    return NO;
}



BOOL isValidNSString(id object)
{
    if (object!=nil && (NSNull *)object != [NSNull null] && [object isKindOfClass:[NSString class]])
    {
        return ((NSString*)object).length>0?YES:NO;
    }
    return NO;
}

BOOL isValidNSNumber(id object)
{
    if (object!=nil && (NSNull *)object != [NSNull null] && [object isKindOfClass:[NSNumber class]] && ![((NSNumber*)object) isEqualToNumber:[NSDecimalNumber notANumber]])
    {
        return YES;
    }
    return NO;
}

BOOL isValidNSURL(id object)
{
    if (object!=nil && (NSNull *)object != [NSNull null] && [object isKindOfClass:[NSURL class]])
    {
        return isValidNSString([object absoluteString])?YES:NO;
    }
    return NO;
}

id getValidObjectFromArray(NSArray *array, NSInteger index)
{
    if (isValidNSArray(array) && index<array.count) {
        return array[index];
    }
    return nil;
}

void removeValidObjectFromArray(NSMutableArray *array, NSInteger index)
{
    if (isValidNSArray(array) && index<array.count) {
        [array removeObjectAtIndex:index];
    }
}

id getValidObjectFromDictionary(NSDictionary *dic, NSString *key)
{
    if (isValidNSDictionary(dic) && isValidNSString(key)) {
        return dic[key];
    }
    return nil;
}

void setValidObjectForDictionary(NSMutableDictionary *dic, NSString*key, id value)
{
    if(value && isValidNSString(key))
    {
        [dic setValue:value forKey:key];
    }
}

void addValidObjectForArray(NSMutableArray *array, id value)
{
    if (array!=nil && (NSNull *)array != [NSNull null] && [array isKindOfClass:[NSArray class]])
    {
        if (value) {
            [array addObject:value];
        }
    }
}

void addValidArrayForArray(NSMutableArray *array, NSArray *value)
{
    if (array!=nil && (NSNull *)array != [NSNull null] && [array isKindOfClass:[NSArray class]])
    {
        if (isValidNSArray(value)) {
            [array addObjectsFromArray:value];
        }
    }
}

void replaceValidObjectForArray(NSMutableArray *array, NSInteger index, id value)
{
    if ((array!=nil && (NSNull *)array != [NSNull null] && [array isKindOfClass:[NSArray class]]) && value && index<array.count) {
        [array replaceObjectAtIndex:index withObject:value];
    }
}

@end
