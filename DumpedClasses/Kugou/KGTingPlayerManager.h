//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGCorePlayerManager.h"

#import "KGCorePlayerListenerProtocol.h"
#import "KGPlayControlProtocol.h"
#import "OCIStreamDataCallback.h"
#import "RemoteControl.h"

@class KGDLNAPlayerManager, KGPlayManager_Effect, KGPlayQueue, NSConditionLock, NSObject, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface KGTingPlayerManager : KGCorePlayerManager <RemoteControl, OCIStreamDataCallback, KGCorePlayerListenerProtocol, KGPlayControlProtocol>
{
    struct StreamBase *_curStream;
    struct IStreamDataToOc *_istreamDataCallBack;
    NSConditionLock *_streamLock;
    NSObject<OS_dispatch_queue> *_workQueue;
    struct KGCorePlayerListener *_listener;
    NSObject *_curUserData;
    _Bool _isInterruption;
    NSString *_ipodPath;
    double _innerTmpCurrentTime;
    double _innerTmpDuration;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    _Bool _willAutoPlay;
    _Bool _isRepeat;
    KGPlayQueue *_playQueue;
    KGDLNAPlayerManager *_dlnaPlayManager;
    KGPlayManager_Effect *_playManagerEffect;
    CDStruct_51d7d1dc _playerState;
}

+ (id)sharedTingPlayerManager;
@property(nonatomic) _Bool isRepeat; // @synthesize isRepeat=_isRepeat;
@property(readonly, nonatomic) CDStruct_51d7d1dc playerState; // @synthesize playerState=_playerState;
@property(retain, nonatomic) KGPlayManager_Effect *playManagerEffect; // @synthesize playManagerEffect=_playManagerEffect;
@property(retain, nonatomic) KGDLNAPlayerManager *dlnaPlayManager; // @synthesize dlnaPlayManager=_dlnaPlayManager;
@property(retain, nonatomic) KGPlayQueue *playQueue; // @synthesize playQueue=_playQueue;
@property(nonatomic) _Bool willAutoPlay; // @synthesize willAutoPlay=_willAutoPlay;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_destroy1;
- (void)destroy;
- (void)_destroy;
- (void)setAudioPipe:(void *)arg1;
- (void)setCurrentKuqunSong:(id)arg1;
- (id)currentKuqunSong;
- (void *)currentStream;
- (void)setIPodDecodeInfo;
- (void)postKuQunBackgroundMusicStateChangeNoti:(id)arg1;
- (void)postKuQunVoiceMessageStateChangeNoti:(id)arg1;
- (void)postKuQunTryListenStateChangeNoti:(id)arg1;
- (void)postStateChangeNoti:(id)arg1;
- (int)currentBitrate;
- (void *)audioParams;
- (void)PlayOrPause;
- (_Bool)isPlaying;
- (void)OnDataValid:(struct StreamBase *)arg1 offset:(int)arg2 size:(int)arg3;
- (double)streamCacheBufferLen;
- (id)getMediaInfoWithPath:(id)arg1;
- (void)setFadeInEnable:(_Bool)arg1;
- (void)setAudioSession;
- (void)setPlayQueueType:(int)arg1;
- (void)playSongWithIndex:(long long)arg1;
- (void)playPrevious:(_Bool)arg1;
- (void)playCurrent;
- (void)playNext:(_Bool)arg1;
- (long long)addSongs:(id)arg1 subPath:(id)arg2;
- (long long)playSongsLater:(id)arg1 subPath:(id)arg2;
- (long long)playLater:(id)arg1 subPath:(id)arg2;
- (void)PlaySongs:(id)arg1 playIndex:(long long)arg2 andPlayQueueType:(int)arg3 subPath:(id)arg4;
- (void)PlaySongs:(id)arg1 playIndex:(long long)arg2 subPath:(id)arg3;
- (void)askStop;
- (void)playerMessageChange:(unsigned long long)arg1 extOne:(int)arg2 extTwo:(int)arg3;
- (_Bool)isOnLine;
- (double)position;
- (double)duration;
- (void)seekTo:(double)arg1;
- (void)stop;
- (void)pause;
- (void)start;
- (void)setDataSourceWithSongInfo:(id)arg1 playType:(long long)arg2;
- (void)setDataSource:(void *)arg1 userData:(id)arg2 playType:(long long)arg3 audioType:(int)arg4 start:(double)arg5 end:(double)arg6 stopPlayersExceptMember:(id)arg7;
- (void)setDataSource:(void *)arg1 userData:(id)arg2 playType:(long long)arg3 start:(double)arg4 end:(double)arg5 stopPlayersExceptMember:(id)arg6;
- (void)setDataSource:(void *)arg1 userData:(id)arg2 playType:(long long)arg3 start:(double)arg4 end:(double)arg5;
- (void)setDataSource:(void *)arg1 userData:(id)arg2 playType:(long long)arg3 stopPlayersExceptMember:(id)arg4;
- (void)setDataSource:(void *)arg1 userData:(id)arg2 playType:(long long)arg3;
- (void)setDataSourceWithPath:(id)arg1 userData:(id)arg2 playType:(long long)arg3 audioType:(int)arg4 start:(double)arg5 end:(double)arg6;
- (void)setDataSourceWithPath:(id)arg1 userData:(id)arg2 playType:(long long)arg3 start:(double)arg4 end:(double)arg5;
- (void)setDataSourceWithPath:(id)arg1 userData:(id)arg2 playType:(long long)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

