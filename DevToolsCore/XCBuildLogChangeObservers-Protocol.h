/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol XCBuildLogChangeObservers
- (void)buildLog:(id)arg1 targetSectionDidStopRecording:(id)arg2;
- (void)buildLog:(id)arg1 commandInvocationSectionDidStopRecording:(id)arg2;
- (void)buildLog:(id)arg1 analyzerResultMessageDidStopRecording:(id)arg2;
- (void)buildLog:(id)arg1 commandInvocationSection:(id)arg2 didAddMessage:(id)arg3;
- (void)buildLog:(id)arg1 commandInvocationSection:(id)arg2 didAppendText:(id)arg3;
- (void)buildLog:(id)arg1 targetSection:(id)arg2 didAddCommandInvocationSection:(id)arg3;
- (void)buildLog:(id)arg1 willAddTargetSection:(id)arg2;
@end

