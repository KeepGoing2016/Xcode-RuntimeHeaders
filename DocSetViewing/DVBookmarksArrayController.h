/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSArrayController.h"

@class DVBookmarksOutlineViewController, NSTableView;

@interface DVBookmarksArrayController : NSArrayController
{
    NSTableView *tableView;
    DVBookmarksOutlineViewController *controller;
}

@property(retain, nonatomic) DVBookmarksOutlineViewController *controller; // @synthesize controller;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(int)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(int)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (id)moveObjectsInArrangedObjectsFromIndexes:(id)arg1 toIndex:(unsigned int)arg2;
- (void)awakeFromNib;
- (void)objectDidEndEditing:(id)arg1;

@end

