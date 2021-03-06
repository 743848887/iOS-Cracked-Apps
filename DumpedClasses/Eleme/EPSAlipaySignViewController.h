//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EPSPayBaseViewController.h"

@class NSString, UIImageView, UILabel, UISwitch, UIView;

@interface EPSAlipaySignViewController : EPSPayBaseViewController
{
    _Bool _isSigned;
    NSString *_merchantID;
    NSString *_userID;
    UIView *_container;
    UIImageView *_iconView;
    UILabel *_statusLabel;
    UISwitch *_switchButton;
}

@property(nonatomic) _Bool isSigned; // @synthesize isSigned=_isSigned;
@property(retain, nonatomic) UISwitch *switchButton; // @synthesize switchButton=_switchButton;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *merchantID; // @synthesize merchantID=_merchantID;
- (void).cxx_destruct;
- (void)terminateAlipaySign;
- (void)signWithAlipay;
- (void)queryStatus;
- (void)switchAlipaySign:(id)arg1;
- (void)saveSignStatus:(_Bool)arg1;
- (void)loadSwitch;
- (void)loadStatusLabel;
- (void)loadTitleLabel;
- (void)loadIcon;
- (void)loadContainerView;
- (void)loadSubviews;
- (void)viewDidLoad;
- (id)initWithMerchantID:(id)arg1 userID:(id)arg2;

@end

