/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IDERefactoringIssueLocation, NSString;

@interface IDERefactoringIssue : NSObject
{
    NSString *_message;
    int _category;
    int _kind;
    IDERefactoringIssueLocation *_location;
}

@property(readonly) IDERefactoringIssueLocation *location; // @synthesize location=_location;
@property(readonly) int kind; // @synthesize kind=_kind;
@property(readonly) int category; // @synthesize category=_category;
@property(readonly) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (id)initWithMessage:(id)arg1 category:(int)arg2 kind:(int)arg3 oldLocation:(id)arg4 newLocation:(id)arg5;

@end

