/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSButton.h"

@class DSADocSetUpdate;

@interface XCDocSetSyndicationButton : NSButton
{
    DSADocSetUpdate *_docSetUpdateObject;
    int _syndicationButtonType;
}

@property(nonatomic) int syndicationButtonType; // @synthesize syndicationButtonType=_syndicationButtonType;
@property(retain, nonatomic) DSADocSetUpdate *docSetUpdateObject; // @synthesize docSetUpdateObject=_docSetUpdateObject;
- (id)_toolTipForUpdateButtonWithLabel:(id)arg1;
- (id)_localizedUpdateButtonString:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 buttonType:(int)arg2;

@end

