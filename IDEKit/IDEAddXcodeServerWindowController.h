/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTPagingSheetWindowController.h"

@class IDEXcodeServer;

@interface IDEAddXcodeServerWindowController : DVTPagingSheetWindowController
{
    BOOL _shouldInvalidateServer;
    IDEXcodeServer *_server;
}

@property(nonatomic) BOOL shouldInvalidateServer; // @synthesize shouldInvalidateServer=_shouldInvalidateServer;
@property(retain, nonatomic) IDEXcodeServer *server; // @synthesize server=_server;
- (void).cxx_destruct;
- (void)didEndSheetWithReturnCode:(long long)arg1;
- (void)windowDidLoad;
- (void)primitiveInvalidate;
- (id)init;

@end

