/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol PBXFileOperationServerProtocol
- (void)saveFile:(bycopy id)arg1 forceSave:(BOOL)arg2;
- (BOOL)isFileEdited:(bycopy id)arg1;
- (BOOL)isFileOpen:(bycopy id)arg1;
- (void)revertFile:(bycopy id)arg1 activateIDE:(BOOL)arg2;
- (void)revertFileIfNeeded:(bycopy id)arg1 activateIDE:(BOOL)arg2;
- (void)editFile:(bycopy id)arg1 andDisplayLineRange:(struct _NSRange)arg2 activateIDE:(BOOL)arg3;
- (void)editFile:(bycopy id)arg1 andDisplayCharacterRange:(struct _NSRange)arg2 activateIDE:(BOOL)arg3;
@end
