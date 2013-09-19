/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTDocumentLocation.h"

@class NSString;

@interface IDESourceControlDocumentLocation : DVTDocumentLocation
{
    NSString *_branchName;
    NSString *_revisionName;
}

@property(readonly) NSString *revisionName; // @synthesize revisionName=_revisionName;
@property(readonly) NSString *branchName; // @synthesize branchName=_branchName;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualDisregardingTimestamp:(id)arg1;
- (id)workingTreeItem;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocumentLocation:(id)arg1 branchName:(id)arg2 revisionName:(id)arg3;
- (id)initWithDocumentURL:(id)arg1 branchName:(id)arg2 revisionName:(id)arg3;

@end

