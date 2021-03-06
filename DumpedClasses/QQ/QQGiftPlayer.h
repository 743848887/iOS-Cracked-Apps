//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIWebViewDelegate.h"

@class NSString, QQGiftInfo, QQWebViewController, UIButton, UIWindow;

@interface QQGiftPlayer : UIViewController <UIWebViewDelegate>
{
    UIWindow *_window;
    UIButton *_closeBtn;
    _Bool _suspended;
    QQGiftInfo *_gift;
    CDUnknownBlockType _completionBlock;
    QQWebViewController *_webViewCtl;
}

@property(retain, nonatomic) QQWebViewController *webViewCtl; // @synthesize webViewCtl=_webViewCtl;
@property(nonatomic) _Bool suspended; // @synthesize suspended=_suspended;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) QQGiftInfo *gift; // @synthesize gift=_gift;
- (void).cxx_destruct;
- (void)closeWindowActivity;
- (void)closeWindowWithAction:(CDUnknownBlockType)arg1;
- (void)closeWindow;
- (void)stop;
- (void)play;
- (_Bool)canPlay;
- (void)LayoutWindowAndSubViews;
- (id)initWithGift:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

