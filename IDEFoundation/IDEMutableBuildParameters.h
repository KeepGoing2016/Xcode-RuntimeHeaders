/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEFoundation/IDEBuildParameters.h>

@class IDEOverridingBuildProperties, IDERunDestination, IDESchemeCommand<IDEPrimitiveSchemeCommand>, IDEWorkspaceArenaSnapshot, NSString;

@interface IDEMutableBuildParameters : IDEBuildParameters
{
}

@property(copy) IDEOverridingBuildProperties *overridingProperties; // @dynamic overridingProperties;
@property(copy) NSString *activeArchitecture; // @dynamic activeArchitecture;
@property(retain) IDERunDestination *activeRunDestination; // @dynamic activeRunDestination;
@property(copy) NSString *configurationName; // @dynamic configurationName;
@property(retain) IDESchemeCommand<IDEPrimitiveSchemeCommand> *schemeCommand; // @dynamic schemeCommand;
@property(copy) NSString *buildAction; // @dynamic buildAction;
@property(copy) IDEWorkspaceArenaSnapshot *workspaceArenaSnapshot; // @dynamic workspaceArenaSnapshot;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

