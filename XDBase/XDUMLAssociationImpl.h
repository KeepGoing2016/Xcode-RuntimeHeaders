/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <XDBase/XDUMLClassifierImp.h>

#import "XDUMLAssociation-Protocol.h"

@class NSMutableArray;

@interface XDUMLAssociationImpl : XDUMLClassifierImp <XDUMLAssociation>
{
    NSMutableArray *_ends;
}

- (void)addMemberEnd:(id)arg1;
- (id)relatedElements;
- (id)memberEnds;
- (id)ownedEnds;
- (BOOL)isDerived;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end
