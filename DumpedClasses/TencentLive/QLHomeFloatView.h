//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface QLHomeFloatView : UIView
{
    UIImageView *histroy_icon;
    UILabel *titleLabel;
    id <QLHomeFloatViewClickDelegate> delegate;
}

@property(nonatomic) __weak id <QLHomeFloatViewClickDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
@property(retain, nonatomic) UIImageView *histroy_icon; // @synthesize histroy_icon;
- (void).cxx_destruct;
- (void)ClickhomeFloatView;
- (void)ClickRightView:(id)arg1;
- (void)refreshTextColor;
- (void)setshowText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

