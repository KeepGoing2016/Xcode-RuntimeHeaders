/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "NSObject-Protocol.h"

@protocol IBCollection <NSObject, NSCopying, NSFastEnumeration, NSMutableCopying>
- (id)ib_maximumObjectUsingComparator:(id)arg1;
- (id)ib_minimumObjectUsingComparator:(id)arg1;
- (long long)ib_numberOfObjectsPassingTest:(id)arg1;
- (id)ib_arrayBySortingUsingSelector:(SEL)arg1 onKeyPath:(id)arg2;
- (id)ib_arrayBySortingUsingSelector:(SEL)arg1;
- (void)ib_enumerateObjectsUsingMutatingBlock:(id)arg1;
- (void)ib_enumerateCopyOfObjectsUsingBlock:(id)arg1;
- (void)ib_enumerateObjectsUsingBlock:(id)arg1;
- (id)ib_collectionByFilteringUsingBlock:(id)arg1;
- (id)ib_collectionByRemovingNulls;
- (id)ib_onlyObjectPassingTest:(id)arg1;
- (id)ib_firstObjectPassingTest:(id)arg1;
- (BOOL)ib_objectsAreStrictlyContainedBySet:(id)arg1;
- (BOOL)ib_objectsAreContainedBySet:(id)arg1;
- (BOOL)ib_anyObjectsPassTest:(id)arg1;
- (BOOL)ib_allObjectsPassTest:(id)arg1;
- (id)mutableCopy;
- (id)copy;
- (Class)ib_mutableClass;
- (id)objectEnumerator;
- (id)ib_uniqueObjects;
- (id)allObjects;
- (id)ib_objectsConformingToProtocol:(id)arg1;
- (id)ib_objectsOfClass:(Class)arg1;
- (unsigned long long)count;
- (BOOL)containsObject:(id)arg1;
- (id)ib_onlyObject;
- (id)anyObject;
@end

