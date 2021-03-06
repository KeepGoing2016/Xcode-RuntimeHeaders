/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IBViewDragDelegate <NSObject>
- (BOOL)view:(id)arg1 performDragOperation:(id)arg2;
- (BOOL)view:(id)arg1 prepareForDragOperation:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingEntered:(id)arg2;
- (id)dragTypesForView:(id)arg1;

@optional
- (void)view:(id)arg1 draggingEnded:(id)arg2;
- (void)view:(id)arg1 draggingExited:(id)arg2;
- (void)view:(id)arg1 concludeDragOperation:(id)arg2;
- (unsigned long long)view:(id)arg1 draggingUpdated:(id)arg2;
@end

