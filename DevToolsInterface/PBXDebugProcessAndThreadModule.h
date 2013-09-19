/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXDebugViewModule.h>

@class NSView, PBXModule;

@interface PBXDebugProcessAndThreadModule : PBXDebugViewModule
{
    NSView *_topArea;
    NSView *_bottomArea;
    PBXModule *_topModule;
    PBXModule *_bottomModule;
}

- (BOOL)moduleEnforcesViewMinSize;
- (struct CGSize)viewMinSize;
- (void)setModuleForBottomArea:(id)arg1;
- (void)setModuleForTopArea:(id)arg1;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithModuleNibName:(id)arg1;

@end

