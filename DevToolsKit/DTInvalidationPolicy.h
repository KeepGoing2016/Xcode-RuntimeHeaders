/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSNumber;

@interface DTInvalidationPolicy : NSObject
{
    BOOL scheduledValidation;
    SEL selector;
    id target;
    id validateBlock;
    id userInfo;
    NSNumber *priority;
    NSNumber *delay;
    BOOL validatesWhenAppTerminates;
    BOOL disablesSuddenTermination;
    BOOL disabledSuddenTermination;
    BOOL validating;
}

+ (id)invalidationPolicyForInstantOffWithBlock:(id)arg1;
- (BOOL)disablesSuddenTermination;
- (void)setDisablesSuddenTermination:(BOOL)arg1;
- (BOOL)validatesWhenAppTerminates;
- (void)setValidatesWhenAppTerminates:(BOOL)arg1;
- (double)delay;
- (void)setDelay:(double)arg1;
- (unsigned long long)priority;
- (void)setPriority:(unsigned long long)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void)appWillTerminate:(id)arg1;
- (void)forceValidate;
- (void)validate;
- (void)cancelValidation;
- (void)unscheduleValidation;
- (void)invalidate;
- (BOOL)isValid;
- (void)doValidation:(id)arg1;
- (void)setSuddenTerminationBlocked:(BOOL)arg1;
- (void)dealloc;
- (id)initWithBlock:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

