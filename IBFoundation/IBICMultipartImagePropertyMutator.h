/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IBFoundation/IBICCatalogMutator.h>

@class IBICMultipartImage, NSData, NSString;

@interface IBICMultipartImagePropertyMutator : IBICCatalogMutator
{
    NSString *_keyPath;
    id <NSCopying> _value;
    id <NSCopying> _originalValue;
    IBICMultipartImage *_image;
    NSData *_pendingManifestData;
    NSString *_pendingManifestPath;
}

- (void).cxx_destruct;
- (id)inverseMutator;
- (id)mutationDescription;
- (void)applyToDiskWithCompletionHandler:(id)arg1;
- (void)applyToModel;
- (id)initWithImage:(id)arg1 andValue:(id)arg2 forKeyPath:(id)arg3;

@end

