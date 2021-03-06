//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage, UIView;

@protocol NELivePlayer <NSObject>
@property(nonatomic) _Bool shouldAutoplay;
@property(readonly, nonatomic) int loadState;
@property(readonly, nonatomic) int playbackState;
@property(readonly, nonatomic) _Bool isPreparedToPlay;
@property(readonly, nonatomic) double playableDuration;
@property(readonly, nonatomic) double duration;
@property(nonatomic) double currentPlaybackTime;
@property(readonly, nonatomic) UIView *view;
- (void)getAudioQueue:(struct NELPAudioQueue *)arg1;
- (void)setPlaybackTimeout:(long long)arg1;
- (void)setVolume:(float)arg1;
- (void)setPlaybackSpeed:(float)arg1;
- (void)isLogToFile:(_Bool)arg1;
- (NSString *)getSDKVersion;
- (void)getAudioInfo:(struct NELPAudioInfo *)arg1;
- (void)getVideoInfo:(struct NELPVideoInfo *)arg1;
- (UIImage *)getSnapshot;
- (void)setHardwareDecoder:(_Bool)arg1;
- (void)setMute:(_Bool)arg1;
- (void)setScalingMode:(int)arg1;
- (void)setPauseInBackground:(_Bool)arg1;
- (void)shutdown;
- (_Bool)isPlaying;
- (void)stop;
- (void)pause;
- (void)play;
- (void)prepareToPlay;
- (void)setBufferStrategy:(int)arg1;
@end

