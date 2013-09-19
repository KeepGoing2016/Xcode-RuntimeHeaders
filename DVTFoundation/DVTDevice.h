/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTDeviceType, DVTExtension, DVTPlatform, NSMutableSet, NSSet, NSString, NSURL;

@interface DVTDevice : NSObject
{
    NSMutableSet *_capabilities;
    BOOL _available;
    BOOL _ignored;
    BOOL _canSelectArchitectureToExecute;
    DVTExtension *_extension;
    NSURL *_deviceLocation;
    NSString *_name;
    NSString *_identifier;
    NSString *_modelName;
    NSString *_modelCode;
    NSString *_modelUTI;
    DVTPlatform *_platform;
    NSString *_operatingSystemVersion;
    NSString *_operatingSystemVersionWithBuildNumber;
    DVTDeviceType *_deviceType;
    NSString *_nativeArchitecture;
    NSString *_processorDescription;
}

+ (id)_knownDeviceLocators;
+ (void)initialize;
@property(readonly) NSString *processorDescription; // @synthesize processorDescription=_processorDescription;
@property BOOL canSelectArchitectureToExecute; // @synthesize canSelectArchitectureToExecute=_canSelectArchitectureToExecute;
@property(retain) DVTDeviceType *deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) NSString *operatingSystemVersionWithBuildNumber; // @synthesize operatingSystemVersionWithBuildNumber=_operatingSystemVersionWithBuildNumber;
@property(copy) NSString *operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property(retain) DVTPlatform *platform; // @synthesize platform=_platform;
@property(getter=isIgnored) BOOL ignored; // @synthesize ignored=_ignored;
@property(getter=isAvailable) BOOL available; // @synthesize available=_available;
@property(copy, nonatomic) NSString *modelUTI; // @synthesize modelUTI=_modelUTI;
@property(copy, nonatomic) NSString *modelCode; // @synthesize modelCode=_modelCode;
@property(copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly) NSURL *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property(readonly) DVTExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (id)installApplicationSync:(id)arg1 options:(id)arg2;
- (void)stopDebuggingXPCServicesForPID:(int)arg1;
- (void)debugXPCServices:(id)arg1;
- (id)preferredSDKForDeviceOptions:(id)arg1 error:(id *)arg2;
- (id)preferredArchitectureForDeviceOptions:(id)arg1 error:(id *)arg2;
- (BOOL)validateDeviceSpecifierOptions:(id)arg1 allowMultipleMatches:(BOOL)arg2 error:(id *)arg3;
@property(readonly) NSString *nameForDeveloperPortal;
@property(readonly) BOOL isRunningSupportedOS;
@property(readonly) BOOL isSupportedHardware;
@property(readonly) BOOL supportsProvisioning;
@property(readonly) BOOL supportsArchiving;
- (BOOL)canPerformUbiquityFetchEvent;
- (void)performUbiquityFetchEvent;
- (void)performFetchEventForPID:(int)arg1;
@property(readonly) int supportsFetchEvents;
@property(readonly) BOOL supportsXPCServiceDebugging;
@property(readonly) BOOL canRunMultipleInstancesPerApp;
@property(readonly) BOOL runsRemoteFromHostLauncher;
@property(readonly) BOOL supportsDebugAsDifferentUser;
@property(readonly) BOOL supportsDebuggingDocumentVersioning;
@property(readonly) BOOL supportsResumeAndTurningItOnOrOff;
@property(readonly) BOOL supportsCustomWorkingDirectory;
@property(readonly) BOOL supportsDisplayScaleOption;
@property(readonly) BOOL supportsRoutingCoverageFile;
@property(readonly) BOOL supportsLocationSimulation;
@property(readonly) NSString *deviceIdentifierForGPUTracing;
@property(readonly) BOOL supportsApplicationDataUploading;
@property(readonly) BOOL supportsAttachByPIDOrName;
- (void)requestProcessInformations:(id)arg1;
@property(readonly) NSString *executionDisplayName;
@property(readonly) BOOL alwaysAttachesForDebugging;
@property(readonly, getter=isConcreteDevice) BOOL concreteDevice;
@property(readonly, getter=isGenericDevice) BOOL genericDevice;
@property(readonly) NSString *displayOrder;
@property(copy) NSString *nativeArchitecture; // @synthesize nativeArchitecture=_nativeArchitecture;
- (id)servicesMatchingCapability:(id)arg1;
- (id)_instantiateServicesForCapability:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDeviceLocation:(id)arg1 extension:(id)arg2;
- (id)description;

// Remaining properties
@property(readonly) NSSet *capabilities; // @dynamic capabilities;
@property(readonly) NSMutableSet *mutableCapabilities; // @dynamic mutableCapabilities;

@end

