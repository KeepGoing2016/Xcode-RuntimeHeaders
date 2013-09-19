/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSManagedObject.h"

@interface XDDevEntityMapping : NSManagedObject
{
}

+ (id)entityMappingStringFromType:(unsigned long long)arg1;
+ (unsigned long long)entityMappingTypeFromUIString:(id)arg1;
+ (id)defaultEntityMappingUIStrings;
+ (void)initialize;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1;
- (void)addMissingPropertyMappings;
- (id)sortedRelationshipMappings;
- (id)sortedAttributeMappings;
- (id)sortedPropertyMappings;
- (id)destinationEntity;
- (id)sourceEntity;
- (BOOL)hasValidDestinationName;
- (BOOL)hasValidSourceName;
- (id)mappingStatusIconData;
- (id)mappingTypeIconData;
- (id)_mappingTypeIconsByMappingName;
- (void)removeRelationshipMappingsObject:(id)arg1;
- (void)addRelationshipMappingsObject:(id)arg1;
- (void)removeAttributeMappingsObject:(id)arg1;
- (void)addAttributeMappingsObject:(id)arg1;
- (void)setMappingModel:(id)arg1;
- (id)mappingModel;
- (BOOL)validateSourceExpressionAsString:(id *)arg1 error:(id *)arg2;
- (void)setSourceExpressionAsString:(id)arg1;
- (id)sourceExpressionAsString;
- (void)setSourceExpression:(id)arg1;
- (id)sourceExpression;
- (void)setName:(id)arg1;
- (id)name;
- (id)hasHashDifferencesShortString;
- (id)shortMappingTypeName;
- (void)setMappingTypeName:(id)arg1;
- (id)mappingTypeName;
- (void)setMigrationPolicyClassName:(id)arg1;
- (id)migrationPolicyClassName;
- (BOOL)validateSourceFilterPredicateString:(id *)arg1 error:(id *)arg2;
- (void)setSourceFilterPredicateString:(id)arg1;
- (id)sourceFilterPredicateString;
- (void)setSourceExpressionData:(id)arg1;
- (id)sourceExpressionData;
- (void)setUserInfoData:(id)arg1;
- (id)userInfoData;
- (void)setMappingNumber:(id)arg1;
- (id)mappingNumber;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (void)setDestinationName:(id)arg1;
- (id)destinationName;
- (void)setSourceName:(id)arg1;
- (id)sourceName;
- (void)setAutoGenerateExpression:(id)arg1;
- (id)autoGenerateExpression;

@end

