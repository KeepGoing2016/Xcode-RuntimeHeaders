/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXExtendedOutlineView.h>

#import "XCDiffHunkMarking-Protocol.h"

@class XCDiffComparatorView;

@interface XCDiffOutlineView : PBXExtendedOutlineView <XCDiffHunkMarking>
{
    XCDiffComparatorView *_comparatorView;
}

+ (void)initialize;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawBackgroundInClipRect:(struct CGRect)arg1;
- (void)collapseItem:(id)arg1 collapseChildren:(BOOL)arg2;
- (void)expandItem:(id)arg1 expandChildren:(BOOL)arg2;
- (id)diffComparatorView;
- (void)setDiffComparatorView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

