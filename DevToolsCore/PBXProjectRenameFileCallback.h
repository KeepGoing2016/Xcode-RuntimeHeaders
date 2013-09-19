/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, PBXFileReference, XCSourceControlManager;

@interface PBXProjectRenameFileCallback : NSObject
{
    PBXFileReference *_fileReference;
    NSString *_newName;
    XCSourceControlManager *_scmManager;
    NSString *_callbackTarget;
    SEL _callbackSelector;
}

+ (void)beginRenameForFileReference:(id)arg1 newName:(id)arg2 scmManager:(id)arg3 callbackTarget:(id)arg4 selector:(SEL)arg5;
- (void)dealloc;
- (void)_finishRename:(id)arg1;
- (void)_finishUnlockProjectFiles:(id)arg1;
- (void)_unlockProjectFiles;
- (void)_renameFile;
- (void)_invokeCallbackWithError:(id)arg1;
- (id)_initWithFileReference:(id)arg1 newName:(id)arg2 scmManager:(id)arg3 callbackTarget:(id)arg4 selector:(SEL)arg5;

@end

