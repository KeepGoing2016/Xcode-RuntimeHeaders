/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DVTFoundation/DVTAbstractMacDevice.h>

@class NSMutableDictionary;

@interface DVTLocalComputer : DVTAbstractMacDevice
{
    NSMutableDictionary *_pidToXPCServiceConnectionDict;
}

+ (void)initialize;
@property(retain) NSMutableDictionary *pidToXPCServiceConnectionDict; // @synthesize pidToXPCServiceConnectionDict=_pidToXPCServiceConnectionDict;
- (void).cxx_destruct;
- (void)stopDebuggingXPCServicesForPID:(int)arg1;
- (void)debugXPCServices:(id)arg1;
- (void)attachToServiceName:(id)arg1 pid:(int)arg2 parentPID:(int)arg3 stdoutFH:(id)arg4 stderrFH:(id)arg5;
- (id)_xpcDebugConnectionForPid:(id)arg1 create:(BOOL)arg2;
- (id)_keyForPid:(int)arg1;
- (BOOL)supportsLocationSimulation;
- (id)nameForDeveloperPortal;
- (BOOL)supportsProvisioning;
- (BOOL)supportsArchiving;
- (BOOL)supportsXPCServiceDebugging;
- (BOOL)canRunMultipleInstancesPerApp;
- (BOOL)supportsDebugAsDifferentUser;
- (BOOL)supportsDebuggingDocumentVersioning;
- (BOOL)supportsResumeAndTurningItOnOrOff;
- (BOOL)supportsCustomWorkingDirectory;
- (id)processInformations;
- (id)processorDescription;
- (BOOL)isConcreteDevice;
- (BOOL)isGenericDevice;
- (BOOL)isIgnored;
- (void)setIgnored:(BOOL)arg1;
- (BOOL)isAvailable;
- (void)setAvailable:(BOOL)arg1;
- (id)init;

@end

