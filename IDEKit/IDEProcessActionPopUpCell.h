/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSPopUpButtonCell.h"

@class NSString;

@interface IDEProcessActionPopUpCell : NSPopUpButtonCell
{
    struct CGSize _cellSize;
    BOOL _mouseEntered;
    NSString *_toolTip;
}

@property(copy) NSString *toolTip; // @synthesize toolTip=_toolTip;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)setMenu:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)addTrackingAreasForView:(id)arg1 inFrame:(struct CGRect)arg2 withUserInfo:(id)arg3 mouseLocation:(struct CGPoint)arg4;
- (void)_updatePopUpButtonImageForSelectedMenuItem;
- (void)selectItemAtIndex:(long long)arg1;
- (BOOL)isHighlighted;
- (struct CGSize)cellSize;
- (id)initWithHeight:(double)arg1;

@end

