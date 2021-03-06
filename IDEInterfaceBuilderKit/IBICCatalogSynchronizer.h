/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTDelayedInvocation, DVTFilePath, DVTStackBacktrace, IBICCatalog, NSArray, NSMutableArray, NSString;

@interface IBICCatalogSynchronizer : NSObject <DVTInvalidation>
{
    NSMutableArray *_pendingChanges;
    NSArray *_workaround11472482;
    DVTDelayedInvocation *_batchingValidator;
    DVTFilePath *_observedCatalogPath;
    unsigned int _filePathWatchGeneration;
    unsigned int _lastObservedDiskChangeGeneration;
    unsigned int _lastReadDiskChangeGeneration;
    id <DVTInvalidation> _fileSystemObservationToken;
    IBICCatalog *_catalog;
    long long _disableCount;
    NSString *_path;
    id <IBICCatalogSynchronizerDelegate> _delegate;
}

+ (id)takeOwnershipOfCatalogDisconnectingItFromFileSystemAndInvaldiateSynchronizer:(id *)arg1;
+ (id)synchronizerForCatalogAtPath:(id)arg1;
+ (id)synchronizerTakingOwnershipForCatalog:(id)arg1 atPath:(id)arg2;
+ (void)initialize;
@property __weak id <IBICCatalogSynchronizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)preventSynchronizationDuring:(id)arg1;
- (BOOL)isSynchronizationEnabled;
- (void)enableSynchronization;
- (void)disableSynchronization;
- (void)applyMutationToModelAndScheduleForDisk:(id)arg1;
- (id)replaceCatalogWithContentsOfPathWhileItIsKnowThatSyncOperationsAreNotInflightAndAreDisabled:(id)arg1;
- (id)replaceCatalogWithContentsOfPath:(id)arg1;
- (void)validateBatchedChanges:(id)arg1;
- (void)validateChangesToDiskIfNeeded;
- (void)validateChangesFromDiskIfNeeded;
- (void)resetContentFromDisk;
@property(readonly) IBICCatalog *catalog;
- (void)primitiveInvalidate;
- (id)init;
- (id)initByTakingOwnershipsOfCatalog:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

