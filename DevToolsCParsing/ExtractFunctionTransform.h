/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCParsing/Transform.h>

@interface ExtractFunctionTransform : Transform
{
}

+ (BOOL)populateParamDictionary:(id)arg1 project:(id)arg2 error:(id *)arg3;
+ (BOOL)_isIdentifierAnIvar:(id)arg1 setParameterBehavior:(id)arg2;
+ (id)adjustSelectionIfNeeded:(id)arg1 error:(id *)arg2;
+ (id)findOrCreateParameterFor:(id)arg1 inDictionary:(id)arg2;
+ (id)parameterInfoForDeclaration:(id)arg1 inDictionary:(id)arg2;
+ (BOOL)isValidBody:(id)arg1;
+ (id)variableReferencesNotVisibleIfMoved:(id)arg1 project:(id)arg2 newScope:(id)arg3;
- (BOOL)performFinal;
- (BOOL)performPerFile;
- (BOOL)checkPerFile;
- (id)matchTrees:(id)arg1 inBody:(id)arg2;
- (BOOL)performFirstFile;
- (id)functionBodyForExpressions:(id)arg1 atLocation:(id)arg2 errorLocation:(id)arg3;
- (id)editToRemoveDeclarationFor:(id)arg1;
- (void)rewriteReferencesTo:(id)arg1 inExpressions:(id)arg2 editArray:(id)arg3;
- (void)rewriteReferencesToSelf:(id)arg1 InExpressions:(id)arg2 editArray:(id)arg3;
- (id)editForDeleteDeclaration:(id)arg1;
- (void)makeMessageWithParameters:(id)arg1 functionName:(id)arg2 sourceLocation:(id)arg3;
- (void)makeFunctionCallWithParameters:(id)arg1 functionName:(id)arg2 sourceLocation:(id)arg3;
- (id)localVariableToReturn;
- (BOOL)checkFinal;
- (BOOL)checkFirstFile;
- (void)_checkBlockByrefExpressions:(id)arg1;
- (id)newMethodName;
- (BOOL)hasReturnValue;
- (BOOL)checkValidateInputs;
- (id)methodOrFunctionLocalizedString;
- (id)newFunctionName;
- (BOOL)willMakeClassMethod;
- (BOOL)willMakeMethod;
- (id)transformRelatedNames;
- (id)requiredParamDictKeys;

@end

