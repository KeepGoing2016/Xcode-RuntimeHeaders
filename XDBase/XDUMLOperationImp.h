/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <XDBase/XDUMLNamespaceImp.h>

#import "XDUMLOperation-Protocol.h"

@class NSMutableArray;

@interface XDUMLOperationImp : XDUMLNamespaceImp <XDUMLOperation>
{
    BOOL _isStatic;
    BOOL _isLeaf;
    BOOL _isQuery;
    NSMutableArray *_parameters;
    NSMutableArray *_returnResults;
}

- (id)description;
- (void)setOwnedParameters:(id)arg1;
- (void)setIsLeaf:(BOOL)arg1;
- (void)setIsQuery:(BOOL)arg1;
- (id)newReturnParameterWithType:(id)arg1;
- (id)newParameterWithName:(id)arg1;
- (BOOL)isLeaf;
- (id)redefinitionContext;
- (id)redefinedElement;
- (id)ownedMembers;
- (id)members;
- (void)setIsStatic:(BOOL)arg1;
- (BOOL)isStatic;
- (id)featuringClassifiers;
- (id)returnResult;
- (id)formalParameters;
- (id)parameters;
- (id)type;
- (id)redefinedOperations;
- (long long)upper;
- (long long)lower;
- (BOOL)isUnique;
- (BOOL)isQuery;
- (BOOL)isOrdered;
- (id)raisedExceptions;
- (id)ownedParameters;
- (id)ownerClass;
- (BOOL)lazyCreateBucketNamed:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

