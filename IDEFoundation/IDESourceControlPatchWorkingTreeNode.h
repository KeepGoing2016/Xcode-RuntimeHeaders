/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDESourceControlPatchNode-Protocol.h"

@class IDESourceControlManager, IDESourceControlWorkingTree, NSMutableArray, NSString;

@interface IDESourceControlPatchWorkingTreeNode : NSObject <IDESourceControlPatchNode>
{
    IDESourceControlWorkingTree *_workingTree;
    NSMutableArray *_children;
    IDESourceControlManager *_scm;
    NSString *_baseRevision;
}

@property(copy) NSString *baseRevision; // @synthesize baseRevision=_baseRevision;
@property(readonly) NSMutableArray *children; // @synthesize children=_children;
@property(readonly) IDESourceControlWorkingTree *workingTree; // @synthesize workingTree=_workingTree;
@property __weak IDESourceControlManager *scm; // @synthesize scm=_scm;
- (void).cxx_destruct;
- (id)initWithTree:(id)arg1;
- (void)addNodes:(id)arg1;
- (id)modifiedItems;
- (BOOL)resolved;
- (id)representedObject;
- (id)fileWrapper;
- (id)indexInfo;

@end

