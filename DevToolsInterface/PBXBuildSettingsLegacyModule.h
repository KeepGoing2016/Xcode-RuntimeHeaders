/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXBuildSettingsPaneModule.h>

@class NSButton, NSTextField, PBXCompletionManager;

@interface PBXBuildSettingsLegacyModule : PBXBuildSettingsPaneModule
{
    NSTextField *_buildCommandField;
    NSTextField *_buildArgumentsField;
    NSTextField *_workingDirectoryField;
    NSButton *_chooseDirectoryButton;
    NSButton *_populateEnvSwitch;
    PBXCompletionManager *_completionManager;
}

- (void)takePopulateEnvFlagFrom:(id)arg1;
- (void)chooseWorkingDirectory:(id)arg1;
- (void)_workingDirectoryOpenPanelDidEndWithReturnCode:(long long)arg1 fileSystemLocations:(id)arg2 contextInfo:(void *)arg3;
- (void)takeWorkingDirectoryFrom:(id)arg1;
- (void)takeBuildArgumentsFrom:(id)arg1;
- (void)takeBuildCommandFrom:(id)arg1;
- (id)label;
- (void)update;
- (void)viewDidLoad;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)dealloc;

@end

