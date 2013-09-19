/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSImage, NSMutableArray, NSString;

@interface IDEUnitTestsModernizationTargetChooserItem : NSObject
{
    id _representedObject;
    IDEUnitTestsModernizationTargetChooserItem *_parentItem;
    NSMutableArray *_childItems;
}

+ (id)keyPathsForValuesAffectingArrangedChildItems;
@property(retain) IDEUnitTestsModernizationTargetChooserItem *parentItem; // @synthesize parentItem=_parentItem;
@property(readonly) id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (void)removeObjectFromChildItemsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inChildItemsAtIndex:(unsigned long long)arg2;
- (id)_childItems;
@property(readonly) NSMutableArray *mutableChildItems;
- (id)arrangedChildItems;
@property(readonly) NSArray *childItems;
@property(readonly) double rowHeight;
@property(readonly) NSString *warningMessage;
@property(readonly) NSImage *iconImage;
@property long long state;
@property(readonly, getter=isEnabled) BOOL enabled;
@property(readonly) NSString *subTitle;
@property(readonly) NSString *title;
- (id)initWithRepresentedObject:(id)arg1;

@end

