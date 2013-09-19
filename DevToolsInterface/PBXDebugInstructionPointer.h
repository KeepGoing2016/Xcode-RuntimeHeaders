/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "PBXMarkerDelegateProtocol-Protocol.h"

@class PBXDebugSessionModule, PBXFileDocument;

@interface PBXDebugInstructionPointer : NSObject <NSCopying, PBXMarkerDelegateProtocol>
{
    PBXDebugSessionModule *_debugModule;
    unsigned long long _lineNumber;
    PBXFileDocument *_document;
}

- (int)state;
- (void)setDocument:(id)arg1;
- (id)document;
- (BOOL)isEnabled;
- (void)markChanged;
- (unsigned long long)lineNumber;
- (void)setLineNumber:(unsigned long long)arg1;
- (void)setLineNumber:(unsigned long long)arg1 informDebugModule:(BOOL)arg2;
- (id)debugSessionModule;
- (void)setDebugSessionModule:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

