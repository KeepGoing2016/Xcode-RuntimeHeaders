/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEDebuggingAdditionUIController-Protocol.h"

@class DVTExtension, DVTStackBacktrace, IDEWorkspaceTabController, iCloudDebuggingTrayCell;

@interface iCloudDebuggingAdditionUIController : NSObject <IDEDebuggingAdditionUIController>
{
    id <IDEDebuggingAddition> _debuggingAddition;
    DVTExtension *_extension;
    IDEWorkspaceTabController *_workspaceTabController;
    iCloudDebuggingTrayCell *_trayCell;
}

+ (void)initialize;
@property(retain, nonatomic) iCloudDebuggingTrayCell *trayCell; // @synthesize trayCell=_trayCell;
@property(retain, nonatomic) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(retain, nonatomic) DVTExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) id <IDEDebuggingAddition> debuggingAddition; // @synthesize debuggingAddition=_debuggingAddition;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)openLocation:(id)arg1 withEventType:(unsigned long long)arg2;
- (void)openController:(id)arg1 withEventType:(unsigned long long)arg2;
- (void)openSelectedNavigableItem:(id)arg1 withEventType:(unsigned long long)arg2;
- (id)launchSessionForSelectedRepresentedObject:(id)arg1;
- (id)trayCellForNavigationProcessHeader;
- (BOOL)wantsTrayAreaForNavigationProcessHeader;
- (id)controller;
- (id)initWithWorkspaceTabController:(id)arg1 withDebuggingAddition:(id)arg2 forExtension:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
