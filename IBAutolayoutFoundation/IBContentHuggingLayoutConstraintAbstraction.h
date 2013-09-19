/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IBAutolayoutFoundation/IBContentSizeLayoutConstraintAbstraction.h>

@interface IBContentHuggingLayoutConstraintAbstraction : IBContentSizeLayoutConstraintAbstraction
{
    double _huggingPriority;
}

@property(nonatomic) double huggingPriority; // @synthesize huggingPriority=_huggingPriority;
- (double)priority;
- (id)makeRepresentingConstraintWithLayoutInfo:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToAbstraction:(id)arg1;
- (Class)representationClass;
- (id)representationWithObjectRepresentationForObjectBlock:(id)arg1;
- (id)description;
- (id)initWithView:(id)arg1 contentSize:(double)arg2 attribute:(unsigned long long)arg3 huggingPriority:(double)arg4;

@end

