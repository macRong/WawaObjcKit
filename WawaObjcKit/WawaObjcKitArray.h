//
//  WawaObjcKitArray.h
//  WawaObjcKit
//
//  Created by mac on 2018/11/28.
//  Copyright © 2018年 mac. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXTERN  BOOL wawa_arr_valid(id object);
FOUNDATION_EXTERN  BOOL wawa_arr_valid_containEmptyArray(id object);
FOUNDATION_EXTERN  id wawa_arr_getValidObject(NSArray *array, NSInteger index);
FOUNDATION_EXTERN  NSArray* wawa_arr_subarrayWithRange(NSArray *array, NSRange range);


FOUNDATION_EXTERN  BOOL wawa_marr_valid(id object);
FOUNDATION_EXTERN  BOOL wawa_marr_valid_containEmptyArray(id object);
FOUNDATION_EXTERN  void wawa_marr_addValidObject(NSMutableArray *array, id value);
FOUNDATION_EXTERN  void wawa_marr_addValidArray(NSMutableArray *array, NSArray *anArray);
FOUNDATION_EXTERN  NSArray* wawa_marr_subarrayWithRange(NSMutableArray *array, NSRange range);
FOUNDATION_EXTERN  void wawa_marr_removeObjectsInRange(NSMutableArray *array, NSRange range);
FOUNDATION_EXTERN  void wawa_marr_InsertValidObject(NSMutableArray *array, id value, NSInteger index);
FOUNDATION_EXTERN  void wawa_marr_removeObjectAtIndex(NSMutableArray *array, NSInteger index);
FOUNDATION_EXTERN  void wawa_marr_replaceObjectAtIndex(NSMutableArray *array, id value, NSInteger index);
FOUNDATION_EXTERN  id wawa_marr_getValidObject(NSMutableArray *array, NSInteger index);

NS_ASSUME_NONNULL_END

