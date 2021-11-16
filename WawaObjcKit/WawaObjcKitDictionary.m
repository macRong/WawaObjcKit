//
//  WawaObjcKitDictionary.m
//  WawaObjcKit
//
//  Created by mac on 2018/11/28.
//  Copyright © 2018年 mac. All rights reserved.
//

#import "WawaObjcKitDictionary.h"
#import "WawaObjcKitObject.h"


#pragma mark -  —————————————— NSDictionary —————————————

inline BOOL wawa_dic_valid(id object)
{
    if (object != nil &&
        (NSNull *)object != [NSNull null] &&
        [object isKindOfClass:[NSDictionary class]])
    {
        return ((NSDictionary *)object).count > 0 ? YES : NO;
    }
    
    return NO;
}

inline BOOL wawa_dic_valid_containEmptyDic(id object)
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
inline id wawa_dic_getValidObject(NSDictionary *dic, id key)
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

inline BOOL wawa_mdic_valid(id object)
{
    if (object != nil &&
        (NSNull *)object != [NSNull null] &&
        [object isKindOfClass:[NSMutableDictionary class]])
    {
        return ((NSMutableDictionary *)object).count > 0 ? YES : NO;
    }
    
    return NO;
}

inline BOOL wawa_mdic_valid_containEmptyDic(id object)
{
    if (object != nil &&
        (NSNull *)object != [NSNull null] &&
        [object isKindOfClass:[NSMutableDictionary class]])
    {
        return YES;
    }
    
    return NO;
}

inline void wawa_mdic_setValidObject(NSMutableDictionary *dic, id key, id value)
{
    if (wawa_mdic_valid_containEmptyDic(dic) &&
        wawa_value_valid(key) &&
        wawa_value_valid(value) &&
        [key conformsToProtocol:@protocol(NSCopying)])
    {
        [dic setValue:value forKey:key];
    }
}

inline void wawa_mdic_removeKey(NSMutableDictionary *dic, id key)
{
    if (wawa_mdic_valid_containEmptyDic(dic) &&
        wawa_value_valid(key) &&
        [key conformsToProtocol:@protocol(NSCopying)])
    {
        [dic removeObjectForKey:key];
    }
}
