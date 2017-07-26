//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTFlightRootViewController.h"

#import "CAAnimationDelegate.h"
#import "CTFlightChildBabyCellDelegate.h"
#import "CTFlightCityWidgetDelegate.h"
#import "CTFlightFullScreenMaskViewDelegate.h"
#import "CTFlightMianActivityViewDelegate.h"
#import "CTFlightSearchAddTripDelegate.h"
#import "CTFlightSearchClassCellDelegate.h"
#import "CTFlightSearchDoubleCellDelegate.h"
#import "CTFlightSearchFooterViewDelegate.h"
#import "CTFlightSearchMultiCellDelegate.h"
#import "CTInterFlightGoListFilterClassChangeDelegate.h"
#import "CTInterFlightMultiListFilterClassChangeDelegate.h"
#import "CTLoginWidgetDelegate.h"
#import "CTNetErrorDelegate.h"
#import "FlightPassengerToolBarDeleagte.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTFlightCustomToolBar, CTFlightEntranceButton, CTFlightFullScreenMaskView, CTFlightInquireCacheBean, CTFlightMianActivityView, CTFlightPassengerPicker, CTFlightPickerLabel, CTFlightPublicNoticeManager, CTFlightSearchClassNewCell, CTFlightSearchFooterView, CTVectorButton, FXBlurView, NSDate, NSLayoutConstraint, NSString, UIButton, UIImageView, UIPickerView, UIScrollView, UITableView, UIView;

@interface CTInlandAndInternationalFlightSearchViewController : CTFlightRootViewController <CTLoginWidgetDelegate, UITableViewDataSource, UITableViewDelegate, FlightPassengerToolBarDeleagte, CTNetErrorDelegate, CTFlightCityWidgetDelegate, CTInterFlightGoListFilterClassChangeDelegate, CTFlightSearchClassCellDelegate, CTFlightSearchDoubleCellDelegate, CTFlightSearchMultiCellDelegate, CTFlightSearchAddTripDelegate, CTInterFlightMultiListFilterClassChangeDelegate, CTFlightFullScreenMaskViewDelegate, CTFlightMianActivityViewDelegate, CTFlightSearchFooterViewDelegate, CTFlightChildBabyCellDelegate, CAAnimationDelegate>
{
    _Bool needResetCRN;
    _Bool isUserManualSelectDate;
    long long tableCellRegister;
    long long addRowIndex;
    long long classRowIndex;
    _Bool isInterCombine;
    _Bool bfirstEnter;
    unsigned long long viewStatus;
    _Bool isSwitchTrip;
    _Bool needResetContentOffset;
    double searchBtnTop;
    double searchBtnBottom;
    double searchBtnHeight;
    double searchBtnWidth;
    double bottomBarHeight;
    _Bool checkInBtnClicked;
    _Bool boardBtnClicked;
    _Bool _showNavigationBarWhenDisappear;
    _Bool _isShow;
    _Bool _haveNotes;
    _Bool _isNeedSendIncrease;
    _Bool _bubbleFirstOccur;
    _Bool _isShowedPublicNotice;
    _Bool _isSearchPage;
    _Bool _isNeedSenderPrefer;
    _Bool _timeOutFlag;
    int _enterType;
    int _lastTripType;
    int _interPassengerTypeIndex;
    int _senderLoveType;
    id _delegateVC;
    CTFlightInquireCacheBean *_inquireCache;
    NSString *_destDCityName;
    NSString *_destACityName;
    NSString *_messageToken;
    CTFlightSearchClassNewCell *_searchClassCell;
    CTFlightMianActivityView *_flightMianActivityView;
    CTFlightSearchFooterView *_mTableFooterView;
    CTVectorButton *_backButton;
    UIView *_tableHeaderView;
    UIView *_topBar;
    UIView *_topBarBGView;
    UIButton *_topSingleButton;
    UIButton *_topDoubleButton;
    UIButton *_topMultiButton;
    UIView *_fioView;
    FXBlurView *_blurView;
    UIView *_blurBGView;
    UIImageView *_wragView;
    UIButton *_blurSingleButton;
    UIButton *_blurDoubleButton;
    UIButton *_blurMultiButton;
    UIImageView *_defaultFIOView;
    UIView *_rightIconView;
    UIImageView *_grayCircleView;
    UIView *_backBgView;
    UIView *_interNoticeView;
    UIButton *_interNoticeButton;
    NSLayoutConstraint *_noticeArrowToLeft;
    UIScrollView *_flightSearchScrollView;
    UIView *_preferenceTipView;
    UIButton *_preferenceTipButton;
    UIPickerView *_flightClassPickerView;
    CTFlightPassengerPicker *_passengerPicker;
    UIPickerView *_passengerTypePickerView;
    CTFlightPickerLabel *_passengerTypePickerLabel;
    UIImageView *_flightArrow;
    CTFlightCustomToolBar *_flightClassToolbar;
    UIView *_viewMultiTips;
    NSString *_uuid;
    CTFlightPublicNoticeManager *_publicNoticeMgr;
    UIImageView *_flightTipsBg;
    NSString *_tipsToken;
    UIView *_useCarBubbleView;
    NSString *_bubbleLifeCycle;
    UIImageView *_bottomBarImgView;
    CTFlightEntranceButton *_flightBoardButton;
    CTFlightEntranceButton *_checkInButton;
    CTFlightEntranceButton *_lowPriceButton;
    CTFlightEntranceButton *_flightAssistantButton;
    CTFlightEntranceButton *_flightMyOrderButton;
    CTFlightPickerLabel *_flightClassPickerLabel;
    CTFlightFullScreenMaskView *_coverMaskView;
    UIScrollView *_flightTripScrollView;
    UITableView *_mTableView;
    UIImageView *_mTableViewMirrorImageView;
    long long _flightClassIndex;
    NSDate *_targetDate;
}

