/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCDistributedBuildHost.h>

@class NSString;

@interface XCDistributedBuildLocalHost : XCDistributedBuildHost
{
    NSString *_distccVersion;
    NSString *_bonjourServiceName;
}

+ (BOOL)isLocalHostIdentifier:(id)arg1;
+ (id)localHost;
+ (void)initialize;
- (void)clearHostInfo;
- (id)statusString;
- (BOOL)hasSDK:(id)arg1;
- (BOOL)hasCompiler:(id)arg1;
- (BOOL)isCompatibleHost;
- (void)setBonjourServiceName:(id)arg1;
- (id)bonjourServiceName;
- (id)sdkVersionForSDKPackage:(id)arg1;
- (BOOL)isCompatibleOSVersion:(id)arg1;
- (BOOL)isCompatibleDistccVersion:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)setSystemInfoFromData:(id)arg1;
- (id)launchInfoForSystemInfoFetch;
- (void)_allocateHost;
- (BOOL)isLocalHost;
- (void)dealloc;
- (id)init;
- (id)_launchInfoForLocalSystemInfoFetch;
- (id)_getDistccVersion;

@end

