/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableData;

@interface XCHierarchicalOutputLog : NSObject
{
    NSMutableData *_outputData;
    unsigned long long _indentationLevel;
    BOOL _needsIndentation;
}

- (void)println;
- (void)outdentln:(id)arg1;
- (void)outdent:(id)arg1;
- (void)println:(id)arg1;
- (void)print:(id)arg1;
- (void)indentln:(id)arg1;
- (void)indent:(id)arg1;
- (void)decreaseNestingLevel;
- (void)increaseNestingLevel;
- (id)data;
- (void)dealloc;
- (id)init;
- (id)initForWritingWithMutableData:(id)arg1;

@end
