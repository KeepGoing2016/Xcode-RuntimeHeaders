/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTDispatchLock, NSMutableDictionary;

@interface DVTLibraryFragmentFilter : NSObject
{
    NSMutableDictionary *identifiedDocuments;
    CDStruct_fd921134 specification;
    DVTDispatchLock *_dispatchLock;
    id <DVTLibraryFragmentFilterDelegate> _delegate;
}

@property(retain, nonatomic) id <DVTLibraryFragmentFilterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)unitTestingDescription;
- (long long)indexSize;
- (id)candidateIdentifiersForQuery:(id)arg1 allIdentifiers:(id *)arg2;
- (id)candidateIdentifiersForQuery:(id)arg1;
- (void)removeFiltersForIdentifiers:(id)arg1;
- (void)removeFilterForIdentifier:(id)arg1;
- (id)allIdentifiers;
- (void)addFilterWithDocument:(id)arg1 timestamp:(double)arg2 forIdentifier:(id)arg3;
- (void)loadFiltersFromData:(id)arg1 validationBlock:(id)arg2;
- (id)saveFiltersToData;
- (id)initWithFilterSpecification:(CDStruct_fd921134)arg1;

@end

