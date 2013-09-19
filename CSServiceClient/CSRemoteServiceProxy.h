/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSProxy.h"

#import "ServicePublic-Protocol.h"

@class CSServiceRequest, NSNumber, NSString;

@interface CSRemoteServiceProxy : NSProxy <ServicePublic>
{
    NSString *serverInterface;
    NSNumber *serverPort;
    CSServiceRequest *request;
    double _timeout;
}

+ (id)proxyWithServiceName:(id)arg1;
+ (void)initialize;
@property double timeout; // @synthesize timeout=_timeout;
@property(retain) CSServiceRequest *request; // @synthesize request;
- (void).cxx_destruct;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)getMethodDescription:(struct objc_method_description *)arg1 forSelector:(SEL)arg2;
- (id)callRemoteMethod;
- (id)initWithServiceName:(id)arg1;
- (id)init;

@end

