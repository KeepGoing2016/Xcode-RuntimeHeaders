/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/XCWorkQueueCommand.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, PBXTargetBuildContext, XCCommandLineToolSpecification, XCPropertyDictionary, XCWorkQueueCommandInvocation;

@interface XCDependencyCommand : XCWorkQueueCommand
{
    PBXTargetBuildContext *_buildContext;
    unsigned long long _commandNumber;
    NSMutableArray *_filePathsToRemove;
    unsigned long long _phaseNumber;
    NSMutableArray *_inputNodes;
    NSMutableArray *_outputNodes;
    XCCommandLineToolSpecification *_toolSpecification;
    NSArray *_ruleInfo;
    NSString *_commandPath;
    NSMutableArray *_arguments;
    NSMutableDictionary *_environment;
    NSString *_architecture;
    NSString *_variant;
    NSString *_workingDirPath;
    id _customToolInfoObject;
    CDStruct_7eef4560 _inputSignature;
    CDStruct_7eef4560 _configSignature;
    int _state;
    BOOL _waitCountBeingAdjusted;
    BOOL _beingEnqueued;
    BOOL _caresAboutIncludes;
    BOOL _mightHavePredProcOutput;
    BOOL _shouldSynchronizeOnFiles;
    BOOL _isBlockedOnFileLocks;
    BOOL _neededToRunWhenLastEnqueued;
    BOOL _emitEnvVars;
    NSMutableArray *_buildMessages;
    BOOL _specialEditingWasDone;
    NSString *_whyState;
    XCWorkQueueCommandInvocation *_currentInvocation;
    NSString *_commandLineDisplayString;
    XCPropertyDictionary *_launchPropertyDict;
    NSString *_extraSignatureInfo;
    struct {
        int state;
        CDStruct_7eef4560 configSig;
        NSString *whyDirty;
        unsigned char markByte;
    } _cmnd2009;
}

