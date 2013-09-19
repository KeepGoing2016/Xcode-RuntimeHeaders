/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVMainController, NSArrayController, NSDictionaryController, NSMutableDictionary, NSTableView;

@interface DVQueryOptionsController : NSObject
{
    DVMainController *mainController;
    NSTableView *docSetsTable;
    NSTableView *languagesTable;
    NSDictionaryController *_apiSearchLanguagesController;
    NSArrayController *_docSetsController;
    NSMutableDictionary *m_apiSearchSelectedLanguages;
}

@property(retain, nonatomic) NSMutableDictionary *apiSearchSelectedLanguages; // @synthesize apiSearchSelectedLanguages=m_apiSearchSelectedLanguages;
- (void)docSetCellStateChanged:(id)arg1;
- (unsigned long long)countOfEnabledDocSets:(unsigned long long *)arg1;
- (id)activeLanguages;
- (id)userEnabledLanguages;
- (void)setLanguage:(id)arg1 isEnabledForSearching:(BOOL)arg2;
- (void)persistLanguageFilter;
- (BOOL)searchAllLanguagesDefault;
- (void)setSearchAllLanguagesDefault:(BOOL)arg1;
- (id)languagesForSearching;
- (BOOL)isSearchingEnabledForLanguage:(id)arg1;
- (id)allLanguagesFromLoadedDocSets;
- (void)findAvailableLanguagesForAPISearch;
- (void)languageCellStateChanged:(id)arg1;
- (BOOL)searchAllDocSetsDefault;
- (void)setSearchAllDocSetsDefault:(BOOL)arg1;
- (void)docSetWasUnloaded:(id)arg1;
- (void)docSetWasLoaded:(id)arg1;
- (void)awakeFromNib;
- (void)toggleSearchingForLanguage:(id)arg1;
- (void)toggleSearchingForDocSet:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

