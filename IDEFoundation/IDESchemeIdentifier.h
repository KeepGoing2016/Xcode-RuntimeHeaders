/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface IDESchemeIdentifier : NSObject <NSCopying>
{
    unsigned long long _hashValue;
    int _sharedState;
    NSString *_schemeName;
    NSString *_containerName;
    NSString *_schemeInstanceGUID;
}

+ (id)schemeIdentifierFromSchemeName:(id)arg1 containerName:(id)arg2;
+ (id)schemeIdentifierFromSchemeName:(id)arg1 containerName:(id)arg2 isSharedScheme:(BOOL)arg3;
+ (id)schemeIdentifierFromGUID:(id)arg1 schemeName:(id)arg2 containerName:(id)arg3;
+ (id)schemeIdentifierFromGUID:(id)arg1 schemeName:(id)arg2 containerName:(id)arg3 isSharedScheme:(BOOL)arg4;
@property(readonly) NSString *schemeInstanceGUID; // @synthesize schemeInstanceGUID=_schemeInstanceGUID;
@property(readonly) NSString *containerName; // @synthesize containerName=_containerName;
@property(readonly) NSString *schemeName; // @synthesize schemeName=_schemeName;
@property(readonly) int sharedState; // @synthesize sharedState=_sharedState;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isSimilarToSchemeIdentifier:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithGUID:(id)arg1 schemeName:(id)arg2 containerName:(id)arg3 shared:(int)arg4;

@end

