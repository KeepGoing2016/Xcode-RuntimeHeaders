/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXModule.h>

#import "NSTextViewDelegate-Protocol.h"

@class PBXFileNavigator;

@interface PBXFileEditor : PBXModule <NSTextViewDelegate>
{
    PBXFileNavigator *_fileNavigator;
}

+ (BOOL)canReuseEditorInstances;
- (BOOL)supportsIncrementalFindBar;
- (void)scrollLineToVisible:(long long)arg1;
- (void)scrollToVisibleRect:(struct CGRect)arg1;
- (struct CGRect)visibleRect;
- (void)setSelectionFromMethod:(id)arg1;
- (id)methodAtLocation:(unsigned long long)arg1;
- (id)alphaSortedMethodsList;
- (id)methodsList;
- (BOOL)allowsEditing;
- (unsigned long long)cursorLocation;
- (void)disassembleCurrentFile:(id)arg1;
- (BOOL)canDisassembleCurrentFile;
- (void)preprocessCurrentFile:(id)arg1;
- (BOOL)canPreprocessCurrentFile;
- (void)fixAndContinueCurrentFile:(id)arg1;
- (BOOL)canFixAndContinueCurrentFile;
- (void)compileCurrentFile:(id)arg1;
- (BOOL)canCompileCurrentFile;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (void)_scmRequestDidFinish:(id)arg1;
- (void)toggleFileLock:(id)arg1;
- (void)_askToSCMEditOrUnlockSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_askToSCMEditOrUnlock;
- (void)_presentPermissionFailedAlert;
- (id)project;
- (id)mainEditor;
- (void)fileNavigatorDidChangeProjectDocument:(id)arg1;
- (void)setSelectionFromBookmark:(id)arg1;
- (void)restoreSelection;
- (void)storeSelection;
- (id)bookmarkForSelection;
- (void)replaceFileDocument:(id)arg1;
- (void)setFileNavigator:(id)arg1;
- (id)fileNavigator;
- (void)becomeActive;
- (id)init;
- (id)initWithModuleNibName:(id)arg1;
- (id)initWithFileDocument:(id)arg1;
- (id)backgroundColor;

@end

