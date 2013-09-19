/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"

@class DVTStackBacktrace, IDESourceControlPerson, IDESourceControlRepository, IDESourceControlTree, NSArray, NSDate, NSDictionary, NSString;

@interface IDESourceControlLogItem : NSObject <DVTInvalidation>
{
    IDESourceControlPerson *_author;
    NSString *_revision;
    NSDate *_date;
    NSString *_message;
    NSDictionary *_filesWithStatus;
    IDESourceControlTree *_sourceTree;
    IDESourceControlRepository *_filesChangedRepository;
    NSArray *_itemsWithStatus;
    BOOL _isChangedFilesExpanded;
}

+ (void)initialize;
@property BOOL isChangedFilesExpanded; // @synthesize isChangedFilesExpanded=_isChangedFilesExpanded;
@property(readonly) NSArray *itemsWithStatus; // @synthesize itemsWithStatus=_itemsWithStatus;
@property(readonly) IDESourceControlRepository *filesChangedRepository; // @synthesize filesChangedRepository=_filesChangedRepository;
@property(readonly) IDESourceControlTree *sourceTree; // @synthesize sourceTree=_sourceTree;
@property(retain) NSDictionary *filesWithStatus; // @synthesize filesWithStatus=_filesWithStatus;
@property(retain) NSString *message; // @synthesize message=_message;
@property(readonly) NSDate *date; // @synthesize date=_date;
@property(readonly) NSString *revision; // @synthesize revision=_revision;
@property(readonly) IDESourceControlPerson *author; // @synthesize author=_author;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (long long)compareToLogItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)loadFilesChanged;
- (id)initWithAuthor:(id)arg1 revision:(id)arg2 date:(id)arg3 message:(id)arg4 filesWithStatus:(id)arg5 sourceTree:(id)arg6;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

