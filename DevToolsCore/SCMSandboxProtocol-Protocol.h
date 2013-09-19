/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol SCMSandboxProtocol
- (id)requestClearTagsForPaths:(id)arg1;
- (id)requestEditForPaths:(id)arg1;
- (id)requestResolveForPaths:(id)arg1;
- (id)requestRevertForPaths:(id)arg1;
- (id)requestDeleteForPaths:(id)arg1;
- (id)requestCommitForPaths:(id)arg1 withMessage:(id)arg2;
- (id)requestAddForPaths:(id)arg1;
- (id)requestUpdateForPaths:(id)arg1 revision:(id)arg2;
- (id)requestStatusForPath:(id)arg1 getAll:(BOOL)arg2 revision:(id)arg3;
- (id)requestCopyFromPaths:(id)arg1 toPaths:(id)arg2 revision:(id)arg3 withMessage:(id)arg4;
- (id)requestMoveFromPaths:(id)arg1 toPaths:(id)arg2 withMessage:(id)arg3;
- (id)requestDiffForPath:(id)arg1 revision:(id)arg2 secondRevision:(id)arg3;
- (id)requestBlameForPath:(id)arg1 revision:(id)arg2;
- (id)requestLogForPath:(id)arg1 getAll:(BOOL)arg2 revision:(id)arg3 secondRevision:(id)arg4;
- (id)requestCatForPath:(id)arg1 revision:(id)arg2;
- (void)disconnect;
- (id)updateAll;
- (id)refreshAll;
- (id)modelPathForAbsolutePath:(id)arg1;
- (id)path;
- (void)setDisconnected:(BOOL)arg1;
- (BOOL)disconnected;
- (void)setRoot:(id)arg1;
- (id)root;
@end

