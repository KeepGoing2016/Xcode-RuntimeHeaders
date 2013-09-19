/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTDocumentLocation, DVTFileDataType, DVTFilePath, NSImage, NSString;

@interface IDEARCConversionReviewChangesFile : NSObject
{
    DVTFilePath *_filePath;
    NSImage *_image;
    DVTDocumentLocation *_contentDocumentLocation;
    DVTFileDataType *_documentType;
    NSString *_name;
}

+ (id)keyPathsForValuesAffectingNavigableItem_name;
@property(readonly) DVTFileDataType *documentType; // @synthesize documentType=_documentType;
@property(readonly) DVTDocumentLocation *contentDocumentLocation; // @synthesize contentDocumentLocation=_contentDocumentLocation;
@property(readonly) NSImage *image; // @synthesize image=_image;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (id)navigableItem_documentType;
- (id)navigableItem_contentDocumentLocation;
- (id)navigableItem_image;
- (id)navigableItem_name;
- (id)initWithPath:(id)arg1;

@end

