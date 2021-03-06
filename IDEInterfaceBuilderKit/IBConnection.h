/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IBDocumentArchiving-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface IBConnection : NSObject <NSCoding, NSCopying, IBDocumentArchiving>
{
    id source;
    id destination;
    NSString *label;
}

+ (BOOL)isOrderedRelativeToUniformInstances;
+ (id)connectionExtension;
+ (id)localIntegrationKeyPathsForConnectionExtension:(id)arg1 integrationType:(id)arg2 accessor:(id)arg3;
+ (id)typeForInsertionConnectionContext:(id)arg1 forConnectingFromObject:(id)arg2 document:(id)arg3;
+ (id)prototypeConnectionForConnectingFromObject:(id)arg1 document:(id)arg2;
+ (BOOL)prototypeMatchConnectionContextIsValid:(id)arg1 forConnectingFromObject:(id)arg2 toObject:(id)arg3 document:(id)arg4;
+ (BOOL)canMakeSourceCodeConnectionsFromObject:(id)arg1 toObject:(id)arg2 document:(id)arg3;
+ (Class)connectionContextClass;
+ (void)refactorConnectionsInExternalConnectionRepresentation:(id)arg1 fromContainer:(id)arg2 forContainer:(id)arg3 fromObject:(id)arg4 toObject:(id)arg5 context:(id)arg6;
+ (id)insertConnectionsFromExternalConnectionRepresentation:(id)arg1 fromContainer:(id)arg2 forContainer:(id)arg3 context:(id)arg4;
+ (id)determineBestInitialSelectionForObjects:(id)arg1 sourceObject:(id)arg2;
+ (id)prototypeConnectionsForObject:(id)arg1;
+ (id)prototypeConnectionsFromObject:(id)arg1 toObject:(id)arg2;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
- (void).cxx_destruct;
- (id)ibImageForNavigationRepresentation;
- (id)applicableInspectorsForCategory:(id)arg1 suggestion:(id)arg2;
- (long long)compareToConnection:(id)arg1 forCompilationInDocument:(id)arg2;
- (id)ibLocalAutoNullifyingNonChildToManyRelationshipsKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (id)ibLocalNonChildToManyRelationshipsKeyPaths;
- (id)ibLocalToManyRelationshipsKeyPaths;
- (id)ibLocalAutoNullifyingNonChildToOneRelationshipsKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (id)ibLocalNonChildToOneRelationshipsKeyPaths;
- (id)ibLocalToOneRelationshipsKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (id)connectionByCompletingWithConnectionContext:(id)arg1;
- (void)populateExternalConnectionRepresentation:(id)arg1 forContainer:(id)arg2 fromContainer:(id)arg3 otherExternalConnections:(id)arg4 context:(id)arg5;
- (BOOL)shouldFollowDestinationToPasteboardAsExternalConnection;
- (BOOL)shouldFollowSourceToPasteboardAsExternalConnection;
- (void)objectContainer:(id)arg1 willRemoveConnectionWithContext:(id)arg2;
- (void)objectContainer:(id)arg1 willRemoveObject:(id)arg2 context:(id)arg3;
- (id)endPointForEstimatingUnlabeledConnection;
- (void)addToDocument:(id)arg1;
- (id)ibInitialConnectionLabelSearchTerm;
- (long long)compareLabels:(id)arg1;
- (long long)previousConnectionStateIndicatorForDragFromObject:(id)arg1 toObject:(id)arg2 inDocument:(id)arg3;
- (BOOL)isEqualToPrototype:(id)arg1;
- (BOOL)isPrototypeFor:(id)arg1;
- (BOOL)isEquivalentToPrototypeFor:(id)arg1 inDocument:(id)arg2;
- (id)exclusitivityHintInObjectContainer:(id)arg1;
- (BOOL)isExclusiveTo:(id)arg1 inObjectContainer:(id)arg2;
- (id)displayGroupIdentifierFromReferenceEndPoint:(id)arg1;
- (id)displayGroupIdentifierForDragFromObject:(id)arg1 toObject:(id)arg2;
- (BOOL)isCatchAllPrototypeForDisplayGroup;
- (id)printablePListForIBToolInDocument:(id)arg1;
- (id)description;
- (id)displayDescriptionInDocument:(id)arg1;
- (BOOL)validateDestination:(id)arg1;
- (BOOL)validateSource:(id)arg1;
- (BOOL)validateEndPoint:(id)arg1;
- (BOOL)canCoexistsWithOtherConnectionsHavingSameEndPoint;
- (id)equivalentPrototypeWithRespectToEquivalentEndPoint:(id)arg1 inDocument:(id)arg2;
- (id)prototypeWithRespectTo:(id)arg1;
- (BOOL)allowsEstablishingNewConnections;
- (long long)relationshipType;
- (long long)compareToPrototype:(id)arg1 predecessors:(id)arg2 predecessorsForSelf:(id)arg3;
- (long long)compareToConnectionForPrototypeMenu:(id)arg1;
- (id)labelForMenu;
- (id)label;
- (id)supersedingEndPoints;
- (id)parentsWhosChildrenCouldIntroduceSupersessionOnAddition;
- (id)supersedingDisplayValues;
- (id)displayValuesWithRespectToPrototype:(id)arg1 inDocument:(id)arg2;
- (id)displayNameWithRespectToPredecessors:(id)arg1;
- (id)errorMessageForExistenceWithoutPrototypeInDocument:(id)arg1;
- (id)nonContainerEndObjectInTargetRuntime:(id)arg1;
- (id)containerEndObjectInTargetRuntime:(id)arg1;
- (id)destination;
- (void)setLabel:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setEndPoint:(id)arg1;
- (id)endPoint;
- (id)archiveKeyForLabel;
- (id)equivalentSourceInDocument:(id)arg1;
- (id)equivalentDestinationInDocument:(id)arg1;
- (id)endPointForEquivalentEndPoint:(id)arg1 inDocument:(id)arg2;
- (void)completeWithMissingComponent:(id)arg1;
- (id)missingComponents;
- (id)source;
- (BOOL)useConnectionSourceForWarningLocation;
- (void)setValue:(id)arg1 forEndPoint:(long long)arg2;
- (id)valueForEndPoint:(long long)arg1;
- (id)copyWithSource:(id)arg1 destination:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (id)archiveKeyForEndPoint:(long long)arg1;
- (long long)endPointToArchive;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 andLabel:(id)arg2;
- (id)initWithDestination:(id)arg1;
- (id)initWithDestination:(id)arg1 andLabel:(id)arg2;
- (id)ibXLIFFClassName:(id)arg1;
- (id)connectionDefinitionForObject:(id)arg1;

@end

