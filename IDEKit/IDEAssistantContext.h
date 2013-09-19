/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class IDEAssistantWindowController, IDEWorkspace, IDEWorkspaceTabController, NSWindow;

@interface IDEAssistantContext : NSObject <NSCopying>
{
    IDEWorkspaceTabController *_workspaceTabController;
    IDEAssistantWindowController *_assistantWindowController;
    NSWindow *_workspaceWindow;
}

@property(retain, nonatomic) NSWindow *workspaceWindow; // @synthesize workspaceWindow=_workspaceWindow;
@property(retain) IDEAssistantWindowController *assistantWindowController; // @synthesize assistantWindowController=_assistantWindowController;
@property(retain) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) IDEWorkspace *workspace;

@end

