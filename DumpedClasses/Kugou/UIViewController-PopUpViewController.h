//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface UIViewController (PopUpViewController)
@property(nonatomic) _Bool isEnbaleTapOtherPlaceDismiss; // @dynamic isEnbaleTapOtherPlaceDismiss;
- (_Bool)isIsEnbaleTapOtherPlaceDismiss;
- (void)fadeViewOut:(id)arg1 sourceView:(id)arg2 overlayView:(id)arg3;
- (void)fadeViewIn:(id)arg1 sourceView:(id)arg2 overlayView:(id)arg3;
- (void)slideViewOut:(id)arg1 sourceView:(id)arg2 overlayView:(id)arg3 withAnimationType:(int)arg4;
- (void)slideViewIn:(id)arg1 sourceView:(id)arg2 overlayView:(id)arg3 withAnimationType:(int)arg4;
- (void)dismissPopupViewControllerWithanimationTypeFade;
- (void)dismissPopupViewControllerWithanimationTypeSlideRightLeft;
- (void)dismissPopupViewControllerWithanimationTypeSlideBottomBottom;
- (void)dismissPopupViewControllerWithanimationTypeSlideBottomTop;
- (void)dismissPopupViewControllerWithanimation:(id)arg1;
- (id)topView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)presentPopupView:(id)arg1 animationType:(int)arg2 andEnableTouchDismiss:(_Bool)arg3;
- (void)dismissPopupViewControllerWithanimationType:(int)arg1;
- (void)presentPopupViewController:(id)arg1 animationType:(int)arg2 andEnableTouchDismiss:(_Bool)arg3;
- (void)presentPopupViewController:(id)arg1 animationType:(int)arg2;
@end

