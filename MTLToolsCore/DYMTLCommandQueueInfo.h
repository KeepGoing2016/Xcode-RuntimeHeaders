/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface DYMTLCommandQueueInfo : NSObject <NSCoding, NSCopying>
{
    unsigned long long _deviceAddress;
    unsigned long long _queueAddress;
    NSString *_label;
}

@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) unsigned long long queueAddress; // @synthesize queueAddress=_queueAddress;
@property(readonly, nonatomic) unsigned long long deviceAddress; // @synthesize deviceAddress=_deviceAddress;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
