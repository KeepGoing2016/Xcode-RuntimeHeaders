/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsSupport/TSOutputStream.h>

@interface TSFilterOutputStream : TSOutputStream
{
    id <TSOutputStreams> _outputStream;
}

- (void)close;
- (void)flush;
- (void)writeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)outputStream;
- (void)dealloc;
- (id)init;
- (id)initWithOutputStream:(id)arg1;

@end

