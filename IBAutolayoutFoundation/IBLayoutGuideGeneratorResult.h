/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSSet;

@interface IBLayoutGuideGeneratorResult : NSObject
{
    long long validGuides;
    NSArray *layoutGuides;
    NSSet *layoutGuideMatches;
    struct CGRect targetRect;
}

@property struct CGRect targetRect; // @synthesize targetRect;
@property(retain, nonatomic) NSSet *layoutGuideMatches; // @synthesize layoutGuideMatches;
@property(retain, nonatomic) NSArray *layoutGuides; // @synthesize layoutGuides;
@property long long validGuides; // @synthesize validGuides;
- (void).cxx_destruct;

@end

