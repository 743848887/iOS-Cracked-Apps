//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface MCChatPageNoticePublicView : UIView
{
    NSString *_pageName;
    UIView *_bcView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIButton *_closeButton;
    UIImageView *_shadowImageView;
}

@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bcView; // @synthesize bcView=_bcView;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
- (void).cxx_destruct;
- (void)closeView:(id)arg1;
- (void)updateVO:(id)arg1;
- (id)initWithPageName:(id)arg1;

@end
