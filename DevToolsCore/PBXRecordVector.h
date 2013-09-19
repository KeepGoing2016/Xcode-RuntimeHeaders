/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableData;

@interface PBXRecordVector : NSObject
{
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
    } *_header;
    NSMutableData *_store;
    unsigned long long _cursor;
    void *_records;
    unsigned long long _tag;
    struct dispatch_queue_s *_vectorAccessQueue;
}

- (void)replaceRecordsAtRow:(unsigned long long)arg1 withVector:(id)arg2;
- (void)appendVector:(id)arg1;
- (void)setCursor:(unsigned long long)arg1;
- (unsigned long long)cursor;
- (unsigned long long)insertRecords:(const void *)arg1 count:(unsigned long long)arg2 atRow:(unsigned long long)arg3;
- (unsigned long long)appendRecords:(const void *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)appendRecord:(const void *)arg1;
- (BOOL)setCurrentRecord:(const void *)arg1;
- (BOOL)getCurrentRecord:(void *)arg1;
- (BOOL)getPreviousRecord:(void *)arg1;
- (BOOL)getNextRecord:(void *)arg1;
- (void)setTag:(unsigned long long)arg1;
- (unsigned long long)getTag;
- (BOOL)writeDataToFile:(id)arg1 queue:(struct dispatch_queue_s *)arg2;
- (unsigned long long)count;
- (void *)records;
- (BOOL)setRecord:(const void *)arg1 atRow:(unsigned long long)arg2;
- (BOOL)getRecord:(void *)arg1 atRow:(unsigned long long)arg2;
- (void *)currentRecord;
- (void *)lastRecord;
- (void *)firstRecord;
- (unsigned long long)rowForRecord:(void *)arg1;
- (void *)recordAtRow:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithContentsOfFile:(id)arg1 accessQueue:(struct dispatch_queue_s *)arg2;
- (id)initRecordSize:(unsigned long long)arg1 capacity:(unsigned long long)arg2 accessQueue:(struct dispatch_queue_s *)arg3;
- (BOOL)getTopRecord:(void *)arg1;
- (BOOL)popRecord:(void *)arg1;
- (unsigned long long)pushRecord:(const void *)arg1;

@end

