/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class DSADocSet, NSDate, NSString;

@interface DSMDocSetRecord : NSObject <NSCopying>
{
    BOOL _isEnabled;
    NSDate *_modificationDate;
    DSADocSet *_docSet;
    NSString *_docSetPath;
}

@property(copy) NSString *docSetPath; // @synthesize docSetPath=_docSetPath;
@property(retain) DSADocSet *docSet; // @synthesize docSet=_docSet;
@property(copy) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
- (void).cxx_destruct;
@property(readonly) NSString *copyright;
@property(readonly) NSString *shortVersionString;
@property(readonly) NSString *webRootURL;
@property(readonly) NSString *feedURL;
@property(readonly) NSString *feedName;
@property(readonly) NSString *docSetID;
@property(readonly) NSString *name;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDocSet:(id)arg1;
- (long long)dsmMetaQueries_compareDocSetRecordNames:(id)arg1;
- (long long)dsmMetaQueries_comparePlatformNames:(id)arg1;

@end

