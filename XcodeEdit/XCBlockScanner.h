/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <XcodeEdit/XCSourceScanner.h>

@class NSString;

@interface XCBlockScanner : XCSourceScanner
{
    NSString *startString;
    NSString *endString;
    NSString *altEndString;
    unsigned short startChar;
    unsigned short endChar;
    unsigned short altEndChar;
    unsigned short escapeChar;
    unsigned int recursive:1;
    unsigned int dontIncludeEnd:1;
    unsigned int parseEndBeforeIncludedRules:1;
    unsigned int caseSensitive:1;
    unsigned int isVolatile:1;
    long long startToken;
    long long endToken;
    long long altEndToken;
    long long altToken;
}

- (id)parse:(id)arg1 withContext:(id)arg2 initialToken:(long long)arg3 inputStream:(id)arg4 range:(struct _NSRange)arg5 dirtyRange:(struct _NSRange *)arg6;
- (id)parseRecursive:(id)arg1 withContext:(id)arg2 inputStream:(id)arg3 range:(struct _NSRange)arg4 dirtyRange:(struct _NSRange *)arg5;
- (int)actionForEndToken:(id)arg1 inContext:(id)arg2 inputStream:(id)arg3;
- (long long)nextToken:(id)arg1 withItem:(id)arg2 inTree:(id)arg3 withContext:(id)arg4 initialToken:(long long)arg5 insideBlock:(BOOL)arg6 range:(struct _NSRange)arg7 dirtyRange:(struct _NSRange *)arg8 reusedToken:(char *)arg9;
- (BOOL)predictsRule:(long long)arg1 inputStream:(id)arg2;
- (id)initWithPropertyListDictionary:(id)arg1 language:(long long)arg2;

@end

