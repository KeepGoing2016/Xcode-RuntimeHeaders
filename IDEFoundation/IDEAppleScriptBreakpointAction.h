/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEFoundation/IDEBreakpointAction.h>

@class NSString;

@interface IDEAppleScriptBreakpointAction : IDEBreakpointAction
{
    NSString *_script;
}

+ (id)propertiesAffectingPersistenceState;
@property(copy) NSString *script; // @synthesize script=_script;
- (void).cxx_destruct;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_awakeFromXMLUnarchiver:(id)arg1;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (void)performActionUsingContext:(id)arg1 andBreakpoint:(id)arg2;
- (void)_handleScriptChanged;
- (void)_appleScriptActionCommonInit;
- (id)init;

@end

