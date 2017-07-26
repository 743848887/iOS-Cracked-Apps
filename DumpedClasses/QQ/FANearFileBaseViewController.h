//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "FANearFileNavigationBarDelegate.h"

@class FANearFileNavigationBar, NSString, UIAlertView, UIImageView;

@interface FANearFileBaseViewController : QQViewController <FANearFileNavigationBarDelegate>
{
    long long _style;
    FANearFileNavigationBar *_navigationBar;
    UIImageView *_bgTopImgView;
    UIImageView *_bgBotImgView;
    NSString *_className;
    _Bool _resetNavBar;
    UIAlertView *_alertView;
}

- (id)getCustomTitleView:(id)arg1 subTitle:(id)arg2 color:(id)arg3;
- (double)getTitleViewWidth;
- (_Bool)isSupportRightDragToGoBack;
- (void)onHelpBtnClick:(id)arg1;
- (void)onFileBtnClick:(id)arg1;
- (void)onBackBtnClick:(id)arg1;
- (void)hideAlertView;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)initNavigationBar;
- (void)initStatusbar;
- (void)customNavigation:(_Bool)arg1;
- (void)loadView;
- (void)initBackGroundView;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
