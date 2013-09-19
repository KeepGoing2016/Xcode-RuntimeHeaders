/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTableRowView.h"

@class NSTableView;

@interface IDEWelcomeWindowTableRowView : NSTableRowView
{
    BOOL _drawsTopBorder;
    NSTableView *_tableView;
}

@property BOOL drawsTopBorder; // @synthesize drawsTopBorder=_drawsTopBorder;
@property(readonly) NSTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (long long)interiorBackgroundStyle;
- (id)initWithFrame:(struct CGRect)arg1 tableView:(id)arg2;

@end

