//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface NMAutoFMSendDataFinishView : UIView
{
    UILabel *_label1;
    UILabel *_label2;
    UIImageView *_iconImageView;
    UIButton *_finishButton;
    id _delegate;
    long long _fmFreq;
}

@property(nonatomic) long long fmFreq; // @synthesize fmFreq=_fmFreq;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)handleSkinChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

