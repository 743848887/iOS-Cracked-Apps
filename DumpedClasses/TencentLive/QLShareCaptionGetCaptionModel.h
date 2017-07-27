//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLDataRequestModel.h"

@class NSArray, NSString;

@interface QLShareCaptionGetCaptionModel : QLDataRequestModel
{
    NSString *_captionKey;
    NSString *_vid;
    NSString *_cid;
    double _currentTime;
    double _duration;
    NSArray *_captionsArray;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *captionsArray; // @synthesize captionsArray=_captionsArray;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *captionKey; // @synthesize captionKey=_captionKey;
- (void).cxx_destruct;
- (void)requestDidFinishLoad:(id)arg1;
- (_Bool)processResponce:(id)arg1 isCache:(_Bool)arg2;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (void)requestDidRetryRequest:(id)arg1;
- (void)cancelDataRequest;
- (void)dealloc;

@end
