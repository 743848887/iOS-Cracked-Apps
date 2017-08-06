//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVBaseViewController.h"

#import "KGCSCCProtocol.h"

@class KGKTVManager, KTVKrcPitchModel, KTVTuneViewController, KTV_SongInfo, KtvKrcFragmentView, KtvKrcModel, KtvToneConfigureSetting, NSString, NSTimer, UIImage;

@interface KtvKrcFragmentSelectVC : KTVBaseViewController <KGCSCCProtocol>
{
    _Bool _isSingltonRecored;
    _Bool _isFromFragmentRecord;
    float _recordVolumeRate;
    float _playVolumeRate;
    CDUnknownBlockType _selectedBlock;
    CDUnknownBlockType _singleSelectedBlock;
    KtvKrcModel *_krcModel;
    long long _krcAdjustTime;
    UIImage *_backGroundImage;
    NSString *_krcIdStr;
    long long _currentTime;
    NSString *_filePath;
    long long _krcFragmentStartTime;
    long long _krcFragmentEndTime;
    KtvKrcModel *_krcFragmentKrcModel;
    long long _tempFilePathEndTime;
    long long _totalPalyDuration;
    KTVKrcPitchModel *_pitchModel;
    KTV_SongInfo *_songInfo;
    KTVTuneViewController *_tuneVC;
    KtvToneConfigureSetting *_toneSetting;
    KtvKrcFragmentView *_fragmentView;
    KGKTVManager *_player;
    NSTimer *_timer;
    long long _beginPlayTime;
    long long _endPlayTime;
    struct CGRect _viewFrame;
}

@property(nonatomic) long long endPlayTime; // @synthesize endPlayTime=_endPlayTime;
@property(nonatomic) long long beginPlayTime; // @synthesize beginPlayTime=_beginPlayTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) KGKTVManager *player; // @synthesize player=_player;
@property(retain, nonatomic) KtvKrcFragmentView *fragmentView; // @synthesize fragmentView=_fragmentView;
@property(nonatomic) struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
@property(nonatomic) float playVolumeRate; // @synthesize playVolumeRate=_playVolumeRate;
@property(nonatomic) float recordVolumeRate; // @synthesize recordVolumeRate=_recordVolumeRate;
@property(retain, nonatomic) KtvToneConfigureSetting *toneSetting; // @synthesize toneSetting=_toneSetting;
@property(retain, nonatomic) KTVTuneViewController *tuneVC; // @synthesize tuneVC=_tuneVC;
@property(retain, nonatomic) KTV_SongInfo *songInfo; // @synthesize songInfo=_songInfo;
@property(retain, nonatomic) KTVKrcPitchModel *pitchModel; // @synthesize pitchModel=_pitchModel;
@property(nonatomic) long long totalPalyDuration; // @synthesize totalPalyDuration=_totalPalyDuration;
@property(nonatomic) long long tempFilePathEndTime; // @synthesize tempFilePathEndTime=_tempFilePathEndTime;
@property(retain, nonatomic) KtvKrcModel *krcFragmentKrcModel; // @synthesize krcFragmentKrcModel=_krcFragmentKrcModel;
@property(nonatomic) long long krcFragmentEndTime; // @synthesize krcFragmentEndTime=_krcFragmentEndTime;
@property(nonatomic) long long krcFragmentStartTime; // @synthesize krcFragmentStartTime=_krcFragmentStartTime;
@property(nonatomic) _Bool isFromFragmentRecord; // @synthesize isFromFragmentRecord=_isFromFragmentRecord;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) long long currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) _Bool isSingltonRecored; // @synthesize isSingltonRecored=_isSingltonRecored;
@property(retain, nonatomic) NSString *krcIdStr; // @synthesize krcIdStr=_krcIdStr;
@property(retain, nonatomic) UIImage *backGroundImage; // @synthesize backGroundImage=_backGroundImage;
@property(nonatomic) long long krcAdjustTime; // @synthesize krcAdjustTime=_krcAdjustTime;
@property(retain, nonatomic) KtvKrcModel *krcModel; // @synthesize krcModel=_krcModel;
@property(copy, nonatomic) CDUnknownBlockType singleSelectedBlock; // @synthesize singleSelectedBlock=_singleSelectedBlock;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (id)dataTojsonString:(id)arg1;
- (void)sendStatisticsInfoForKrcId:(id)arg1 startTime:(long long)arg2 endTime:(long long)arg3;
- (void)handleCSCCEvent:(id)arg1 eventType:(int)arg2;
- (void)loadSetting;
- (void)handleforLivePlayer:(long long)arg1 ext1:(int)arg2 ext2:(int)arg3;
- (void)stop;
- (void)play;
- (void)update;
- (void)KGUsingControllerState:(int)arg1;
- (void)viewDidLoad;
- (long long)showPlayBarWay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