- (id)dependencyNode;
- (BOOL)outputFilesHaveBeenUpdated;
- (void)unlockInputAndOutputFiles;
- (void)lockInputAndOutputFiles;
- (BOOL)inputAndOutputFilesAreAvailable;
- (BOOL)isBlockedOnInputOrOutputFileLocks;
- (void)setShouldSynchronizeOnFiles:(BOOL)arg1;
- (BOOL)shouldSynchronizeOnFiles;
- (void)untouch;
- (void)touch;
- (void)fileMayHaveChanged;
- (void)removePredictiveProcessingOutputRecursivelyBecauseOfChangedNode:(id)arg1;
- (void)makeConsumerCommandsOfOutputNodesPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)makeOutputNodesPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)setCustomToolInfoObject:(id)arg1;
- (id)customToolInfoObject;
- (void)setLaunchPropertyExpansionDictionary:(id)arg1;
- (id)launchPropertyExpansionDictionary;
- (void)didDeactivateInWorkQueue:(id)arg1 didCompleteSuccessfully:(BOOL)arg2;
- (void)propagateSignatureToOutputNodes;
- (void)willActivateInWorkQueue:(id)arg1;
- (void)enqueueOutOfDateCommandsOntoWorkQueue:(id)arg1;
- (void)_2009_enqueueCommandsOntoWorkQueue:(id)arg1 whenceDebugDesc:(id)arg2;
- (BOOL)_2009_doesCommandNeedToRun;
- (BOOL)needsToRun;
- (void)computeStateIfNeeded;
- (BOOL)isUpToDate;
- (void)resetStateRecursively;
- (void)resetState;
- (void)statFileIfNeeded;
- (id)paths;
- (id)path;
- (CDStruct_7eef4560)signature;
- (void)rerunCommand;
- (int)state;
- (void)writeInputEdgesToGraphVizFile:(struct __sFILE *)arg1;
- (void)writeDefinitionToGraphVizFile:(struct __sFILE *)arg1;
- (id)nameForGraphViz;
- (id)description;
- (id)signatureDescription;
- (id)stateDescription;
- (id)shortNameForDebugging;
- (id)displayString;
- (void)decrementWaitCountsOfDependingNodes;
- (void)incrementWaitCountsOfDependingNodes;
- (void)decrementWaitCount;
- (void)incrementWaitCount;
- (id)instantiatedCommandResultsPostprocessor;
- (id)instantiatedCommandOutputParserWithLogSectionRecorder:(id)arg1;
- (id)descriptionForWorkQueueLog;
- (id)subprocessExtraEnvironmentEntriesForProcessing;
- (id)subprocessWorkingDirectoryForProcessing;
- (id)subprocessCommandLineForProcessing;
- (void)commandInvocationDidEnd:(id)arg1 successfully:(BOOL)arg2;
- (void)commandInvocation:(id)arg1 didEmitBytes:(const char *)arg2 length:(unsigned long long)arg3;
- (void)commandInvocationWillStart:(id)arg1;
- (id)createStartedCommandInvocationInSlot:(unsigned long long)arg1 ofWorkQueueOperation:(id)arg2;
- (void)checkWaitCounts;
- (BOOL)isReadyForProcessing;
- (void)propagateCachedOutputs;
- (BOOL)shouldPropagateCachedOutputs;
- (BOOL)hasCachedOutputs;
- (void)setNeededToRunWhenLastEnqueued:(BOOL)arg1;
- (BOOL)neededToRunWhenLastEnqueued;
- (id)sharedMemoryName;
- (void)noteMightHavePredictiveProcessingOutput;
- (id)predictiveProcessingValiditySignature;
- (id)predictiveProcessingInputFilePath;
- (id)predictiveProcessingCandidateFilePath;
- (CDStruct_7eef4560)configurationSignature;
- (CDStruct_7eef4560)inputSignature;
- (void)_addConfigurationSignatureIngredientsToMD5Context:(struct CC_MD5state_st *)arg1;
- (void)addFilePathToRemove:(id)arg1;
- (id)filePathsToRemove;
- (void)setCaresAboutIncludes:(BOOL)arg1;
- (BOOL)caresAboutIncludes;
- (void)setWorkingDirectoryPath:(id)arg1;
- (id)workingDirectoryPath;
- (void)setExtraSignatureInfo:(id)arg1;
- (id)extraSignatureInfo;
- (void)setEmitEnvVars:(BOOL)arg1;
- (BOOL)emitEnvVars;
- (void)setVariant:(id)arg1;
- (id)variant;
- (void)setArchitecture:(id)arg1;
- (id)architecture;
- (void)addEnvironmentEntriesFromDictionary:(id)arg1;
- (void)addEnvironmentValue:(id)arg1 forKey:(id)arg2;
- (void)setEnvironment:(id)arg1;
- (id)environment;
- (id)commandLine;
- (void)setSpecialEditingOfCommandLineHasBeenPerformed:(BOOL)arg1;
- (BOOL)specialEditingOfCommandLineHasBeenPerformed;
- (void)addBuildMessage:(id)arg1;
- (unsigned long long)transformArgumentsHavingPrefix:(id)arg1 usingFormatString:(id)arg2;
- (unsigned long long)transformArgumentsHavingPrefix:(id)arg1 inRange:(struct _NSRange)arg2 usingFormatString:(id)arg3;
- (void)replaceArgumentAtIndex:(unsigned long long)arg1 withArgument:(id)arg2;
- (void)removeArgumentAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfArgumentHavingPrefix:(id)arg1 startingAtIndex:(unsigned long long)arg2;
- (id)argumentAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfArguments;
- (void)addArgumentsFromArray:(id)arg1;
- (void)addArguments:(id)arg1;
- (void)addArgument:(id)arg1;
- (id)arguments;
- (void)setCommandPath:(id)arg1;
- (id)commandPath;
- (void)setRuleInfo:(id)arg1;
- (id)ruleInfo;
- (unsigned long long)commandNumber;
- (void)setToolSpecification:(id)arg1;
- (id)toolSpecification;
- (void)_addDependingNode:(id)arg1;
- (void)addOutputNode:(id)arg1;
- (id)outputNodes;
- (void)addInputNode:(id)arg1;
- (id)inputNodes;
- (void)invalidateConfigurationSignature;
- (void)invalidateInputSignature;
- (void)setPhaseNumber:(unsigned long long)arg1;
- (unsigned long long)phaseNumber;
- (id)name;
- (void)addCommandIdentToBuildStateStoreDependencyList;
- (id)buildCommandState;
- (void)setBuildContext:(id)arg1 commandNumber:(unsigned long long)arg2;
- (id)_buildStateId;
- (id)buildContext;
- (void)detachFromOtherGraphObjects;
- (void)dealloc;
- (id)init;
- (id)initWithCommandNumber:(unsigned long long)arg1 ruleInfo:(id)arg2 commandPath:(id)arg3;
- (id)initWithCommandNumber:(unsigned long long)arg1 ruleInfo:(id)arg2 commandPath:(id)arg3 arguments:(id)arg4 environment:(id)arg5;

@end

