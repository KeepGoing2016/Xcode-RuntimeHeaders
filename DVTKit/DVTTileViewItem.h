/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class DVTTileView, NSMutableData, NSString, NSView;

@interface DVTTileViewItem : NSObject <NSCopying, NSCoding>
{
    NSMutableData *_archive;
    DVTTileView *_layoutItemOwnerView;
    id _representedObject;
    NSView *_view;
    NSString *_title;
    struct CGRect _targetViewFrameRect;
    struct CGRect _appliedViewFrameRect;
    unsigned long long _containerReferenceCounter;
    struct __tileItemFlags {
        unsigned int _selected:1;
        unsigned int _clicked:1;
        unsigned int _removalNeeded:1;
        unsigned int _suppressSelectionChangeNotification:1;
        unsigned int _reservedAnimationContainer:28;
    } _layoutItemFlags;
}

- (void).cxx_destruct;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (id)description;
- (void)_finishShowAnimation;
- (void)_finishHideAnimation;
- (void)_applyTargetConfigurationWithAnimationMoveAndResize:(id *)arg1 show:(id *)arg2 hide:(id *)arg3;
- (void)_applyTargetConfigurationWithoutAnimation;
- (void)toggleSelected:(id)arg1;
- (BOOL)isSelected;
- (void)setSelected:(BOOL)arg1;
- (void)_setSelectedWithoutNotification:(BOOL)arg1;
- (struct CGRect)_targetViewFrameRect;
- (void)_setTargetViewFrameRect:(struct CGRect)arg1;
- (BOOL)_isRemovalNeeded;
- (void)_setRemovalNeeded:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;
- (id)layoutView;
- (void)_setLayoutItemOwnerView:(id)arg1;
- (void)_decreaseContainerReferenceCounter;
- (void)_increaseContainerReferenceCounter;
- (BOOL)isEqual:(id)arg1;
- (void)_releaseResources;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_copyConnectionsOfView:(id)arg1 referenceObject:(id)arg2 toView:(id)arg3 referenceObject:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

