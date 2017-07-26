//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQVIPFunctionComicBaseViewController.h"

#import "CMCommandOperationDelegate.h"
#import "QQVipPicEditMenuBarDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UserSummaryNavBarItemDelagate.h"

@class CMCommandController, NSMutableSet, NSString, QQProgressHUD, QQVIPFunctionReaderModel, QQVipPicEditBubbleMenuBar, QQVipPicEditCanvasView, QQVipPicEditMenuBar, UIImage, UIScrollView, UserSummaryNavigationBar;

@interface QQVipFunctionComicPicEditVC : QQVIPFunctionComicBaseViewController <QQVipPicEditMenuBarDelegate, UIScrollViewDelegate, UserSummaryNavBarItemDelagate, UIAlertViewDelegate, CMCommandOperationDelegate>
{
    QQProgressHUD *_hud;
    NSString *_uploadingMD5;
    NSMutableSet *_uploadedMD5Set;
    _Bool _hasBeenCroped;
    long long _lastOp;
    long long _statusToShare;
    _Bool _hasClickedConfirmbtn;
    UIImage *_sourceImage;
    QQVIPFunctionReaderModel *_curReadrModel;
    QQVipPicEditCanvasView *_canvasView;
    CMCommandController *_cmdController;
    QQVipPicEditMenuBar *_bottomBar;
    UserSummaryNavigationBar *_navibar;
    UIScrollView *_canvasScrollView;
    NSString *_actionData;
    NSString *_picMd5;
    QQVipPicEditBubbleMenuBar *_bubbleMenuBar;
    struct CGRect _touchRect;
}

@property(retain, nonatomic) QQVipPicEditBubbleMenuBar *bubbleMenuBar; // @synthesize bubbleMenuBar=_bubbleMenuBar;
@property(retain, nonatomic) NSString *picMd5; // @synthesize picMd5=_picMd5;
@property(retain, nonatomic) NSString *actionData; // @synthesize actionData=_actionData;
@property(retain, nonatomic) UIScrollView *canvasScrollView; // @synthesize canvasScrollView=_canvasScrollView;
@property(retain, nonatomic) UserSummaryNavigationBar *navibar; // @synthesize navibar=_navibar;
@property(retain, nonatomic) QQVipPicEditMenuBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) CMCommandController *cmdController; // @synthesize cmdController=_cmdController;
@property(retain, nonatomic) QQVipPicEditCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(retain, nonatomic) QQVIPFunctionReaderModel *curReadrModel; // @synthesize curReadrModel=_curReadrModel;
@property(retain, nonatomic) UIImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property(nonatomic) struct CGRect touchRect; // @synthesize touchRect=_touchRect;
- (void).cxx_destruct;
- (void)dcReportBubbleEditingWithExt4:(id)arg1;
- (void)dcReportEditCompletionWithExt4:(id)arg1;
- (void)dcReportBarClickWithExt4:(id)arg1;
- (void)showPicEditVCInPreviewState;
- (void)operationOnPicEditMenuBarItem:(id)arg1;
- (void)clickPicEditMenuBar:(id)arg1 onItem:(id)arg2;
- (void)clickBubbleMenuBar:(id)arg1 onItem:(id)arg2;
- (void)QQVipPicEditMenuBar:(id)arg1 didClickBarItem:(id)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleComicScreenshotUploadStateNotification:(id)arg1;
- (void)handleBubbleTouchStatusChangedNotification:(id)arg1;
- (void)onReceivedShouldOperationLikeItemChosenNotification:(id)arg1;
- (void)saveAndProcessWithCropedImage;
- (void)checkTextContentAndDealWithImage;
- (void)handleNavBarItemClick:(_Bool)arg1;
- (void)uploadComicScreenshotAtFilePath:(id)arg1;
- (void)showShareToFriendsViewController;
- (void)leftButtonClick:(id)arg1;
- (void)popBack;
- (_Bool)isSupportInterruputRightDragToGoBack;
- (_Bool)isSupportRightDragToGoBack;
- (void)adjustCanvasScrollViewLayout;
- (void)setPicEditNaviBarHidden:(_Bool)arg1;
- (id)compressImage:(id)arg1 withMaxBytes:(unsigned long long)arg2;
- (void)recordUploadedMD5:(id)arg1;
- (void)refreshUIState;
- (void)hideProgressHUD;
- (void)showProgressHUD;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initializeCanvasArea;
- (void)commonInitParameters;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
