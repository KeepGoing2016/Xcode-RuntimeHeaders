/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSFormatter.h"

@class NSString;

@interface IDEScrubberFormatter : NSFormatter
{
    NSFormatter *_delegate;
    NSString *_unit;
}

@property(copy, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(retain, nonatomic) NSFormatter *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)editingStringForObjectValue:(id)arg1;
- (id)stringForObjectValue:(id)arg1;

@end

