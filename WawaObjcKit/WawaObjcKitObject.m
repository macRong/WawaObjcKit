//
//  WawaObjcKitObject.m
//  WawaObjcKit
//
//  Created by mac on 2018/11/28.
//  Copyright © 2018年 mac. All rights reserved.
//

#import "WawaObjcKitObject.h"

inline BOOL wawa_objc_iskindClass_valid(id object, Class aClass)
{
    if (wawa_value_valid(object) &&
        [object isKindOfClass:aClass])
    {
        return YES;
    }
    
    return NO;
}

inline BOOL wawa_objc_isMember_valid(id object, Class aClass)
{
    if (wawa_value_valid(object) &&
        [object isMemberOfClass:aClass])
    {
        return YES;
    }
    
    return NO;
}

inline BOOL wawa_value_valid(id object)
{
    if (object != nil &&
        (NSNull *)object != [NSNull null])
    {
        return YES;
    }
    
    return NO;
}
