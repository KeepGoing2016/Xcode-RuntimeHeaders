/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTableCellView.h"

@class NSButton;

// Not exported
@interface GPUTableCellView : NSTableCellView
{
    NSButton *_gotoButton;
    id _gotoAction;
}

+ (id)gotoPressedImage;
+ (id)gotoSelectedImage;
+ (id)gotoImage;
@property(copy, nonatomic) id gotoAction; // @synthesize gotoAction=_gotoAction;
@property(nonatomic) NSButton *gotoButton; // @synthesize gotoButton=_gotoButton;
- (void).cxx_destruct;
- (void)performGotoAction:(id)arg1;
- (void)viewDidMoveToSuperview;

@end
