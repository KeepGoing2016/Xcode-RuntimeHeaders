/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTFoundation/DVTFindDescriptor.h>

#import "DVTTextlikeFindDescriptor-Protocol.h"

@class NSString;

@interface DVTFindTextualDescriptor : DVTFindDescriptor <DVTTextlikeFindDescriptor>
{
    NSString *_findString;
    int _matchStyle;
    BOOL _caseSensitive;
}

@property(readonly) int matchStyle; // @synthesize matchStyle=_matchStyle;
- (BOOL)caseSensitive;
@property(readonly) NSString *findString; // @synthesize findString=_findString;
- (void).cxx_destruct;
- (id)firstMatchingResultInString:(id)arg1 backwards:(BOOL)arg2 inRange:(struct _NSRange)arg3 withWordFindingBlock:(id)arg4 docLocationCreationBlock:(void)arg5;
- (struct _NSRange)_wordBoundaryAtIndex:(unsigned long long)arg1 forString:(id)arg2;
- (id)description;
- (id)displayString;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithString:(id)arg1 ignoreCase:(BOOL)arg2 matchStyle:(int)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

