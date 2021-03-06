//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QXHomeCardVC.h"

#import "UIAlertViewDelegate-Protocol.h"

@class NSString, UIView;

@interface QXHomeNearbyCardVC : QXHomeCardVC <UIAlertViewDelegate>
{
    UIView *_jumpPositionView;
    UIView *_contentView;
    double _lastContentOffset;
    _Bool _animating;
    int _status;
    _Bool _titleBarHidden;
}

- (void).cxx_destruct;
- (void)setTitleBarHidden:(_Bool)arg1 isCurrentIndex:(_Bool)arg2;
- (id)jumpPositionView;
- (void)viewAppeared:(_Bool)arg1;
- (void)loadData;
- (void)receivedAppWillEnterForegroundNotif;
- (void)jumpToSystemsLocationPage;
- (void)jumpToSystemsSettingPage;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

