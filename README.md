# WawaObjctKit
Object-C Valid Object

### Usage

```
pod 'WawaObjcKit'

```

### Objc

```
BOOL wawa_value_valid(id object);
BOOL wawa_objc_iskindClass_valid(id object, Class aClass);
BOOL wawa_objc_isMember_valid(id object, Class aClass);

```

### NSArray

```
BOOL wawa_arr_valid(id object);
BOOL wawa_arr_valid_containEmptyArray(id object);
id wawa_arr_getValidObject(NSArray *array, NSInteger index);
NSArray* wawa_arr_subarrayWithRange(NSArray *array, NSRange range);


BOOL wawa_marr_valid(id object);
void wawa_marr_addValidObject(NSMutableArray *array, id value);
void wawa_marr_addValidArray(NSMutableArray *array, NSArray *anArray);
NSArray* wawa_marr_subarrayWithRange(NSMutableArray *array, NSRange range);
void wawa_marr_removeObjectsInRange(NSMutableArray *array, NSRange range);
void wawa_marr_InsertValidObject(NSMutableArray *array, id value, NSInteger index);
void wawa_marr_removeObjectAtIndex(NSMutableArray *array, NSInteger index);
void wawa_marr_replaceObjectAtIndex(NSMutableArray *array, id value, NSInteger index);

```

### NSDictionary

```
BOOL wawa_dic_valid(id object);
BOOL wawa_dic_valid_containEmptyDic(id object);
id wawa_dic_getValidObject(NSDictionary *dic, id key); ///

BOOL wawa_mdic_valid(id object);
BOOL wawa_mdic_valid_containEmptyDic(id object);
void wawa_mdic_setValidObject(NSMutableDictionary *dic, id key, id value);
void wawa_mdic_removeKey(NSMutableDictionary *dic, id key); ///

```

### NSString

```
BOOL wawa_str_Is_Valid(NSString *str);
NSString* wawa_str_protect(NSString *str);
NSString* wawa_str_substringWithRange(NSString *str, NSRange range);

BOOL wawa_mstr_Is_Valid(NSString *str);
NSString* wawa_mstr_protect(NSString *str);
NSString* wawa_mstr_substringWithRange(NSString *str, NSRange range);
void wawa_mstr_insertStringAtIndex(NSMutableString *str, NSString *string, NSUInteger atIndex);
void wawa_mstr_replaceCharactersInRangeWithString(NSMutableString *str, NSRange range, NSString *string);
void wawa_mstr_deleteCharactersInRange(NSMutableString *str, NSRange range);
```
