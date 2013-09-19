/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

#import "IDENavigationHUDDisposableLayer-Protocol.h"
#import "IDENavigationHUDNavigableLayer-Protocol.h"
#import "IDENavigationHUDSelectionDrivenLayer-Protocol.h"

@class IDENavigationHUDNewSplitTabLayoutTreeLayer, IDENavigationHUDSelection, IDENavigationHUDTabLayout, IDENavigationHUDWorkspaceWindowLayer, IDEWorkspaceTabController, NSMapTable;

@interface IDENavigationHUDTabLayer : CALayer <IDENavigationHUDSelectionDrivenLayer, IDENavigationHUDNavigableLayer, IDENavigationHUDDisposableLayer>
{
    NSMapTable *_strongLayoutTreeNodeToStrongLayoutTreeNodeLayerMap;
    IDENavigationHUDWorkspaceWindowLayer *_workspaceWindowLayer;
    IDENavigationHUDNewSplitTabLayoutTreeLayer *_newSplitLayer;
    IDEWorkspaceTabController *_workspaceTabController;
    NSMapTable *_strongLayoutCellToStrongLayerMap;
    IDENavigationHUDTabLayout *_currentTabLayout;
    IDENavigationHUDSelection *_selection;
}

@property(copy) IDENavigationHUDSelection *selection; // @synthesize selection=_selection;
@property(readonly) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(readonly) IDENavigationHUDWorkspaceWindowLayer *workspaceWindowLayer; // @synthesize workspaceWindowLayer=_workspaceWindowLayer;
- (void).cxx_destruct;
- (id)selectionForLastPrimaryEditorContextLayoutTreeNode;
- (id)selectionForFirstPrimaryEditorContextLayoutTreeNode;
- (id)selectionForNavigatingRight;
- (id)selectionForNavigatingLeft;
- (id)selectionForNavigatingDown;
- (id)selectionForNavigatingUp;
- (id)minimumOrMaximumDescendentCellOfLayoutCell:(id)arg1 beforeOrAfterCell:(id)arg2 afterReversingChildren:(BOOL)arg3 orientation:(unsigned long long)arg4 intersectingOppositeAxisOfRect:(struct CGRect)arg5;
- (id)selectionForNavigatingWithOrientation:(unsigned long long)arg1 handlerBlock:(id)arg2;
- (id)selectionForLayoutCell:(id)arg1;
- (id)selectableLayerForLayoutCell:(id)arg1;
- (void)recursivelyLayoutCell:(id)arg1 inContainingLayer:(id)arg2;
- (id)laidOutLayerForLayoutCell:(id)arg1;
- (id)selectedLayoutTreeLayer;
- (id)layoutTreeNodeLayerForLayoutTreeNode:(id)arg1;
- (id)workspaceWindowController;
- (void)dispose;
- (id)initWithWorkspaceTabController:(id)arg1 workspaceWindowLayer:(id)arg2;

@end

