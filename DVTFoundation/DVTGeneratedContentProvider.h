/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, NSString;

@interface DVTGeneratedContentProvider : NSObject <DVTInvalidation>
{
}

+ (void)initialize;
+ (id)sourceFilePathForGeneratedContentURL:(id)arg1;
- (void)primitiveInvalidate;
- (void)generateContentForURL:(id)arg1 waitingBlock:(id)arg2 completionBlock:(void)arg3;
@property(readonly) NSString *displayName;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

