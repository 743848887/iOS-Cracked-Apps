//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALAssetsLibrary, PHImageRequestOptions;

@interface XYPHPhotoManager : NSObject
{
    ALAssetsLibrary *_assetsLibrary;
    PHImageRequestOptions *_thumbnailOptions;
}

+ (id)imageByRotatingImage:(id)arg1 fromImageOrientation:(long long)arg2;
+ (void)fetchCroppedImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchOriginalImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchThumbnail:(id)arg1 size:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)fetchAssetsGroups:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) PHImageRequestOptions *thumbnailOptions; // @synthesize thumbnailOptions=_thumbnailOptions;
@property(retain, nonatomic) ALAssetsLibrary *assetsLibrary; // @synthesize assetsLibrary=_assetsLibrary;
- (void).cxx_destruct;
- (id)sortAssetsGroups:(id)arg1 typesOrder:(id)arg2;
- (id)init;

@end
