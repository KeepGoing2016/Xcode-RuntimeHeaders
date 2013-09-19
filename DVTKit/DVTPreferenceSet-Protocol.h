/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTInvalidation-Protocol.h"

@class DVTCustomDataSpecifier, NSImage, NSString;

@protocol DVTPreferenceSet <DVTInvalidation>
+ (id)titleForNewPreferenceSetFromTemplate;
+ (id)preferenceSetsListHeader;
+ (id)preferenceSetsFileExtension;
+ (id)defaultKeyForExcludedBuiltInPreferenceSets;
+ (id)defaultKeyForCurrentPreferenceSet;
+ (id)builtInPreferenceSetsDirectoryURL;
+ (id)systemPreferenceSet;
+ (id)preferenceSetGroupingName;
+ (id)preferenceSetsManager;
@property BOOL contentNeedsSaving;
@property(readonly, getter=isBuiltIn) BOOL builtIn;
@property(retain) DVTCustomDataSpecifier *customDataSpecifier;
@property(retain) NSImage *image;
@property(readonly) NSString *localizedName;
@property(readonly) NSString *name;
- (id)dataRepresentationWithError:(id *)arg1;
- (id)initWithCustomDataSpecifier:(id)arg1 basePreferenceSet:(id)arg2;
- (id)initWithName:(id)arg1 dataURL:(id)arg2;

@optional
+ (id)titleForManagePreferenceSets;
@end

