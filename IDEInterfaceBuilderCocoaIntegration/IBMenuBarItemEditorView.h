/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderCocoaIntegration/IBMenuItemEditorView.h>

@interface IBMenuBarItemEditorView : IBMenuItemEditorView
{
}

+ (void)layoutItemViewsCollectively:(id)arg1 minimumFixedDimensionMagnitude:(double)arg2;
- (struct CGSize)idealSize;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)titleRect;
- (struct CGRect)editingTitleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (id)attributedTitle;
- (id)textAttributes;
- (id)effectiveTextColor;
- (id)effectiveFont;
- (void)setHighlighted:(BOOL)arg1;

@end
