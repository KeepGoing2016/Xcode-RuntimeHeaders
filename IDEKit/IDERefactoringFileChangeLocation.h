/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTFilePath;

@interface IDERefactoringFileChangeLocation : NSObject
{
    DVTFilePath *_filePath;
}

@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (long long)compareFileLocationNoPath:(id)arg1;
- (BOOL)isEqualToFileLocation:(id)arg1;
- (id)description;
- (id)initWithFilePath:(id)arg1;

@end

