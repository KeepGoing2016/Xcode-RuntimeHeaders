/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXModule.h>

@class NSButton, PBXProject;

@interface PBXNativeTargetUpgradingModule : PBXModule
{
    NSButton *_upgradeButton;
    NSButton *_dontUpgradeButton;
    PBXProject *_project;
    id _workspaceModule;
}

+ (BOOL)nativeBuildSystemSupportsFilesInJambaseTarget:(id)arg1 unsupportedFiles:(id *)arg2;
+ (id)productTypeForJambaseTarget:(id)arg1;
+ (id)sharedNativeTargetUpgradingModule;
- (void)dontUpgradeAction:(id)arg1;
- (void)upgradeAction:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)runModalForProject:(id)arg1 relativeToModule:(id)arg2;
- (id)upgradeProjectToNativeTargetsWithUpgradeLog:(id *)arg1;
- (id)upgradeTargetToNative:(id)arg1 relativeToModule:(id)arg2 showingUpgradeLog:(BOOL)arg3;
- (id)_upgradeTargetToNative:(id)arg1 upgradeLog:(id)arg2;
- (void)insertRootObject:(id)arg1 intoContainer:(id)arg2;
- (BOOL)checkVersion:(unsigned long long)arg1 forPListUnarchiver:(id)arg2;
- (id)currentFormatForPListArchiver:(id)arg1;
- (void)_displayNativeTargetUpgradeLog:(id)arg1;
- (id)_nameForInfoPlistFileForNewTargetNamed:(id)arg1;
- (id)_uniqueNameForUpgradedTargetNamed:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)_setProject:(id)arg1 module:(id)arg2;
- (id)initWithModuleNibName:(id)arg1;

@end

