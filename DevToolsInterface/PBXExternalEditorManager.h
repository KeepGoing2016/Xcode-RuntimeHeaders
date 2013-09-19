/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PBXExternalEditorServerProtocol-Protocol.h"

@class NSConnection, NSMapTable, NSMutableArray;

@interface PBXExternalEditorManager : NSObject <PBXExternalEditorServerProtocol>
{
    NSConnection *_vendedConnection;
    NSMutableArray *_registeredEditors;
    NSMapTable *_connectionToProxyMap;
}

+ (id)sharedExternalEditorManager;
- (void)externalEditor:(byref id)arg1 setEdited:(BOOL)arg2 forFile:(bycopy id)arg3;
- (void)externalEditor:(byref id)arg1 didCloseFile:(bycopy id)arg2;
- (void)externalEditor:(byref id)arg1 didOpenFile:(bycopy id)arg2;
- (void)unregisterExternalEditor:(byref id)arg1;
- (void)registerExternalEditor:(byref id)arg1;
- (void)_connectionDidDie:(id)arg1;
- (void)dealloc;
- (id)init;

@end

