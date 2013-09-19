/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCBuildLogSection.h>

@class NSString;

@interface XCBuildLog : XCBuildLogSection
{
    NSString *_uniqueIdentifier;
    double _timeBuildFinished;
}

+ (Class)logRecorderClass;
+ (void)setOutputTextAttributes:(id)arg1;
+ (id)outputTextAttributes;
+ (void)setNormalTextAttributes:(id)arg1;
+ (id)normalTextAttributes;
+ (void)setHeadingTextAttributes:(id)arg1;
+ (id)headingTextAttributes;
+ (void)setTranscriptClass:(Class)arg1;
+ (Class)transcriptClass;
- (void)logRecorder:(id)arg1 didStopRecordingWithInfo:(id)arg2;
- (id)recorder;
- (void)logRecorder:(id)arg1 setTimeBuildFinished:(double)arg2;
- (double)timeBuildFinished;
- (id)uniqueIdentifier;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;
- (unsigned long long)buildLogTranscriptCharacterRangeBaseForSubitems;
- (struct _NSRange)buildLogTranscriptCharacterRange;
- (id)subitems;
- (unsigned long long)totalNumberOfItems;
- (id)transcript;
- (id)toplevelLogItems;
- (void)_setBuildOperation:(id)arg1;
- (id)buildOperation;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;

@end

