/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface DSATermMatch : NSObject
{
}

+ (id)termMatchForTermMatches:(id)arg1;
+ (id)termMatchForTermID:(unsigned int)arg1 withBaseScore:(float)arg2;
- (float)scoreForTermID:(unsigned int)arg1;
- (float *)scores;
- (unsigned int *)termIDs;
- (unsigned long long)count;

@end

