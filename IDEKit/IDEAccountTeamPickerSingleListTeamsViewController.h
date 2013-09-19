/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "DVTPagingSheetViewController-Protocol.h"

@class IDEAccountTeamPickerWindowController, NSPopUpButton, NSTextField;

@interface IDEAccountTeamPickerSingleListTeamsViewController : IDEViewController <DVTPagingSheetViewController>
{
    IDEAccountTeamPickerWindowController *_pagingSheetWindowController;
    NSTextField *_positioningLabel;
    NSPopUpButton *_teamsPopUp;
}

@property(retain) NSPopUpButton *teamsPopUp; // @synthesize teamsPopUp=_teamsPopUp;
@property(retain) NSTextField *positioningLabel; // @synthesize positioningLabel=_positioningLabel;
@property(retain, nonatomic) IDEAccountTeamPickerWindowController *pagingSheetWindowController; // @synthesize pagingSheetWindowController=_pagingSheetWindowController;
- (void).cxx_destruct;
- (id)teamMenuItemForTeamRecord:(id)arg1 wrapper:(id)arg2 indented:(BOOL)arg3;
- (id)accountMenuItemForWrapper:(id)arg1;
- (id)menuFromAccountWrappers:(id)arg1;
- (void)refreshMenu;
- (void)cancel:(id)arg1;
- (void)select:(id)arg1;
- (void)viewAccounts:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewDidInstall;

@end

