/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEEditorDocument;

@interface IDESaveMultipleItem : NSObject
{
    IDEEditorDocument *_editorDocument;
    BOOL _isSelected;
}

@property BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(readonly) IDEEditorDocument *editorDocument; // @synthesize editorDocument=_editorDocument;
- (void).cxx_destruct;
- (id)initWithEditorDocument:(id)arg1;

@end

