/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

@class DVTDeveloperAccount, NSButton, NSMutableSet, NSProgressIndicator, NSTextField;

@interface IDENewDeveloperAccountSheetWindowController : NSWindowController
{
    NSMutableSet *_sheetControllerHolderSet;
    NSButton *_addButton;
    NSButton *_cancelButton;
    NSTextField *_usernameField;
    NSTextField *_passwordField;
    NSProgressIndicator *_progressIndicator;
    DVTDeveloperAccount *_account;
    id _completionBlock;
}

@property(copy, nonatomic) id completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) DVTDeveloperAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSTextField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain, nonatomic) NSTextField *usernameField; // @synthesize usernameField=_usernameField;
@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSButton *addButton; // @synthesize addButton=_addButton;
- (void).cxx_destruct;
- (void)signUp:(id)arg1;
- (void)cancel:(id)arg1;
- (void)errorSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)addAccount:(id)arg1;
- (void)ide_sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)beginSheetModalForWindow:(id)arg1 completionBlock:(id)arg2;
- (id)windowNibName;

@end

