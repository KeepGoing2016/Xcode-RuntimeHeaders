/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTAnnotationProvider.h"

#import "DVTMessageBubbleAnnotationDelegate-Protocol.h"

@class IDEAnnotationContext;

@interface IDEIssueAnnotationProvider : DVTAnnotationProvider <DVTMessageBubbleAnnotationDelegate>
{
    IDEAnnotationContext *_context;
    id <DVTCancellable> _fileIssueObservingToken;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
@property(retain) IDEAnnotationContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)providerWillUninstall;
- (void)_rebuildAnnotations;
- (id)initWithContext:(id)arg1;
- (id)init;
- (void)didDeleteOrReplaceParagraphForAnnotation:(id)arg1;
- (void)_revealInIssueNavigator:(id)arg1;
- (double)sidebarMarkerOpacityForAnnotation:(id)arg1;
- (id)contextMenuItemsForAnnotation:(id)arg1 inTextSidebarView:(id)arg2;
- (BOOL)shouldMoveCursorForAnnotation:(id)arg1;
- (void)didClickAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (void)didClickMessageBubbleForAnnotation:(id)arg1 onIcon:(BOOL)arg2 inTextView:(id)arg3 event:(id)arg4;

@end