@property(retain, nonatomic) NSDate *targetDate; // @synthesize targetDate=_targetDate;
@property(nonatomic) _Bool timeOutFlag; // @synthesize timeOutFlag=_timeOutFlag;
@property(nonatomic) int senderLoveType; // @synthesize senderLoveType=_senderLoveType;
@property(nonatomic) _Bool isNeedSenderPrefer; // @synthesize isNeedSenderPrefer=_isNeedSenderPrefer;
@property(nonatomic) int interPassengerTypeIndex; // @synthesize interPassengerTypeIndex=_interPassengerTypeIndex;
@property(nonatomic) _Bool isSearchPage; // @synthesize isSearchPage=_isSearchPage;
@property(nonatomic) long long flightClassIndex; // @synthesize flightClassIndex=_flightClassIndex;
@property(retain, nonatomic) UIImageView *mTableViewMirrorImageView; // @synthesize mTableViewMirrorImageView=_mTableViewMirrorImageView;
@property(retain, nonatomic) UITableView *mTableView; // @synthesize mTableView=_mTableView;
@property(retain, nonatomic) UIScrollView *flightTripScrollView; // @synthesize flightTripScrollView=_flightTripScrollView;
@property(nonatomic) int lastTripType; // @synthesize lastTripType=_lastTripType;
@property(retain, nonatomic) CTFlightFullScreenMaskView *coverMaskView; // @synthesize coverMaskView=_coverMaskView;
@property(retain, nonatomic) CTFlightPickerLabel *flightClassPickerLabel; // @synthesize flightClassPickerLabel=_flightClassPickerLabel;
@property(nonatomic) _Bool isShowedPublicNotice; // @synthesize isShowedPublicNotice=_isShowedPublicNotice;
@property(retain, nonatomic) CTFlightEntranceButton *flightMyOrderButton; // @synthesize flightMyOrderButton=_flightMyOrderButton;
@property(retain, nonatomic) CTFlightEntranceButton *flightAssistantButton; // @synthesize flightAssistantButton=_flightAssistantButton;
@property(retain, nonatomic) CTFlightEntranceButton *lowPriceButton; // @synthesize lowPriceButton=_lowPriceButton;
@property(retain, nonatomic) CTFlightEntranceButton *checkInButton; // @synthesize checkInButton=_checkInButton;
@property(retain, nonatomic) CTFlightEntranceButton *flightBoardButton; // @synthesize flightBoardButton=_flightBoardButton;
@property(nonatomic) __weak UIImageView *bottomBarImgView; // @synthesize bottomBarImgView=_bottomBarImgView;
@property(nonatomic) _Bool bubbleFirstOccur; // @synthesize bubbleFirstOccur=_bubbleFirstOccur;
@property(retain, nonatomic) NSString *bubbleLifeCycle; // @synthesize bubbleLifeCycle=_bubbleLifeCycle;
@property(retain, nonatomic) UIView *useCarBubbleView; // @synthesize useCarBubbleView=_useCarBubbleView;
@property(retain, nonatomic) NSString *tipsToken; // @synthesize tipsToken=_tipsToken;
@property(retain, nonatomic) UIImageView *flightTipsBg; // @synthesize flightTipsBg=_flightTipsBg;
@property(retain, nonatomic) CTFlightPublicNoticeManager *publicNoticeMgr; // @synthesize publicNoticeMgr=_publicNoticeMgr;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) _Bool isNeedSendIncrease; // @synthesize isNeedSendIncrease=_isNeedSendIncrease;
@property(retain, nonatomic) UIView *viewMultiTips; // @synthesize viewMultiTips=_viewMultiTips;
@property(retain, nonatomic) CTFlightCustomToolBar *flightClassToolbar; // @synthesize flightClassToolbar=_flightClassToolbar;
@property(retain, nonatomic) UIImageView *flightArrow; // @synthesize flightArrow=_flightArrow;
@property(retain, nonatomic) CTFlightPickerLabel *passengerTypePickerLabel; // @synthesize passengerTypePickerLabel=_passengerTypePickerLabel;
@property(retain, nonatomic) UIPickerView *passengerTypePickerView; // @synthesize passengerTypePickerView=_passengerTypePickerView;
@property(retain, nonatomic) CTFlightPassengerPicker *passengerPicker; // @synthesize passengerPicker=_passengerPicker;
@property(retain, nonatomic) UIPickerView *flightClassPickerView; // @synthesize flightClassPickerView=_flightClassPickerView;
@property(retain, nonatomic) UIButton *preferenceTipButton; // @synthesize preferenceTipButton=_preferenceTipButton;
@property(retain, nonatomic) UIView *preferenceTipView; // @synthesize preferenceTipView=_preferenceTipView;
@property(retain, nonatomic) UIScrollView *flightSearchScrollView; // @synthesize flightSearchScrollView=_flightSearchScrollView;
@property(nonatomic) __weak NSLayoutConstraint *noticeArrowToLeft; // @synthesize noticeArrowToLeft=_noticeArrowToLeft;
@property(nonatomic) __weak UIButton *interNoticeButton; // @synthesize interNoticeButton=_interNoticeButton;
@property(retain, nonatomic) UIView *interNoticeView; // @synthesize interNoticeView=_interNoticeView;
@property(nonatomic) __weak UIView *backBgView; // @synthesize backBgView=_backBgView;
@property(nonatomic) __weak UIImageView *grayCircleView; // @synthesize grayCircleView=_grayCircleView;
@property(nonatomic) __weak UIView *rightIconView; // @synthesize rightIconView=_rightIconView;
@property(nonatomic) __weak UIImageView *defaultFIOView; // @synthesize defaultFIOView=_defaultFIOView;
@property(nonatomic) __weak UIButton *blurMultiButton; // @synthesize blurMultiButton=_blurMultiButton;
@property(nonatomic) __weak UIButton *blurDoubleButton; // @synthesize blurDoubleButton=_blurDoubleButton;
@property(nonatomic) __weak UIButton *blurSingleButton; // @synthesize blurSingleButton=_blurSingleButton;
@property(retain, nonatomic) UIImageView *wragView; // @synthesize wragView=_wragView;
@property(nonatomic) __weak UIView *blurBGView; // @synthesize blurBGView=_blurBGView;
@property(nonatomic) __weak FXBlurView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) __weak UIView *fioView; // @synthesize fioView=_fioView;
@property(nonatomic) __weak UIButton *topMultiButton; // @synthesize topMultiButton=_topMultiButton;
@property(nonatomic) __weak UIButton *topDoubleButton; // @synthesize topDoubleButton=_topDoubleButton;
@property(nonatomic) __weak UIButton *topSingleButton; // @synthesize topSingleButton=_topSingleButton;
@property(nonatomic) __weak UIView *topBarBGView; // @synthesize topBarBGView=_topBarBGView;
@property(nonatomic) __weak UIView *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(nonatomic) __weak CTVectorButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) _Bool haveNotes; // @synthesize haveNotes=_haveNotes;
@property(retain, nonatomic) CTFlightSearchFooterView *mTableFooterView; // @synthesize mTableFooterView=_mTableFooterView;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(retain, nonatomic) CTFlightMianActivityView *flightMianActivityView; // @synthesize flightMianActivityView=_flightMianActivityView;
@property(nonatomic) __weak CTFlightSearchClassNewCell *searchClassCell; // @synthesize searchClassCell=_searchClassCell;
@property(copy, nonatomic) NSString *messageToken; // @synthesize messageToken=_messageToken;
@property(nonatomic) _Bool showNavigationBarWhenDisappear; // @synthesize showNavigationBarWhenDisappear=_showNavigationBarWhenDisappear;
@property(nonatomic) int enterType; // @synthesize enterType=_enterType;
@property(retain, nonatomic) NSString *destACityName; // @synthesize destACityName=_destACityName;
@property(retain, nonatomic) NSString *destDCityName; // @synthesize destDCityName=_destDCityName;
@property(retain, nonatomic) CTFlightInquireCacheBean *inquireCache; // @synthesize inquireCache=_inquireCache;
@property(nonatomic) __weak id delegateVC; // @synthesize delegateVC=_delegateVC;
- (void).cxx_destruct;
- (void)onReceiveCRNHeightChangedNotification:(id)arg1;
- (_Bool)showChildenAndBodyButton;
- (void)setTicketFlag:(long long)arg1;
- (void)gotoH5Page:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)flightGetLocationInfoNotify:(id)arg1;
- (void)refresh:(id)arg1;
- (void)onReceiveFlightTypeChange:(id)arg1;
- (void)addNewTrip;
- (void)clickChildBabyAction;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)doCancelActionWithType:(int)arg1;
- (void)flightSearchCellWillShowModelViewController;
- (void)multiCellDeleteTripWithTripIndex:(int)arg1;
- (void)multiCellFinishDataChangeWithTripIndex:(long long)arg1 departCity:(id)arg2 arriveCity:(id)arg3 departDate:(id)arg4;
- (void)cellFinishedDoubleTripDataChangeWithDepartCityModel:(id)arg1 arriveCityModel:(id)arg2 departDate:(id)arg3 arriveDate:(id)arg4;
- (void)cellFinishedSingleTripDataChangeWithDepartCityModel:(id)arg1 arriveCityModel:(id)arg2 departDate:(id)arg3 arriveDate:(id)arg4 departNearbyCity:(id)arg5 arriveNearbyCity:(id)arg6;
- (void)setMultiSearchViewModelWithDepartCityModel:(id)arg1 arriveCityModel:(id)arg2 departDate:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)getCorrespondSimpleDataModelWith:(id)arg1;
- (void)selectClassChangeTo:(id)arg1;
- (void)sendFirstBuyRequest;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)flightMaskViewWillRemoveFromSuperView:(id)arg1 gestureRecognizer:(id)arg2;
- (void)onTapFlightAssistantButton:(id)arg1;
- (void)goFlightAssistantDirectorUrlPage;
- (void)setFlightAssistRnStorage;
- (void)goFlightAssistantRnPage;
- (void)gotoMyCtripVC;
- (int)getDelayTime;
- (void)afterLoginSuccess:(id)arg1;
- (void)onTapFlightMyOrderButton:(id)arg1;
- (void)onTapLowPriceButton:(id)arg1;
- (void)onTapCheckInButton:(id)arg1;
- (void)onTapFlightBoardButton:(id)arg1;
- (void)refreshAfterServiceBack;
- (void)getUserMessage;
- (void)searchInternationalMultiFlightList:(CDUnknownBlockType)arg1;
- (void)intListServiceTimeOutProcess;
- (void)searchInternationalFlightList:(CDUnknownBlockType)arg1;
- (void)searchInlandFlightList:(CDUnknownBlockType)arg1;
- (void)doSendResearchA:(id)arg1;
- (id)listTraceDictionary;
- (void)doSendSearchDown:(id)arg1;
- (void)passengerButtonClick:(id)arg1 currentIndex:(int)arg2;
- (void)onButtonFlightClassConfirm:(id)arg1;
- (void)onButtnFlightClassCanceled:(id)arg1;
- (void)DoneEventAdultCount:(long long)arg1 childCounts:(long long)arg2 babyCounts:(long long)arg3 passengerPolicyType:(long long)arg4;
- (void)CancelEvent:(id)arg1;
- (void)classButtonClick:(id)arg1 currentIndex:(long long)arg2;
- (void)backBarButtonClicked:(id)arg1;
- (void)resetTableContentOffset;
- (void)saveInquireHistoryWithInquireType:(int)arg1;
- (void)refreshUnReadInfoTag:(id)arg1;
- (void)setWithIsSetNewImage:(_Bool)arg1;
- (void)saveServiceNewIconClick;
- (_Bool)isNeedShowServiceNewIcon;
- (void)saveShowBubbleTag;
- (_Bool)isNeedShowbubble;
- (_Bool)getHasShowNew;
- (void)tappedPopView:(id)arg1;
- (void)tappedClosedButton:(id)arg1;
- (void)setUpUseCarBubbleViewWithContent:(id)arg1 IconUrl:(id)arg2 positionView:(id)arg3 ButtonWidth:(double)arg4;
- (void)bubbleViewPopUp:(id)arg1 withButtonWidth:(double)arg2;
- (void)setFlightBottomServiceContentView:(id)arg1 withButtonWidth:(double)arg2;
- (void)showflightNewIconViewWithFrame:(struct CGRect)arg1 tag:(int)arg2 containBtn:(id)arg3;
- (void)setFlightBottomBtnNewIconViewWithtag:(int)arg1 containBtn:(id)arg2 isShow:(_Bool)arg3;
- (void)initBottomBar;
- (void)onReceiveInlandFlightClassChangedNotification:(id)arg1;
- (void)hidePickerView;
- (void)setViewWithCache;
- (void)flightSearchShareActionWithType:(_Bool)arg1;
- (void)flightUserBrithdayWithType:(int)arg1;
- (void)flightActivityView;
- (void)setupDataWithRepeatViewModel:(id)arg1;
- (void)showAnimation;
- (void)flightMedalActivityView;
- (void)doAutoActivityview;
- (void)setClassLabelAlignment:(long long)arg1;
- (void)setPassengerAndClassLabelColor:(id)arg1 classColor:(id)arg2;
- (long long)getCorectIndexWithFlightClassIndex:(long long)arg1;
- (void)viewDidUnload;
- (void)initView;
- (void)interNoticeViewDisappear;
- (void)interNoticeViewAppear;
- (void)saveInterNoticeRecord;
- (_Bool)isFirstTimeInterNotice;
- (void)setupInterNoticeView;
- (void)initInterNoticeView;
- (void)initTableFooterView;
- (void)initTableView;
- (void)initBlurView;
- (void)initTopBar;
- (void)initCache;
- (void)updateH5Module;
- (void)doBackGroundWork;
- (void)initData;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)sendBackGroundWork;
- (void)viewDidAppear:(_Bool)arg1;
- (void)showBlurViewDelay;
- (void)viewWillAppear:(_Bool)arg1;
- (void)awakeFromNib;
- (void)updateBackButton;
- (void)flightLoadImageView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (void)ImpMsgAlert;
- (void)showAlertMsg;
- (void)resetTableHeaderState;
- (void)setupArriveDateWithDepartDate;
- (void)resetSwitchTripFlag;
- (void)resetTableFooterViewHeight;
- (void)changeBlurViewButtonStatus;
- (void)resetTableViewMirrorImageView;
- (void)changeTopBarButtonStatus;
- (void)switchTrip:(id)arg1;
- (void)resetInquireConditionWithHistoryModel:(id)arg1;
- (void)refreshTableFooterView;
- (void)messageImportantAlert;
- (void)changeSkin;
- (id)listTraceDictionary;
- (id)addTraceParam;
- (void)startLocation;
- (void)saveLastRecord;
- (void)initCacheByEnterNormal;
- (void)initCacheByUrl;
- (void)initCacheByDestination;
- (id)cityByRemove4Code:(id)arg1;
- (void)createMultiTripData;
- (void)initMultiTripData;
- (id)getflightCalendarLastDay;
- (void)resetLastTripType;
- (_Bool)hasImportanceTip:(id)arg1;
- (_Bool)readOldCityInfo:(id)arg1;
- (_Bool)isDomesticAirline;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
