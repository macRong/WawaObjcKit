//
//  WawabjcKitDictionary.h
//  WawaObjcKit
//
//  Created by mac on 2018/11/28.
//  Copyright © 2018年 mac. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXTERN  BOOL wawa_dic_valid(id object);
FOUNDATION_EXTERN  BOOL wawa_dic_valid_containEmptyDic(id object);
FOUNDATION_EXTERN  id wawa_dic_getValidObject(NSDictionary *dic, id key); ///

FOUNDATION_EXTERN  BOOL wawa_mdic_valid(id object);
FOUNDATION_EXTERN  BOOL wawa_mdic_valid_containEmptyDic(id object);
FOUNDATION_EXTERN  void wawa_mdic_setValidObject(NSMutableDictionary *dic, id key, id value);
FOUNDATION_EXTERN  void wawa_mdic_removeKey(NSMutableDictionary *dic, id key); ///


NS_ASSUME_NONNULL_END
