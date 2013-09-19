/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSURLCredential;

@interface DVTDeveloperAccountCredentials : NSObject <NSCopying>
{
    NSURLCredential *_URLCredential;
}

+ (id)URLProtectionSpace;
+ (id)accountCredentialsFromUsername:(id)arg1 password:(id)arg2 keychain:(struct OpaqueSecKeychainRef *)arg3 successfullyPersisted:(char *)arg4 error:(id *)arg5;
+ (id)accountCredentialsForDefaultCredentials;
+ (id)accountCredentialsForUsername:(id)arg1 keychain:(struct OpaqueSecKeychainRef *)arg2 error:(id *)arg3;
+ (id)allAccountCredentials;
@property(readonly, nonatomic) NSURLCredential *URLCredential; // @synthesize URLCredential=_URLCredential;
- (void).cxx_destruct;
- (BOOL)saveToKeychain:(struct OpaqueSecKeychainRef *)arg1 error:(id *)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURLCredential:(id)arg1;

@end

