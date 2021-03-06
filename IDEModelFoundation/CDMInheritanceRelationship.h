/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class CDMEntity, CDMModel, DVTStackBacktrace, NSNumber;

@interface CDMInheritanceRelationship : NSObject <DVTInvalidation>
{
    CDMEntity *parentEntity;
    NSNumber *uniqueID;
    CDMEntity *entity;
    CDMModel *model;
}

+ (void)initialize;
@property(copy) NSNumber *uniqueID; // @synthesize uniqueID;
@property(retain) CDMEntity *entity; // @synthesize entity;
@property(retain) CDMModel *model; // @synthesize model;
@property(retain) CDMEntity *parentEntity; // @synthesize parentEntity;
- (void).cxx_destruct;
- (id)name;
- (id)init;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

