/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/XCBuildSettingEditorModule.h>

@class NSButton, NSMutableArray, NSTextField, PBXExtendedTableView, XCExtendedArrayController;

@interface XCStringListEditorModule : XCBuildSettingEditorModule
{
    NSTextField *_titleField;
    PBXExtendedTableView *_stringListTableView;
    NSButton *_addArgumentButton;
    NSButton *_removeArgumentButton;
    NSButton *_helpButton;
    XCExtendedArrayController *_stringListController;
    NSMutableArray *_stringListArguments;
}

@property(retain) NSMutableArray *stringListArguments; // @synthesize stringListArguments=_stringListArguments;
- (void)performDefaultAction:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (void)setValueToBeEdited:(id)arg1;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (id)additionalPasteboardTypesToDeclare;
- (id)additionalPasteboardTypes;
- (void)insert:(id)arg1;
- (void)setStringArray:(id)arg1;
- (void)setString:(id)arg1;
- (id)string;
- (id)parseStringsIntoDictionariesInArray:(id)arg1;
- (id)getStringsFromDictionariesInArray:(id)arg1;
- (id)createDictionaryFromString:(id)arg1;
- (id)getStringFromDictionary:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)moduleWindowFrameAutosaveName;

@end

