//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "QiXiuPlayerControllerDelegate-Protocol.h"

@class NSString, QiXiuPlayerController, UIImageView;
@protocol QXPlayerControllerDelegate;

@interface QXPlayerController : UIViewController <QiXiuPlayerControllerDelegate>
{
    _Bool _isShowXiuPlayer;
    _Bool _isStartPlay;
    _Bool _isPlayError;
    _Bool _isLiveStream;
    int _renderEffectType;
    QiXiuPlayerController *_qxPlayer;
    id <QXPlayerControllerDelegate> _delegate;
    long long _playerEventState;
    UIImageView *_playLoadingView;
    UIImageView *_playLoadingIcon;
    UIImageView *_playWaittingView;
    QiXiuPlayerController *_qxOtherPlayer;
    NSString *_playUrl;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isLiveStream; // @synthesize isLiveStream=_isLiveStream;
@property(nonatomic) int renderEffectType; // @synthesize renderEffectType=_renderEffectType;
@property(copy, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(nonatomic) _Bool isPlayError; // @synthesize isPlayError=_isPlayError;
@property(nonatomic) _Bool isStartPlay; // @synthesize isStartPlay=_isStartPlay;
@property(retain, nonatomic) QiXiuPlayerController *qxOtherPlayer; // @synthesize qxOtherPlayer=_qxOtherPlayer;
@property(retain, nonatomic) UIImageView *playWaittingView; // @synthesize playWaittingView=_playWaittingView;
@property(retain, nonatomic) UIImageView *playLoadingIcon; // @synthesize playLoadingIcon=_playLoadingIcon;
@property(retain, nonatomic) UIImageView *playLoadingView; // @synthesize playLoadingView=_playLoadingView;
@property(nonatomic) long long playerEventState; // @synthesize playerEventState=_playerEventState;
@property(nonatomic) _Bool isShowXiuPlayer; // @synthesize isShowXiuPlayer=_isShowXiuPlayer;
@property(nonatomic) __weak id <QXPlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QiXiuPlayerController *qxPlayer; // @synthesize qxPlayer=_qxPlayer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopWaitting;
- (void)startWaitting;
- (void)rotate360:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)switchBitStream:(int)arg1;
- (void)setVolume:(int)arg1;
- (void)setMute:(_Bool)arg1;
- (void)setPlayerGetVoice;
- (void)setOtherPlayerBuffer:(int)arg1;
- (void)setPlayerBuffer:(int)arg1;
- (void)changePlayerRenderEffectBy:(int)arg1;
- (_Bool)isWaiting;
- (void)checkOverrideOutputPort;
- (void)audioRouteChangeListenerCallback:(id)arg1;
- (_Bool)judgeCurrentPreferOutputChannal;
- (void)onContentStartPlay:(id)arg1;
- (void)player:(id)arg1 onGotAudioData:(int)arg2 data:(void *)arg3 length:(int)arg4 pts:(double)arg5 video_pts:(double)arg6;
- (void)onLiveNetBad:(id)arg1;
- (void)endWaiting:(id)arg1;
- (void)startWaiting:(id)arg1;
- (void)stopActivity:(id)arg1;
- (void)startActivity:(id)arg1;
- (void)stopLoading:(id)arg1;
- (void)startLoading:(id)arg1;
- (void)playerNetworkChanged:(id)arg1;
- (void)player:(id)arg1 onPlayStuckWithParam:(long long)arg2;
- (void)player:(id)arg1 onPlayerError:(id)arg2;
- (void)playbackFinshed:(id)arg1;
- (void)playbackTimeChanged:(id)arg1;
- (void)closePlayer;
- (void)stopPlayer;
- (double)duration;
- (double)currentPlaybackTime;
- (void)seekToTime:(double)arg1;
- (void)play;
- (void)pause;
- (void)openPlayerByItem:(id)arg1;
- (void)changePlayerByUrl:(id)arg1;
- (void)openPlayerByUrl:(id)arg1;
- (void)setPlayerFrame:(struct CGRect)arg1;
- (void)createPlayer;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

