/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTTextCompletionItem-Protocol.h"

@class NSArray, NSAttributedString, NSImage, NSMutableArray, NSString;

@interface IDEAutoImportCompletionItem : NSObject <DVTTextCompletionItem>
{
    id <IDEAutoImportable> _autoImportable;
    NSMutableArray *_additionalCompletions;
    NSString *_displayType;
    NSString *_displayText;
    NSString *_completionText;
    NSString *_name;
    unsigned long long _partialSelectorCount;
    NSAttributedString *_descriptionText;
}

@property(nonatomic) unsigned long long partialSelectorCount; // @synthesize partialSelectorCount=_partialSelectorCount;
@property(readonly) NSArray *additionalCompletions; // @synthesize additionalCompletions=_additionalCompletions;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)infoViewControllerWithWidth:(double)arg1 context:(id)arg2 completionBlock:(id)arg3;
- (void)removeAllAdditionalCompletions;
- (void)addImportStatementForAutoImportable:(id)arg1 forInsertionIntoContext:(id)arg2 withHeaderVisibility:(unsigned long long)arg3;
@property(readonly) int completionItemStyle;
@property(readonly) BOOL notRecommended;
@property double priority;
@property(readonly) NSImage *icon;
@property(readonly) NSAttributedString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly) NSString *completionText;
@property(readonly) NSString *parentText;
@property(readonly) NSImage *highlightedStatusIcon;
@property(readonly) NSImage *statusIcon;
@property(readonly) NSString *displayType;
@property(readonly) NSString *displayText;
@property(readonly) NSString *name;
- (void)_parseCompletionString;
- (id)initWithAutoImportable:(id)arg1;

@end

