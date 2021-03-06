//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class KGModalCloseButton, KGModalContainerView, KGModalViewController, UIColor, UIImage, UIView, UIViewController, UIWindow;

@interface KGModal : NSObject
{
    _Bool _tapOutsideToDismiss;
    _Bool _animateWhenDismissed;
    _Bool _shouldRotate;
    unsigned long long _closeButtonType;
    UIColor *_modalBackgroundColor;
    unsigned long long _backgroundDisplayStyle;
    UIImage *_closeButtonImage;
    UIWindow *_window;
    UIViewController *_contentViewController;
    KGModalViewController *_viewController;
    KGModalContainerView *_containerView;
    KGModalCloseButton *_closeButton;
    UIView *_contentView;
}

+ (id)sharedInstance;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak KGModalCloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak KGModalContainerView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak KGModalViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIImage *closeButtonImage; // @synthesize closeButtonImage=_closeButtonImage;
@property(nonatomic) _Bool shouldRotate; // @synthesize shouldRotate=_shouldRotate;
@property(nonatomic) unsigned long long backgroundDisplayStyle; // @synthesize backgroundDisplayStyle=_backgroundDisplayStyle;
@property(retain, nonatomic) UIColor *modalBackgroundColor; // @synthesize modalBackgroundColor=_modalBackgroundColor;
@property(nonatomic) unsigned long long closeButtonType; // @synthesize closeButtonType=_closeButtonType;
@property(nonatomic) _Bool animateWhenDismissed; // @synthesize animateWhenDismissed=_animateWhenDismissed;
@property(nonatomic) _Bool tapOutsideToDismiss; // @synthesize tapOutsideToDismiss=_tapOutsideToDismiss;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cleanup;
- (void)hideAnimated:(_Bool)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)hideAnimated:(_Bool)arg1;
- (void)hideWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)hide;
- (void)tapCloseAction:(id)arg1;
- (void)closeAction:(id)arg1;
- (void)showWithContentView:(id)arg1 andAnimated:(_Bool)arg2;
- (void)showWithContentViewController:(id)arg1 andAnimated:(_Bool)arg2;
- (void)showWithContentViewController:(id)arg1;
- (void)showWithContentView:(id)arg1;
- (id)init;

@end

