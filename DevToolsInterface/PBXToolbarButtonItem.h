/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSToolbarItem.h"

@class NSImage, NSString;

@interface PBXToolbarButtonItem : NSToolbarItem
{
    struct {
        NSImage *iconImage;
        NSString *label;
        NSString *toolTip;
        SEL action;
    } _stateInfo[2];
    unsigned long long _state;
    NSString *_buildAction;
    NSString *_launchAction;
}

+ (id)toolbarButtonItemWithIdentifier:(id)arg1 iconName:(id)arg2 alternateIconName:(id)arg3 label:(id)arg4 alternateLabel:(id)arg5 toolTip:(id)arg6 alternateToolTip:(id)arg7 target:(id)arg8 action:(SEL)arg9 alternateAction:(SEL)arg10 buildAction:(id)arg11 launchAction:(id)arg12;
+ (id)buttonItemWithIdentifier:(id)arg1 iconName:(id)arg2 alternateIconName:(id)arg3 label:(id)arg4 alternateLabel:(id)arg5 toolTip:(id)arg6 alternateToolTip:(id)arg7 target:(id)arg8 action:(SEL)arg9 alternateAction:(SEL)arg10 buildAction:(id)arg11 launchAction:(id)arg12;
- (void)setLaunchAction:(id)arg1;
- (id)launchAction;
- (void)setBuildAction:(id)arg1;
- (id)buildAction;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 iconName:(id)arg2 alternateIconName:(id)arg3 label:(id)arg4 alternateLabel:(id)arg5 toolTip:(id)arg6 alternateToolTip:(id)arg7 target:(id)arg8 action:(SEL)arg9 alternateAction:(SEL)arg10 buildAction:(id)arg11 launchAction:(id)arg12;
- (id)initWithIdentifier:(id)arg1 iconImage:(id)arg2 alternateIconImage:(id)arg3 label:(id)arg4 alternateLabel:(id)arg5 toolTip:(id)arg6 alternateToolTip:(id)arg7 target:(id)arg8 action:(SEL)arg9 alternateAction:(SEL)arg10 buildAction:(id)arg11 launchAction:(id)arg12;

@end

