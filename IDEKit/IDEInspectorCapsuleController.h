/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEBindableDeclarativeInspectorController-Protocol.h"

@class IDEInspectorContentView, NSArray, NSBundle, NSObject<IDEBindableDeclarativeInspectorController>;

@interface IDEInspectorCapsuleController : NSObject <IDEBindableDeclarativeInspectorController>
{
    NSObject<IDEBindableDeclarativeInspectorController> *parentInspectorController;
    id representedObject;
    IDEInspectorContentView *inspectorContentView;
}

+ (id)inspectedArrayControllerKeyPaths;
@property(readonly) IDEInspectorContentView *inspectorContentView; // @synthesize inspectorContentView;
@property(readonly) id representedObject; // @synthesize representedObject;
@property(readonly) NSObject<IDEBindableDeclarativeInspectorController> *parentInspectorController; // @synthesize parentInspectorController;
- (void).cxx_destruct;
@property(readonly) id inspectedObject;
@property(readonly) NSArray *inspectedObjects;
@property(readonly) NSBundle *bundle;
- (id)initWithRepresentedObject:(id)arg1 parentInspectorController:(id)arg2;

@end

