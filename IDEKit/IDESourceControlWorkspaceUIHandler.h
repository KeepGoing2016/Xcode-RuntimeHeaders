/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "NSAlertDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class DVTFilePath, DVTStackBacktrace, IDESourceControlCreateGitRepositoryOperationInfo, IDESourceControlNewCheckoutWindowController, IDESourceControlUpgradeWindowController, IDEWorkspaceWindowController, IDEXcodeServer, NSAlert, NSMutableSet, NSOperationQueue;

@interface IDESourceControlWorkspaceUIHandler : NSObject <DVTInvalidation, NSAlertDelegate, NSWindowDelegate>
{
    id _sourceControlCommandContinuationBlock;
    id _upgradeContinuationBlock;
    NSAlert *_waitingOnInitialScanAlert;
    NSAlert *_checkingForUpdatesAlert;
    NSAlert *_upgradeWorkignCopyAlert;
    IDESourceControlUpgradeWindowController *_upgradeWindowController;
    id _didScanToken;
    id _foundUpgradableToken;
    BOOL _initialScanAlertIsShowing;
    BOOL _initialWorkspaceScanIsComplete;
    BOOL _shouldShowUpgradeAlert;
    IDEWorkspaceWindowController *_workspaceWindowController;
    IDESourceControlNewCheckoutWindowController *_checkoutWC;
    NSMutableSet *_windowControllers;
    IDESourceControlCreateGitRepositoryOperationInfo *_operationInfo;
    NSOperationQueue *_operationQueue;
    BOOL _shouldShowMissingWorkingCopies;
    BOOL _shouldCreateLocalRepository;
    DVTFilePath *_pathToCreateLocalGitRepository;
    IDEXcodeServer *_serverToPushTo;
}

+ (void)initialize;
@property IDEXcodeServer *serverToPushTo; // @synthesize serverToPushTo=_serverToPushTo;
@property DVTFilePath *pathToCreateLocalGitRepository; // @synthesize pathToCreateLocalGitRepository=_pathToCreateLocalGitRepository;
@property BOOL shouldCreateLocalRepository; // @synthesize shouldCreateLocalRepository=_shouldCreateLocalRepository;
@property(copy) id sourceControlCommandContinuationBlock; // @synthesize sourceControlCommandContinuationBlock=_sourceControlCommandContinuationBlock;
- (void).cxx_destruct;
- (void)windowDidCloseForWindowController:(id)arg1;
- (void)addWindowController:(id)arg1;
- (void)finishedCreateGitRepositoryWithWorkingTree:(id)arg1;
- (void)createGitRepositoryForFilePath:(id)arg1 workingTree:(id)arg2 repoName:(id)arg3 pushingToServer:(id)arg4;
- (void)displayError:(id)arg1;
- (void)initialWorkspaceScanIsFinished;
- (void)displayWaitingOnInitialWorkspaceScanAlertInWindow:(id)arg1 withContinuationBlock:(id)arg2;
- (id)waitingOnInitialScanAlert;
- (void)primitiveInvalidate;
- (void)windowWillClose:(id)arg1;
- (void)presentCheckoutsForProject:(id)arg1 scopingToWorkingCopyConfigurations:(id)arg2 attachedToWindow:(id)arg3;
- (void)askToCheckOutDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)missingCheckoutsNotification:(id)arg1;
- (void)repositoryNewerNotification:(id)arg1;
- (void)newWorkingCopyDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)newWorkingCopyNotification:(id)arg1;
- (void)showUpgradeWindowForWindow:(id)arg1 workingTreesNeedingUpgrade:(id)arg2 showsSuppressionButton:(BOOL)arg3;
- (id)initWithWorkspaceWindowController:(id)arg1;
- (void)finishedUpgrade;
- (BOOL)alertShowHelp:(id)arg1;
- (void)upgradeAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
@property(readonly) BOOL representsActiveWorkspaceWindow;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

