//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface XAdInstance : NSObject
{
    NSMutableDictionary *mData;
    int _adPosition;
    int _adDuration;
    int _adType;
    int _adWidth;
    int _adHeigh;
    int _clickToUrlType;
    int _sdkId;
    NSString *_creativeAssetID;
    NSString *_creativeAssetURL;
    NSString *_creativeAssetType;
    NSString *_subCreativeAssetURL;
    NSMutableArray *_progressTrackings;
    NSMutableArray *_impressionTrackings;
    NSMutableArray *_completeTrackings;
    NSMutableArray *_clickTrackings;
    NSString *_clickToUrl;
    NSMutableArray *_fullScreenTrackings;
    NSMutableArray *_exitFullScreenTrackings;
    NSMutableArray *_pauseTrackings;
    NSString *_adTitle;
    NSString *_adText;
    NSString *_logoUrl;
    NSString *_adFrameUrl;
    NSString *_requestId;
}

@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *adFrameUrl; // @synthesize adFrameUrl=_adFrameUrl;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) NSString *adText; // @synthesize adText=_adText;
@property(retain, nonatomic) NSString *adTitle; // @synthesize adTitle=_adTitle;
@property(nonatomic) int sdkId; // @synthesize sdkId=_sdkId;
@property(nonatomic) int clickToUrlType; // @synthesize clickToUrlType=_clickToUrlType;
@property(nonatomic) int adHeigh; // @synthesize adHeigh=_adHeigh;
@property(nonatomic) int adWidth; // @synthesize adWidth=_adWidth;
@property(retain, nonatomic) NSMutableArray *pauseTrackings; // @synthesize pauseTrackings=_pauseTrackings;
@property(retain, nonatomic) NSMutableArray *exitFullScreenTrackings; // @synthesize exitFullScreenTrackings=_exitFullScreenTrackings;
@property(retain, nonatomic) NSMutableArray *fullScreenTrackings; // @synthesize fullScreenTrackings=_fullScreenTrackings;
@property(retain, nonatomic) NSString *clickToUrl; // @synthesize clickToUrl=_clickToUrl;
@property(retain, nonatomic) NSMutableArray *clickTrackings; // @synthesize clickTrackings=_clickTrackings;
@property(retain, nonatomic) NSMutableArray *completeTrackings; // @synthesize completeTrackings=_completeTrackings;
@property(retain, nonatomic) NSMutableArray *impressionTrackings; // @synthesize impressionTrackings=_impressionTrackings;
@property(retain, nonatomic) NSMutableArray *progressTrackings; // @synthesize progressTrackings=_progressTrackings;
@property(retain, nonatomic) NSString *subCreativeAssetURL; // @synthesize subCreativeAssetURL=_subCreativeAssetURL;
@property(retain, nonatomic) NSString *creativeAssetType; // @synthesize creativeAssetType=_creativeAssetType;
@property(retain, nonatomic) NSString *creativeAssetURL; // @synthesize creativeAssetURL=_creativeAssetURL;
@property(retain, nonatomic) NSString *creativeAssetID; // @synthesize creativeAssetID=_creativeAssetID;
@property(nonatomic) int adType; // @synthesize adType=_adType;
@property(nonatomic) int adDuration; // @synthesize adDuration=_adDuration;
@property(nonatomic) int adPosition; // @synthesize adPosition=_adPosition;
- (void).cxx_destruct;
- (void)destroy;
- (id)fetchTrackings:(id)arg1;
- (id)fetchEMTrackings:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (id)initWithXAdJsonObject:(id)arg1;

@end
