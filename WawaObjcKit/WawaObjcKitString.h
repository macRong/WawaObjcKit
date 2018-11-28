//
//  WawaObjcKitString.h
//  WawaObjcKit
//
//  Created by mac on 2018/11/28.
//  Copyright © 2018年 mac. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXTERN  BOOL wawa_str_Is_Valid(NSString *str);
FOUNDATION_EXTERN  NSString* wawa_str_protect(NSString *str);
FOUNDATION_EXTERN  NSString* wawa_str_substringWithRange(NSString *str, NSRange range);

FOUNDATION_EXTERN  BOOL wawa_mstr_Is_Valid(NSString *str);
FOUNDATION_EXTERN  NSString* wawa_mstr_protect(NSString *str);
FOUNDATION_EXTERN  NSString* wawa_mstr_substringWithRange(NSString *str, NSRange range);
FOUNDATION_EXTERN  void wawa_mstr_insertStringAtIndex(NSMutableString *str, NSString *string, NSUInteger atIndex);
FOUNDATION_EXTERN  void wawa_mstr_replaceCharactersInRangeWithString(NSMutableString *str, NSRange range, NSString *string);
FOUNDATION_EXTERN  void wawa_mstr_deleteCharactersInRange(NSMutableString *str, NSRange range);


NS_ASSUME_NONNULL_END
