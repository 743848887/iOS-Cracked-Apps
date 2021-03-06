//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class FBMultiPickerPhotoAttachment, FBMultiPickerVideoAttachment;

@interface FBCreativePlatformSharedAssetAttachment : NSObject <NSCopying>
{
    unsigned long long _subtype;
    FBMultiPickerPhotoAttachment *_photoAttachment_attachment;
    FBMultiPickerVideoAttachment *_videoAttachment_attachment;
}

+ (id)videoAttachmentWithAttachment:(id)arg1;
+ (id)photoAttachmentWithAttachment:(id)arg1;
- (void).cxx_destruct;
- (void)matchPhotoAttachment:(CDUnknownBlockType)arg1 videoAttachment:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

