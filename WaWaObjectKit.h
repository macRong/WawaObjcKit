//
//  WaWaObjectKit.h
//  R
//
//  Created by macRong on 2018/1/23.
//  Copyright © 2018年 Shengshui. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WaWaObjectKit : NSObject

BOOL isValidValue(id object);
BOOL isValidObject(id object, Class aClass);
BOOL isValidNSDictionary(id object);
BOOL isValidNSArray(id object);
BOOL isValidContainEmptyArray(id object);
BOOL isValidNSString(id object);
BOOL isValidNSNumber(id object);
BOOL isValidNSURL(id object);

id getValidObjectFromArray(NSArray *array, NSInteger index);
id getValidObjectFromDictionary(NSDictionary *dic, NSString *key);

void setValidObjectForDictionary(NSMutableDictionary *dic, NSString*key, id value);
void addValidObjectForArray(NSMutableArray *array, id value);
void addValidArrayForArray(NSMutableArray *array, NSArray *value);
void replaceValidObjectForArray(NSMutableArray *array, NSInteger index, id value);

void removeValidObjectFromArray(NSMutableArray *array, NSInteger index);

@end
