/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IBAutolayoutFoundation/IBAutolayoutOperationRequestRepresentation.h>

#import "NSCoding-Protocol.h"

@class NSDictionary;

@interface IBAutolayoutArbitrationRequestRepresentation : IBAutolayoutOperationRequestRepresentation <NSCoding>
{
    NSDictionary *_arbitrationOptions;
}

@property(copy, nonatomic) NSDictionary *arbitrationOptions; // @synthesize arbitrationOptions=_arbitrationOptions;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

