/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTMapTable, NSArray, NSMutableArray, NSMutableSet, NSSet;

@interface IDEActivityReportFileIOCoordinator : NSObject
{
    NSMutableArray *_activityReports;
    NSMutableSet *_runningThrottleableActivityReports;
    NSMutableSet *_runningUnthrottleableActivityReports;
    DVTMapTable *_activityReportObservations;
}

+ (id)sharedActivityReportFileIOCoordinator;
+ (void)initialize;
@property(readonly) NSSet *runningUnthrottleableActivityReports; // @synthesize runningUnthrottleableActivityReports=_runningUnthrottleableActivityReports;
@property(readonly) NSSet *runningThrottleableActivityReports; // @synthesize runningThrottleableActivityReports=_runningThrottleableActivityReports;
@property(readonly) NSArray *activityReports; // @synthesize activityReports=_activityReports;
- (void).cxx_destruct;
- (void)updateWithAddedActivityReports:(id)arg1 deletedActivityReports:(id)arg2;
- (void)_stopObservingReport:(id)arg1;
- (void)_startObservingReport:(id)arg1;
- (void)_updateRunningActivityReports;
- (void)_throttleActivityReport:(id)arg1 throttleFactor:(double)arg2;
- (BOOL)_removeSortedActivityReport:(id)arg1;
- (void)_insertSortedActivityReport:(id)arg1;
- (id)_activityReportPriorityComparator;
- (unsigned long long)_allowedConcurrentActivities;
- (id)_init;
- (id)init;

@end

