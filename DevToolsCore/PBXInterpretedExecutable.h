/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/PBXExecutable.h>

@class NSString;

@interface PBXInterpretedExecutable : PBXExecutable
{
    NSString *_interpreterPath;
}

- (id)absolutePathOfLaunchable;
- (void)SetInterpreterPath:(id)arg1;
- (id)interpreterPath;

@end
