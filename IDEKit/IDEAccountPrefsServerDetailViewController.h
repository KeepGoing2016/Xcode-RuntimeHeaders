/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTObservingToken, DVTToggleSwitch, NSButton, NSImageView, NSTextField;

@interface IDEAccountPrefsServerDetailViewController : IDEViewController
{
    DVTObservingToken *_serverEnabledWatcher;
    DVTObservingToken *_serverReachabilityWatcher;
    BOOL _authenticateAsRegisteredUser;
    NSImageView *_connectionErrorImageView;
    unsigned long long _authenticationUserType;
    DVTToggleSwitch *_enableSwitch;
    NSTextField *_addressTextField;
    NSButton *_viewServerButton;
    DVTBorderedView *_borderedView;
}

+ (id)keyPathsForValuesAffectingConnectionAddress;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) NSButton *viewServerButton; // @synthesize viewServerButton=_viewServerButton;
@property __weak NSTextField *addressTextField; // @synthesize addressTextField=_addressTextField;
@property __weak DVTToggleSwitch *enableSwitch; // @synthesize enableSwitch=_enableSwitch;
@property BOOL authenticateAsRegisteredUser; // @synthesize authenticateAsRegisteredUser=_authenticateAsRegisteredUser;
@property(nonatomic) unsigned long long authenticationUserType; // @synthesize authenticationUserType=_authenticationUserType;
@property(retain) NSImageView *connectionErrorImageView; // @synthesize connectionErrorImageView=_connectionErrorImageView;
- (void).cxx_destruct;
- (void)viewServer:(id)arg1;
- (void)retryConnectionAction:(id)arg1;
- (void)refreshConnectionAddress;
- (void)setRepresentedObject:(id)arg1;
- (id)contextMenu;
- (void)primitiveInvalidate;
- (void)loadView;

@end

