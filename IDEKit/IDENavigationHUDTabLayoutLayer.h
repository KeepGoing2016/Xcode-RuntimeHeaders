/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDENavigationHUDBorderedGradientLayer.h>

#import "IDENavigationHUDDisposableLayer-Protocol.h"
#import "IDENavigationHUDSelectableLayer-Protocol.h"

@class CAGradientLayer, CALayer, IDENavigationHUDSelection, IDENavigationHUDTabLayer, IDEWorkspaceWindowController;

@interface IDENavigationHUDTabLayoutLayer : IDENavigationHUDBorderedGradientLayer <IDENavigationHUDSelectableLayer, IDENavigationHUDDisposableLayer>
{
    IDEWorkspaceWindowController *_workspaceWindowController;
    IDENavigationHUDTabLayer *_workspaceTabLayer;
    unsigned long long _state;
    CAGradientLayer *_overlayLayer;
    CALayer *_imageLayer;
}

@property(readonly) IDEWorkspaceWindowController *workspaceWindowController; // @synthesize workspaceWindowController=_workspaceWindowController;
@property(readonly) IDENavigationHUDTabLayer *workspaceTabLayer; // @synthesize workspaceTabLayer=_workspaceTabLayer;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
@property(readonly) BOOL representativeSelectionIsFinalForSingleMouseUp;
- (id)workspaceTabController;
@property(readonly) IDENavigationHUDSelection *representativeSelection;
- (void)layoutSublayers;
- (struct CGSize)imageSize;
- (void)dispose;
- (id)initWithWorkspaceWindowController:(id)arg1 workspaceTabLayer:(id)arg2 image:(id)arg3;
- (id)init;

@end

