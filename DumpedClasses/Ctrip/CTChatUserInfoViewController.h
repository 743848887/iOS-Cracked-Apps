//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

@class CTImageView, NSString, UILabel, UISwitch;

@interface CTChatUserInfoViewController : CTRootViewController
{
    NSString *_uid;
    NSString *_nickName;
    NSString *_userAvatarStr;
    UILabel *_userNameLabel;
    CTImageView *_userAvatar;
    UISwitch *_enableMessageSwitch;
}

@property(retain, nonatomic) UISwitch *enableMessageSwitch; // @synthesize enableMessageSwitch=_enableMessageSwitch;
@property(retain, nonatomic) CTImageView *userAvatar; // @synthesize userAvatar=_userAvatar;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) NSString *userAvatarStr; // @synthesize userAvatarStr=_userAvatarStr;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)userAvatarTap;
- (void)enableMessageSwitchChanged:(id)arg1;
- (void)setUpEnableMessageSwitch;
- (void)setUpUserAvatar;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (int)applyNavigationBarStyle;
- (id)initWithUid:(id)arg1;

@end
