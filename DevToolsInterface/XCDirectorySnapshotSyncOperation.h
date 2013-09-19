/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableData, NSMutableSet, NSString, XCDirectoryChangeSet, XCDirectorySnapshot;

@interface XCDirectorySnapshotSyncOperation : NSObject
{
    XCDirectorySnapshot *_snapshot;
    XCDirectoryChangeSet *_changeSet;
    NSMutableArray *_pendingCopyTasks;
    unsigned long long _indexIntoDirs;
    NSMutableArray *_directories;
    NSMutableSet *_entriesToDitto;
    NSMutableArray *_entriesToLink;
    NSString *_archivePathStem;
    NSString *_linkSourceRoot;
    NSMutableData *_destinationData;
    char *_destination;
    NSMutableData *_sourceData;
    char *_source;
    unsigned long long _srcBufLen;
    unsigned long long _destBufLen;
    unsigned long long _sourceEndOffset;
    unsigned long long _destinationEndOffset;
    NSMutableSet *_permissionsEntries;
    NSString *_errorMessage;
    BOOL _started;
    BOOL _errorEncountered;
    NSMutableSet *_includedSubdirs;
    NSMutableSet *_excludedSubdirs;
}

+ (id)syncOperationWithErrorMessage:(id)arg1 snapshot:(id)arg2;
+ (id)restoreDirectories:(id)arg1 andFiles:(id)arg2 fromSnapshot:(id)arg3 originDirectory:(id)arg4 toDestinationDirectory:(id)arg5;
+ (id)updateDirectory:(id)arg1 andSubdirs:(BOOL)arg2 inSnapshot:(id)arg3;
+ (id)initialCopiesForSnapshot:(id)arg1;
+ (BOOL)isPath:(id)arg1 includedInSnapshotOfSourceDir:(id)arg2;
+ (id)newOpsForSnapshot:(id)arg1;
- (void)taskDidTerminate:(id)arg1;
- (void)task:(id)arg1 hasSpawnStatus:(int)arg2;
- (void)_startQueuedTask;
- (void)_enqueueTask:(id)arg1;
- (void)_doSomeWork:(id)arg1;
- (void)_doSomePermissionsEntriesWork:(id)arg1;
- (void)_beginWorking:(id)arg1;
- (void)_fixEntryPermissions;
- (void)_linkEntries;
- (void)_initializeLinkBuffers;
- (void)_createDirectories;
- (void)_createDirectories:(id)arg1 inDestinationDir:(id)arg2;
- (void)_touchFiles:(id)arg1 inDestinationDir:(id)arg2;
- (void)_dittoEntries:(id)arg1 fromSourceDir:(id)arg2 toDestinationDir:(id)arg3;
- (void)_fileComparisonReady:(id)arg1;
- (void)_setLinkSourceRoot:(id)arg1;
- (void)_setArchivePathStem:(id)arg1;
- (BOOL)_includeSubdirInSnapshot:(id)arg1;
- (void)processChangeSet:(id)arg1;
- (void)begin;
- (void)_setErrorMessage:(id)arg1;
- (id)errorMessage;
- (BOOL)_archiveInProgress;
- (void)_syncOperationCompleted;
- (void)_syncOperationCompletedAndReadyToCallBackSnapshot;
- (id)_repositoryDir;
- (id)_sourceDir;
- (id)snapshot;
- (void)dealloc;
- (id)initWithSnapshot:(id)arg1 indexIntoDirs:(unsigned long long)arg2;

@end

