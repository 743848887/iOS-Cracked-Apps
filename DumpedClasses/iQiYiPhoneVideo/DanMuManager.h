//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DanMuCommonObjectDelegate-Protocol.h"

@class DanMuModel, DanMuView, DanmuInputView, NSString, NSTimer, QYDanmuInitDataModel, QYDanmuPlayShareModel, UIButton;
@protocol DanMuManagerAVManagerDelegate, DanMuManagerDelegate;

@interface DanMuManager : NSObject <DanMuCommonObjectDelegate>
{
    _Bool _ishaveDanmu;
    _Bool _isShowDanmu;
    _Bool _isFakeWrite;
    _Bool _isShowDanmuSendBtn;
    _Bool _isSplitScreen;
    _Bool _isPlayerPlayingBeforeShowKeyBoard;
    _Bool _isMaskColor;
    _Bool _isMaskPicture;
    _Bool _isMaskPartly;
    int _curMode;
    float _opacity;
    int _currentIndex;
    float _danmuDensity;
    id <DanMuManagerDelegate> _delegate;
    id <DanMuManagerAVManagerDelegate> _avDelegate;
    NSString *_bullet_sendicon;
    NSTimer *_danMuTimer;
    DanMuView *_danMuView;
    DanmuInputView *_danmuInputView;
    UIButton *_resignButton;
    long long _danmuLine;
    long long _danmuSpd;
    long long _danmuFont;
    DanMuModel *_danmuModel;
    QYDanmuPlayShareModel *_playShareData;
    long long _currentTime;
    double _sendTimeFlag;
    unsigned long long _callType;
    QYDanmuInitDataModel *_settingModel;
    long long _danmuOpenStateTime;
    long long _danmuPlayContentStateTime;
    NSString *_regularRule;
    NSString *_imgResoursePath;
    struct CGRect _danmuRect;
}

