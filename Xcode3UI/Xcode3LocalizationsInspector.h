/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEInspectorViewController.h"

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class DVTLocale, DVTObservingToken, IDENavigatorDataCell, NSArray, NSArrayController, NSView, Xcode3LocalizationCommands, Xcode3LocalizationInspectorContentView;

@interface Xcode3LocalizationsInspector : IDEInspectorViewController <NSTableViewDelegate, NSTableViewDataSource>
{
    Xcode3LocalizationCommands *_localizationCommands;
    DVTObservingToken *_selectionToken;
    IDENavigatorDataCell *_nameAndImageCell;
    Xcode3LocalizationInspectorContentView *_localizationInspectorContentView;
    NSArrayController *_localizationsArrayController;
    NSView *_makeLocalizedAccessoryView;
    DVTLocale *_conversionLocale;
    NSArrayController *_makeLocalizationsArrayController;
    NSArrayController *_baseLocalizationsArrayController;
    NSView *_baseLocalizationAccessoryView;
    DVTLocale *_baseDestinationLocale;
}

+ (id)keyPathsForValuesAffectingFileExists;
@property(retain) DVTLocale *baseDestinationLocale; // @synthesize baseDestinationLocale=_baseDestinationLocale;
@property NSView *baseLocalizationAccessoryView; // @synthesize baseLocalizationAccessoryView=_baseLocalizationAccessoryView;
@property NSArrayController *baseLocalizationsArrayController; // @synthesize baseLocalizationsArrayController=_baseLocalizationsArrayController;
@property NSArrayController *makeLocalizationsArrayController; // @synthesize makeLocalizationsArrayController=_makeLocalizationsArrayController;
@property(retain) DVTLocale *conversionLocale; // @synthesize conversionLocale=_conversionLocale;
@property NSView *makeLocalizedAccessoryView; // @synthesize makeLocalizedAccessoryView=_makeLocalizedAccessoryView;
@property(retain) NSArrayController *localizationsArrayController; // @synthesize localizationsArrayController=_localizationsArrayController;
@property(retain) Xcode3LocalizationInspectorContentView *localizationInspectorContentView; // @synthesize localizationInspectorContentView=_localizationInspectorContentView;
@property(retain) IDENavigatorDataCell *nameAndImageCell; // @synthesize nameAndImageCell=_nameAndImageCell;
@property(retain) DVTObservingToken *selectionToken; // @synthesize selectionToken=_selectionToken;
@property(retain) Xcode3LocalizationCommands *localizationCommands; // @synthesize localizationCommands=_localizationCommands;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)changeResourceForInspectorLocale:(id)arg1 toFileDataType:(id)arg2;
- (void)removeBaseResource;
- (void)removeResourceForInspectorLocale:(id)arg1;
- (void)addBaseResource;
- (void)addResourceForInspectorLocale:(id)arg1;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)allowsConversion;
- (id)conversionFileDataType;
- (id)fileDataType;
- (id)fileDataTypeForValue:(long long)arg1;
@property(readonly) NSArray *fileDataTypes;
- (id)defaultFileDataType;
- (id)variantGroup;
- (id)project;
- (void)makeLocalized:(id)arg1;
- (void)refreshLocalesPreservingFileTypes:(BOOL)arg1;
@property(readonly) BOOL fileExists;
- (id)imageForLocale:(id)arg1 fileDataType:(id)arg2;
- (BOOL)isVariant;
- (id)modelObject;
- (id)nibBundle;
- (id)nibName;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)_projectLocalizationsExcludingBase;
- (id)_projectLocalizations;

@end
