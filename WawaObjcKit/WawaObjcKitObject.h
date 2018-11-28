//
//  WawaObjcKitObject.h
//  WawaObjcKit
//
//  Created by mac on 2018/11/28.
//  Copyright © 2018年 mac. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXTERN  BOOL wawa_value_valid(id object);
FOUNDATION_EXTERN  BOOL wawa_objc_iskindClass_valid(id object, Class aClass); ///
FOUNDATION_EXTERN  BOOL wawa_objc_isMember_valid(id object, Class aClass);    ///

NS_ASSUME_NONNULL_END
