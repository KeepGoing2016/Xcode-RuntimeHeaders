/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IBFoundation/IBMessageChannel.h>

@interface IBMessageSendChannel : IBMessageChannel
{
}

- (BOOL)sendMessage:(SEL)arg1 returnValue:(id *)arg2 error:(id *)arg3 arguments:(int)arg4;
- (void)shutdown;
- (BOOL)startupReturningError:(id *)arg1;

@end

