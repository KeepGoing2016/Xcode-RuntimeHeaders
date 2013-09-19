/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXWizard.h>

@class NSMutableDictionary, NSString;

@interface PBXFileCopyingWizard : PBXWizard
{
    NSString *_moveAsideDirectory;
    NSMutableDictionary *_context;
}

- (void)_finishTemplateInstantiationAfterFileCopying:(id)arg1 instantiationResult:(id)arg2;
- (id)_instantiateTemplateWithContext:(id)arg1;
- (BOOL)_prepareToCreateFreshProduct:(id)arg1;
- (void)_finishCopyingTemplate:(long long)arg1 filesToPreserve:(id)arg2;
- (void)_checkForOverwritingFiles:(id)arg1;
- (id)_listOfFilesToCopy;
- (id)_instantiationDirectory;
- (BOOL)_moveAsideFile:(id)arg1 inRootDirectory:(id)arg2;
- (BOOL)_fileShouldBeMovedAside:(id)arg1;
- (void)_defineMoveAsideDirectory:(id)arg1 inDirectory:(id)arg2;
- (id)_nameForMoveAsideDirectory:(id)arg1 inDirectory:(id)arg2;
- (void)_setContext:(id)arg1;
- (id)_context;
- (void)_setMoveAsideDirectory:(id)arg1;
- (id)_moveAsideDirectory;
- (void)_reloadPBXCustomTemplateMacroDefinitions;
- (void)dealloc;
- (id)initWithSettings:(id)arg1 parentPage:(id)arg2 nextPage:(id)arg3 parentNextPageSelector:(SEL)arg4;

@end

