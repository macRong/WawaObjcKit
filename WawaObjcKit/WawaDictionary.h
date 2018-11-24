//
//  WawaDictionary.h
//  WawaObjcKit
//
//  Created by macRong on 2018/11/1.
//  Copyright © 2018年 macRong. All rights reserved.
//

#ifndef WawaDictionary_h
#define WawaDictionary_h
#import "WawaObject.h"
NS_ASSUME_NONNULL_BEGIN


// ============== @interface ===================

BOOL wawa_dic_valid(id object);
BOOL wawa_dic_valid_containEmptyDic(id object);
id wawa_dic_getValidObject(NSDictionary *dic, id key); ///

BOOL wawa_mdic_valid(id object);
BOOL wawa_mdic_valid_containEmptyDic(id object);
void wawa_mdic_setValidObject(NSMutableDictionary *dic, id key, id value);
void wawa_mdic_removeKey(NSMutableDictionary *dic, id key); ///


// ============== @implementation ===================


#pragma mark -  —————————————— NSDictionary —————————————

BOOL wawa_dic_valid(id object)
{
    if (object != nil &&
        (NSNull *)object != [NSNull null] &&
        [object isKindOfClass:[NSDictionary class]])
    {
        return ((NSDictionary *)object).count > 0 ? YES : NO;
    }
    
    return NO;
}

BOOL wawa_dic_valid_containEmptyDic(id object)
{
    if (object != nil &&
        (NSNull *)object != [NSNull null] &&
        [object isKindOfClass:[NSDictionary class]])
    {
        return YES;
    }
    
    return NO;
}

/** objectForKey: 可以不用 */
id wawa_dic_getValidObject(NSDictionary *dic, id key)
{
    if (wawa_dic_valid(dic) &&
        wawa_value_valid(key) &&
        [key conformsToProtocol:@protocol(NSCopying)])
    {
        return dic[key];
    }
    
    return nil;
}


#pragma mark -  ———————————— NSMutableDictionary ———————————

BOOL wawa_mdic_valid(id object)
{
    if (object != nil &&
        (NSNull *)object != [NSNull null] &&
        [object isKindOfClass:[NSMutableDictionary class]])
    {
        return ((NSMutableDictionary *)object).count > 0 ? YES : NO;
    }
    
    return NO;
}

BOOL wawa_mdic_valid_containEmptyDic(id object)
{
    if (object != nil &&
        (NSNull *)object != [NSNull null] &&
        [object isKindOfClass:[NSMutableDictionary class]])
    {
        return YES;
    }
    
    return NO;
}

void wawa_mdic_setValidObject(NSMutableDictionary *dic, id key, id value)
{
    if (wawa_mdic_valid_containEmptyDic(dic) &&
        wawa_value_valid(key) &&
        wawa_value_valid(value) &&
        [key conformsToProtocol:@protocol(NSCopying)])
    {
        [dic setValue:value forKey:key];
    }
}

void wawa_mdic_removeKey(NSMutableDictionary *dic, id key)
{
    if (wawa_mdic_valid_containEmptyDic(dic) &&
        wawa_value_valid(key) &&
        [key conformsToProtocol:@protocol(NSCopying)])
    {
        [dic removeObjectForKey:key];
    }
}


NS_ASSUME_NONNULL_END
#endif /* WawaDictionary_h */