@property(retain, nonatomic) NSString *imgResoursePath; // @synthesize imgResoursePath=_imgResoursePath;
@property(retain, nonatomic) NSString *regularRule; // @synthesize regularRule=_regularRule;
@property(nonatomic) long long danmuPlayContentStateTime; // @synthesize danmuPlayContentStateTime=_danmuPlayContentStateTime;
@property(nonatomic) long long danmuOpenStateTime; // @synthesize danmuOpenStateTime=_danmuOpenStateTime;
@property(nonatomic) _Bool isMaskPartly; // @synthesize isMaskPartly=_isMaskPartly;
@property(nonatomic) _Bool isMaskPicture; // @synthesize isMaskPicture=_isMaskPicture;
@property(nonatomic) _Bool isMaskColor; // @synthesize isMaskColor=_isMaskColor;
@property(nonatomic) struct CGRect danmuRect; // @synthesize danmuRect=_danmuRect;
@property(retain, nonatomic) QYDanmuInitDataModel *settingModel; // @synthesize settingModel=_settingModel;
@property(nonatomic) unsigned long long callType; // @synthesize callType=_callType;
@property(nonatomic) double sendTimeFlag; // @synthesize sendTimeFlag=_sendTimeFlag;
@property(nonatomic) long long currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) QYDanmuPlayShareModel *playShareData; // @synthesize playShareData=_playShareData;
@property(nonatomic) _Bool isPlayerPlayingBeforeShowKeyBoard; // @synthesize isPlayerPlayingBeforeShowKeyBoard=_isPlayerPlayingBeforeShowKeyBoard;
@property(retain, nonatomic) DanMuModel *danmuModel; // @synthesize danmuModel=_danmuModel;
@property(nonatomic) float danmuDensity; // @synthesize danmuDensity=_danmuDensity;
@property(nonatomic) long long danmuFont; // @synthesize danmuFont=_danmuFont;
@property(nonatomic) long long danmuSpd; // @synthesize danmuSpd=_danmuSpd;
@property(nonatomic) int currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(nonatomic) long long danmuLine; // @synthesize danmuLine=_danmuLine;
@property(retain, nonatomic) UIButton *resignButton; // @synthesize resignButton=_resignButton;
@property(retain, nonatomic) DanmuInputView *danmuInputView; // @synthesize danmuInputView=_danmuInputView;
@property(retain, nonatomic) DanMuView *danMuView; // @synthesize danMuView=_danMuView;
@property(retain, nonatomic) NSTimer *danMuTimer; // @synthesize danMuTimer=_danMuTimer;
@property(nonatomic) int curMode; // @synthesize curMode=_curMode;
@property(retain, nonatomic) NSString *bullet_sendicon; // @synthesize bullet_sendicon=_bullet_sendicon;
@property(nonatomic) __weak id <DanMuManagerAVManagerDelegate> avDelegate; // @synthesize avDelegate=_avDelegate;
@property(nonatomic) __weak id <DanMuManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isSplitScreen; // @synthesize isSplitScreen=_isSplitScreen;
@property(nonatomic) _Bool isShowDanmuSendBtn; // @synthesize isShowDanmuSendBtn=_isShowDanmuSendBtn;
@property(nonatomic) _Bool isFakeWrite; // @synthesize isFakeWrite=_isFakeWrite;
@property(nonatomic) _Bool isShowDanmu; // @synthesize isShowDanmu=_isShowDanmu;
@property(nonatomic) _Bool ishaveDanmu; // @synthesize ishaveDanmu=_ishaveDanmu;
- (void).cxx_destruct;
- (id)getPlayContentViewForCommonObject;
- (id)getPlayerDataShareData;
- (void)setDanmuSwitchL;
- (void)avToPause;
- (void)avToPlay;
- (_Bool)isPlaying;
- (_Bool)isStartActivity;
- (_Bool)isAirPlayState;
- (_Bool)isLockScreenForDanMu;
- (void)handleDanmuLabelClickWithType:(_Bool)arg1 andData:(id)arg2;
- (int)getCurrentScreenMode;
- (void)internalToAddButtonStatistics:(unsigned long long)arg1 andValue:(id)arg2;
- (void)internalToAddButtonStatistics:(unsigned long long)arg1;
- (id)getPlayContentView;
- (void)DMControlViewAddSubview:(id)arg1;
- (void)DMRemoveDanMuSendBtn;
- (void)DMSetDanmuButtonSelect:(_Bool)arg1;
- (void)DMShowDanMuSendBtn;
- (void)setDanMuButtonShow:(_Bool)arg1;
- (void)_showDanMuLikeAnimations;
- (void)resetUserSettingInitializtion;
- (void)_startDanMuWithOn;
- (void)_switchDanMuOnOff:(_Bool)arg1;
- (void)updateDanMuSettingWith:(unsigned long long)arg1 andValue:(int)arg2;
- (void)setEmotionSwitch:(_Bool)arg1;
- (void)seekToTimeToUpdateDanMu;
- (void)clearCurrentDanMuIsALL:(_Bool)arg1;
- (void)resumeDanmuViewAfterPushVideo;
- (void)switchDanMuShow:(_Bool)arg1;
- (void)showFakeWriteOutsideAddDanmuData:(id)arg1;
- (void)stopDanMu;
- (void)resumeDanMu;
- (void)pauseDanMu;
- (void)startDanMu;
- (void)updateDanMuState:(_Bool)arg1;
- (void)createOrUpdateDanmuView;
- (void)clickSingleDanMuEventWithType:(unsigned long long)arg1;
- (void)startDanMuWhenPlayContent;
- (void)sendVvLogWithString:(id)arg1;
- (void)dealWithDanMuData:(id)arg1;
- (void)updateDanmuDataWithTime:(double)arg1;
- (void)setDanmuBtnStatus;
- (void)changeForScreenMode:(int)arg1;
- (void)setDanMuDataList:(id)arg1;
- (void)setValueForSettingViewInit;
- (void)continuingDrawAndShowDanMu;
- (void)setDanmuContentViewFrame:(struct CGRect)arg1 aboveSuperView:(id)arg2;
- (void)setDanMuConfigurationWithData:(id)arg1;
- (void)comeActive:(id)arg1;
- (void)comeHome:(id)arg1;
- (id)initWithFromCallType:(unsigned long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

