/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTFilePath, NSString;

@interface IDECodeModule : NSObject
{
    int _debugSymbolsLoadState;
    DVTFilePath *_filePath;
    NSString *_name;
    NSString *_frameworkNameIncludingExtension;
    NSString *_identifier;
    unsigned long long _address;
    NSString *_displayAddress;
    NSString *_path;
}

+ (id)frameworkNameIncludingExtensionFromPath:(id)arg1;
@property int debugSymbolsLoadState; // @synthesize debugSymbolsLoadState=_debugSymbolsLoadState;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSString *displayAddress; // @synthesize displayAddress=_displayAddress;
@property unsigned long long address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *frameworkNameIncludingExtension; // @synthesize frameworkNameIncludingExtension=_frameworkNameIncludingExtension;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(retain) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 pathString:(id)arg2;

@end
