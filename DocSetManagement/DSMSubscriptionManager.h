/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface DSMSubscriptionManager : NSObject
{
    BOOL m_subscribeToSDKFeeds;
}

+ (void)setCheckAndInstallUpdatesAutomatically:(BOOL)arg1;
+ (BOOL)checkAndInstallUpdatesAutomatically;
+ (void)initialize;
+ (id)sharedSubscriptionManager;
@property(nonatomic) BOOL subscribeToSDKFeeds; // @synthesize subscribeToSDKFeeds=m_subscribeToSDKFeeds;
- (id)allDocSetUpdates;
- (void)subscribeToAllPublishersWithDelegate:(id)arg1;
- (void)subscribeToAllPublishers;
- (id)allDocSetGroups;
- (id)docSetPublishers;
- (id)installPathForUpdate:(id)arg1;
- (void)toggleAutomaticallyCheckForUpdates:(unsigned long long)arg1;
- (void)searchSDKsForDocSetFeeds;
- (void)checkForUpdatesInAllPublishers;
- (void)_refreshAllDidFinish:(id)arg1;
- (BOOL)isSubscribedPublisher:(id)arg1;
- (BOOL)isSubscribedGroup:(id)arg1;
- (void)dealloc;

@end

