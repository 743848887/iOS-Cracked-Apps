//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSString;

@interface FXSPhotoInfo : FXBaseJSONModel
{
    NSString *_url;
    long long _photoId;
    NSString *_photoName;
}

@property(retain, nonatomic) NSString *photoName; // @synthesize photoName=_photoName;
@property(nonatomic) long long photoId; // @synthesize photoId=_photoId;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end
