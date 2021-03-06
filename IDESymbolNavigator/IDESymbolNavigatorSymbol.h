/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEIndexSymbol;

@interface IDESymbolNavigatorSymbol : NSObject
{
    IDEIndexSymbol *_symbol;
}

@property(readonly) IDEIndexSymbol *symbol; // @synthesize symbol=_symbol;
- (void).cxx_destruct;
- (void)fetchSymbols:(id)arg1 generation:(unsigned long long)arg2 lastOperation:(id)arg3;
- (void)cancelOperations;
- (BOOL)childrenNeedUpdating;
- (BOOL)hasChildren;
- (id)ideModelObjectTypeIdentifier;
- (id)navigableItem_documentType;
- (id)navigableItem_contentDocumentLocation;
- (id)navigableItem_image;
- (id)navigableItem_name;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithSymbol:(id)arg1;

@end

