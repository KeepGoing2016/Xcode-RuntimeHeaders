/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DSADocSet, DSADocSetUpdate, NSArrayController, NSMutableArray, NSWindow, XCDocSetGetInfoTableView;

@interface XCDocSetGetInfoController : NSObject
{
    DSADocSet *_docSet;
    DSADocSetUpdate *_docSetUpdate;
    NSWindow *_getInfoWindow;
    NSMutableArray *_docSetProperties;
    XCDocSetGetInfoTableView *_summaryTableView;
    XCDocSetGetInfoTableView *_duplicatesTableView;
    NSArrayController *_propertiesController;
    NSArrayController *_duplicatesController;
    BOOL _showRevealInFinderButton;
}

+ (id)docSetGetInfoControllerWithDocSetUpdate:(id)arg1;
+ (id)docSetGetInfoControllerWithDocSet:(id)arg1;
+ (id)docSetGetInfoControllers;
+ (id)lookupKeyForDocSet:(id)arg1;
+ (void)initialize;
@property(nonatomic) BOOL showRevealInFinderButton; // @synthesize showRevealInFinderButton=_showRevealInFinderButton;
@property(retain, nonatomic) NSMutableArray *docSetProperties; // @synthesize docSetProperties=_docSetProperties;
@property(retain, nonatomic) DSADocSetUpdate *docSetUpdate; // @synthesize docSetUpdate=_docSetUpdate;
@property(retain, nonatomic) DSADocSet *docSet; // @synthesize docSet=_docSet;
- (id)getInfoWindow;
- (void)replaceObjectInDocSetPropertiesAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromDocSetPropertiesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inDocSetPropertiesAtIndex:(unsigned long long)arg2;
- (void)getDocSetProperties:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectInDocSetPropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfDocSetProperties;
- (void)showDocSetInfo:(id)arg1;
- (void)revealDocSetInFinder:(id)arg1;
- (void)_loadDuplicateDocSetInfo;
- (void)_loadDocSetProperties;
- (void)_loadDocSetUpdateProperties;
- (void)awakeFromNib;
- (void)_setupTableView:(id)arg1;
- (void)_infoWindowWillClose:(id)arg1;
- (void)_downloadDidFinish:(id)arg1;
- (void)_showPropertiesForDocSet:(id)arg1;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end

