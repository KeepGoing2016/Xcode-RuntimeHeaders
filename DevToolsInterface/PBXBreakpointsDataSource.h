/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXFileTableDataSource.h>

@class NSButton, NSMutableDictionary, PBXSymbolicBreakpoint;

@interface PBXBreakpointsDataSource : PBXFileTableDataSource
{
    NSMutableDictionary *_rowEditors;
    NSButton *_addSymbolButton;
    PBXSymbolicBreakpoint *_symbolicBreakpointPlaceholder;
}

+ (id)colorBreakpointString:(id)arg1 forDisplayState:(long long)arg2 selected:(BOOL)arg3;
- (void)singleClickAction:(id)arg1;
- (void)editSelection:(id)arg1;
- (id)selectedProjectItems;
- (void *)stringFunctionForColumnIdentifier:(id)arg1;
- (void)setSortDirection:(long long)arg1;
- (void)searchCriteriaDidChange;
- (void)_editorDidChangeSize:(id)arg1;
- (void)positionEditors;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)collapseRow:(long long)arg1;
- (void)expandRow:(long long)arg1;
- (BOOL)isRowExpanded:(long long)arg1;
- (BOOL)isBreakpointExpanded:(id)arg1;
- (void)addNewBreakpoint:(id)arg1;
- (void)_breakpointDidChange:(id)arg1;
- (void)_breakpointWasAdded:(id)arg1;
- (void)_addSymbol:(id)arg1;
- (id)convertObjectForAction:(id)arg1;
- (void *)sortFunctionForColumnIdentifier:(id)arg1;
- (void)refresh;
- (void)showDetailFor:(id)arg1;
- (void)disconnect;
- (id)detailView;
- (void)tableView:(id)arg1 hasChangedActiveState:(BOOL)arg2;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)_verifyColumnsFilled;
- (id)tableView:(id)arg1 typeSelectStringForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableView:(id)arg1 deleteRows:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)_showBreakpointWithMultipleMatches:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 didStartEditingColumn:(long long)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)simulateDoubleClickAction:(id)arg1;
- (id)columnForIdentifier:(id)arg1;
- (id)requiredColumnIdentifiers:(id)arg1;
- (id)optionalColumnIdentifiers:(id)arg1;
- (void)configureColumnsForTable:(id)arg1;
- (id)configurationIdentifier;
- (Class)tableViewClass;
- (void)dealloc;
- (id)_setupMenuDictionary;

@end

