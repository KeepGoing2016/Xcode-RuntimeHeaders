/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSManagedObject.h"

@class DSANode, NSNumber, NSString;

// Not exported
@interface DSANodeURL : NSManagedObject
{
}

+ (id)localPathForURLString:(id)arg1 path:(id)arg2 fileName:(id)arg3 anchor:(id)arg4 type:(unsigned long long)arg5;
+ (id)nodeURLForLocalPath:(id)arg1 inContext:(id)arg2;
+ (int)checksumForLocalPath:(id)arg1;
- (id)localPath;
- (void)updateChecksum;

// Remaining properties
@property(retain, nonatomic) NSString *anchor; // @dynamic anchor;
@property(retain, nonatomic) NSString *baseURL; // @dynamic baseURL;
@property(retain, nonatomic) NSNumber *checksum; // @dynamic checksum;
@property(retain, nonatomic) NSString *fileName; // @dynamic fileName;
@property(retain, nonatomic) DSANode *node; // @dynamic node;
@property(retain, nonatomic) NSString *path; // @dynamic path;

@end

