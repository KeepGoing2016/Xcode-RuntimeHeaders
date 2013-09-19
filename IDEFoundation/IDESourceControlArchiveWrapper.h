/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTFilePath, DVTFileWrapper, NSString;

@interface IDESourceControlArchiveWrapper : NSObject
{
    BOOL _unarchived;
    DVTFilePath *_unarchivedLocation;
    DVTFilePath *_filePath;
    NSString *_comment;
    DVTFileWrapper *_wrapper;
}

+ (id)commentForArchiveAtPath:(id)arg1;
+ (id)archiveDataType;
@property(retain) DVTFileWrapper *wrapper; // @synthesize wrapper=_wrapper;
@property(retain) NSString *comment; // @synthesize comment=_comment;
@property(retain) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (BOOL)archiveFromFilePath:(id)arg1 toFilePath:(id)arg2 withError:(id *)arg3;
- (BOOL)unarchiveFromFilePath:(id)arg1 withError:(id *)arg2;
- (id)temporaryLocationForFilePath:(id)arg1;
- (BOOL)isArchive:(id)arg1;
- (BOOL)isDirectory;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id *)arg4;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)init;
- (id)initWithPath:(id)arg1;

@end

