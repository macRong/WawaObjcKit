//
//  WawaObject.h
//  WawaObjcKit
//
//  Created by macRong on 2018/10/30.
//  Copyright © 2018年 macRong. All rights reserved.
//

#ifndef WawaObject_h
#define WawaObject_h
#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

BOOL wawa_value_valid(id object);
BOOL wawa_objc_iskindClass_valid(id object, Class aClass);
BOOL wawa_objc_isMember_valid(id object, Class aClass);

// --------- objc-------------

BOOL wawa_objc_iskindClass_valid(id object, Class aClass)
{
    if (wawa_value_valid(object) &&
        [object isKindOfClass:aClass])
    {
        return YES;
    }
    
    return NO;
}

BOOL wawa_objc_isMember_valid(id object, Class aClass)
{
    if (wawa_value_valid(object) &&
        [object isMemberOfClass:aClass])
    {
        return YES;
    }
    
    return NO;
}

BOOL wawa_value_valid(id object)
{
    if (object != nil &&
        (NSNull *)object != [NSNull null])
    {
        return YES;
    }
    
    return NO;
}

NS_ASSUME_NONNULL_END
#endif /* WawaObject_h */
