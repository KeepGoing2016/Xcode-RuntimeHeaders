/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTableRowView.h"

@interface IDEBotIssueSummaryTableRowView : NSTableRowView
{
    long long _previousSeparatorStyle;
    id <IDEBotIssueSummaryTableRowViewDelegate> _delegate;
    id _item;
}

@property(nonatomic) __weak id item; // @synthesize item=_item;
@property(nonatomic) __weak id <IDEBotIssueSummaryTableRowViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

