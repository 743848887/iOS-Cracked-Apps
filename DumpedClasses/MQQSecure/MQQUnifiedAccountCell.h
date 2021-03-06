//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQTableViewCell.h"

@class UIImageView, UILabel;

@interface MQQUnifiedAccountCell : MQQTableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_detailTextLabel;
    UIImageView *_arrowImageView;
}

+ (double)defaultHeight;
- (void)changeFrameWhenSettingHighlighted:(_Bool)arg1;
- (void)setArrowIconHidden:(_Bool)arg1;
- (void)setDetailText:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

