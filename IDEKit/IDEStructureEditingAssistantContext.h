/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEAssistantContext.h>

@class DVTObservingToken, IDEContainer, NSArray, NSString;

@interface IDEStructureEditingAssistantContext : IDEAssistantContext
{
    NSString *_assistantIdentifier;
    id _acceptBlock;
    IDEContainer *_targetContainer;
    DVTObservingToken *_targetContainerValidObservationToken;
    unsigned long long _inputDragOperation;
    NSArray *_fileURLs;
    NSArray *_makefileURLs;
    NSArray *_templates;
    unsigned long long _dragOperation;
    BOOL _useMakefileProject;
    BOOL _skipAssistant;
}

@property unsigned long long dragOperation; // @synthesize dragOperation=_dragOperation;
@property(copy) NSArray *templates; // @synthesize templates=_templates;
@property BOOL useMakefileProject; // @synthesize useMakefileProject=_useMakefileProject;
@property(copy) NSArray *makefileURLs; // @synthesize makefileURLs=_makefileURLs;
@property(copy, nonatomic) NSArray *fileURLs; // @synthesize fileURLs=_fileURLs;
@property unsigned long long inputDragOperation; // @synthesize inputDragOperation=_inputDragOperation;
@property(retain, nonatomic) IDEContainer *targetContainer; // @synthesize targetContainer=_targetContainer;
@property(copy) id acceptBlock; // @synthesize acceptBlock=_acceptBlock;
@property BOOL skipAssistant; // @synthesize skipAssistant=_skipAssistant;
@property(copy) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
- (void).cxx_destruct;
- (void)takeInputFromDraggingInfo:(id)arg1;
- (void)_addItemsFromDraggingInfo:(id)arg1;
- (void)_configureForOnlyDraggingProjects;
- (id)_makefilesContainedInFileURLs:(id)arg1;
- (void)dealloc;
- (id)init;

@end

