/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEGeniusResultsFinder.h>

@class DVTFileDataType, NSURL;

@interface IDECounterpartsGeniusResultsFinder : IDEGeniusResultsFinder
{
    NSURL *_documentFileURL;
    DVTFileDataType *_documentFileDataType;
    BOOL _updateGeniusResults;
}

+ (id)_fileReferenceForFileURL:(id)arg1;
+ (BOOL)_isCSourceDataType:(id)arg1;
+ (BOOL)_isCHeaderDataType:(id)arg1;
+ (BOOL)_isSourceDataType:(id)arg1;
- (void).cxx_destruct;
- (void)findGeniusResultsForEditorDocument:(id)arg1 selectedDocumentLocations:(id)arg2;
- (id)geniusResults;
- (void)_collectGeniusResultForFileReference:(id)arg1 fileReferencePath:(id)arg2 fileReferenceName:(id)arg3 toImmediateCounterparts:(id)arg4 associateCounterparts:(id)arg5 fileBaseName:(id)arg6 inputFolderPath:(id)arg7;

@end

