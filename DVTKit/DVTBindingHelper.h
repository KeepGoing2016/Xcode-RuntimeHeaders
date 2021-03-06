/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTWeakInterposer, NSMutableDictionary, NSString;

@interface DVTBindingHelper : NSObject
{
    DVTWeakInterposer *_owner_dvtWeakInterposer;
    NSMutableDictionary *_bindingInfo;
    NSString *_ignoredBinding;
}

+ (id)dvtValueTransformerFromOptions:(id)arg1;
+ (BOOL)isRunningInInterfaceBuilder;
+ (void)setIsRunningInInterfaceBuilder;
+ (void)initialize;
- (void).cxx_destruct;
- (void)rebind:(id)arg1;
- (id)unbindForKeyPathsBeginningWithPrefix:(id)arg1;
- (void)didEndEditingForBinding:(id)arg1;
- (void)willBeginEditingForBinding:(id)arg1;
- (BOOL)validateValue:(id *)arg1 forBinding:(id)arg2 error:(id *)arg3;
- (id)modelKeyPathForBinding:(id)arg1;
- (id)referenceDataForBinding:(id)arg1;
- (void)setValue:(id)arg1 forBinding:(id)arg2;
- (id)infoForBinding:(id)arg1;
- (id)bindingHelperInfoForBinding:(id)arg1;
- (BOOL)isBindingBound:(id)arg1;
- (id)valueForBinding:(id)arg1;
- (id)primitiveValueForBinding:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (struct objc_method *)_methodForUpdateFromBinding:(id)arg1;
- (id)description;
- (void)unbindAll;
- (void)dealloc;
- (id)initWithOwner:(id)arg1;
- (void)setOwner:(id)arg1;
- (id)owner;

@end

