/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSTimer;

@interface XCHUDView : NSView
{
    double _fadeTo;
    NSTimer *_lastTimer;
    double minAlpha;
    double maxAlpha;
    double inactiveAlpha;
    double activeAlpha;
}

- (void)stopTimers;
- (void)show;
- (void)hide;
- (void)fadeHUD:(id)arg1;
- (void)fadeTo:(double)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)roundedPathForRect:(struct CGRect)arg1 returnCap:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

