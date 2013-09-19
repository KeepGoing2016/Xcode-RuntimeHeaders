/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXImageGestureView.h>

@class NSString, PBXTableHeaderCell;

@interface PBXHeaderBox : PBXImageGestureView
{
    PBXTableHeaderCell *_brush;
    double _headerHeight;
    NSString *_label;
}

- (void)drawRect:(struct CGRect)arg1;
- (id)cell;
- (id)label;
- (void)setLabel:(id)arg1;
- (BOOL)isHighlighted;
- (void)setDrawHighlighted:(BOOL)arg1;
- (double)headerHeight;
- (void)_setupHeaderBox;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

