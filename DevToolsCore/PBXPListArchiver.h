/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface PBXPListArchiver : NSObject
{
    unsigned long long _role;
    NSMutableDictionary *_archiveDictionary;
    NSMutableDictionary *_currentArchiveDict;
    NSMutableDictionary *_classTable;
    NSMutableDictionary *_objectTable;
    NSMutableDictionary *_userSettingsTable;
    NSMutableArray *_userObjects;
    id _delegate;
}

+ (id)currentArchiveFormat;
+ (id)plistArchiveWithRootObject:(id)arg1 delegate:(id)arg2;
+ (id)plistArchiveWithRootObject:(id)arg1 delegate:(id)arg2 role:(unsigned long long)arg3;
+ (void)initialize;
- (void)encodePListDictionary:(id)arg1 forKey:(id)arg2;
- (void)encodePListArray:(id)arg1 forKey:(id)arg2;
- (void)encodeString:(id)arg1 forKey:(id)arg2;
- (void)encodeObjectDictionaryWeakly:(id)arg1 forKey:(id)arg2;
- (void)encodeObjectDictionary:(id)arg1 forKey:(id)arg2;
- (void)_encodeObjectDictionary:(id)arg1 forKey:(id)arg2 asWeakReference:(BOOL)arg3;
- (void)encodeObjectArrayWeakly:(id)arg1 forKey:(id)arg2;
- (void)encodeObjectArray:(id)arg1 forKey:(id)arg2;
- (void)_encodeObjectArray:(id)arg1 forKey:(id)arg2 asWeakReference:(BOOL)arg3;
- (id)_createPListDictionaryForObjectDictionary:(id)arg1 asWeakReference:(BOOL)arg2;
- (id)_createPListArrayForObjectArray:(id)arg1 asWeakReference:(BOOL)arg2;
- (void)encodeObjectWeakly:(id)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)_encodeObject:(id)arg1 forKey:(id)arg2 asWeakReference:(BOOL)arg3;
- (void)encodeValue:(id)arg1 forKey:(id)arg2;
- (void)encodeRange:(struct _NSRange)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeCharacter:(unsigned short)arg1 forKey:(id)arg2;
- (void)encodeBoolean:(BOOL)arg1 forKey:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (unsigned long long)role;
- (id)userSettings;
- (id)plistArchive;
- (void)dealloc;
- (id)init;
- (id)initWithRootObject:(id)arg1;
- (id)initWithRootObject:(id)arg1 delegate:(id)arg2;
- (id)initWithRootObject:(id)arg1 delegate:(id)arg2 role:(unsigned long long)arg3;
- (id)_archiveUserObject:(id)arg1;
- (id)_archiveUserObject:(id)arg1 asWeakReference:(BOOL)arg2;
- (id)_archiveObject:(id)arg1;
- (id)_archiveObject:(id)arg1 asWeakReference:(BOOL)arg2;

@end

