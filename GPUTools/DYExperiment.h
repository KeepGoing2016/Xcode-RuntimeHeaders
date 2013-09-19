/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class DYFunctionPlayer, NSMutableArray, NSMutableDictionary, NSString;

@interface DYExperiment : NSObject <NSCoding, NSCopying>
{
    NSMutableDictionary *_results;
    unsigned int _repeatCount;
    unsigned int _warmupCount;
    BOOL _enabled;
    BOOL _enableExperimentFinish;
    BOOL _enablePerFrameTiming;
    NSString *_name;
    unsigned long long _startGlobalTime;
    unsigned int _iteration;
    unsigned long long _frameTimeStart;
    unsigned long long _frameTimeEnd;
    unsigned long long _frameTime;
    unsigned int _frameTimeArraySize;
    unsigned int _frameTimeVariationArraySize;
    double _frameTimeVariationLimit1;
    double _frameTimeVariationLimit2;
    double _frameTimeVariationRangeMax;
    struct RunningStatistics<unsigned long long> *_frameTimeStatistics;
    BOOL _isDone;
    BOOL _allowEarlyTermination;
    DYFunctionPlayer *_functionPlayer;
    NSMutableArray *_overrides;
    NSString *_captureArchivePath;
    int _traceMode;
    unsigned long long _profilingFlags;
    BOOL _usingModifiedArchive;
    id _messageHandler;
}

+ (void)initialize;
@property(nonatomic) BOOL usingModifiedArchive; // @synthesize usingModifiedArchive=_usingModifiedArchive;
@property(copy, nonatomic) id messageHandler; // @synthesize messageHandler=_messageHandler;
@property(nonatomic) BOOL allowEarlyTermination; // @synthesize allowEarlyTermination=_allowEarlyTermination;
@property(readonly, nonatomic) BOOL isDone; // @synthesize isDone=_isDone;
@property(nonatomic) double frameTimeVariationRangeMax; // @synthesize frameTimeVariationRangeMax=_frameTimeVariationRangeMax;
@property(nonatomic) double frameTimeVariationLimit2; // @synthesize frameTimeVariationLimit2=_frameTimeVariationLimit2;
@property(nonatomic) double frameTimeVariationLimit1; // @synthesize frameTimeVariationLimit1=_frameTimeVariationLimit1;
@property(nonatomic) unsigned int frameTimeVariationArraySize; // @synthesize frameTimeVariationArraySize=_frameTimeVariationArraySize;
@property(nonatomic) unsigned int frameTimeArraySize; // @synthesize frameTimeArraySize=_frameTimeArraySize;
@property(nonatomic) unsigned long long profilingFlags; // @synthesize profilingFlags=_profilingFlags;
@property(nonatomic) int traceMode; // @synthesize traceMode=_traceMode;
@property(readonly, nonatomic) NSMutableArray *overrides; // @synthesize overrides=_overrides;
@property(retain, nonatomic) NSString *captureArchivePath; // @synthesize captureArchivePath=_captureArchivePath;
@property(nonatomic) BOOL enablePerFrameTiming; // @synthesize enablePerFrameTiming=_enablePerFrameTiming;
@property(nonatomic) BOOL enableExperimentFinish; // @synthesize enableExperimentFinish=_enableExperimentFinish;
@property(readonly, nonatomic) unsigned int iteration; // @synthesize iteration=_iteration;
@property(nonatomic) unsigned int warmupCount; // @synthesize warmupCount=_warmupCount;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned int repeatCount; // @synthesize repeatCount=_repeatCount;
@property(readonly, nonatomic) NSMutableDictionary *results; // @synthesize results=_results;
@property(nonatomic) __weak DYFunctionPlayer *functionPlayer; // @synthesize functionPlayer=_functionPlayer;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void)terminateExperiment;
- (BOOL)shouldTerminateExperiment;
- (void)onPlatformFunctionEnd;
- (void)onOpenGLFunctionEnd;
- (void)onFrameEnd;
- (void)onFrameStart;
- (void)endIteration;
- (void)beginIteration:(unsigned int)arg1;
- (void)end;
- (void)begin;
- (void)stopTiming;
- (void)startTiming;
- (BOOL)isPresentFrameEnabled;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 results:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

@end

