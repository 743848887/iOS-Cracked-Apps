//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIImageView, UILabel, UIView;

@interface TBCouponSuggestAView : UIButton
{
    NSString *_jumpUrl;
    long long _type;
    UIImageView *_picView;
    UILabel *_titleViewLabel;
    UILabel *_currentPriceLabel;
    UILabel *_originalPriceLabel;
    UIView *_lineView;
    CDUnknownBlockType _itemClickBlock;
    UILabel *_leadingRoleLabel;
}

@property(retain, nonatomic) UILabel *leadingRoleLabel; // @synthesize leadingRoleLabel=_leadingRoleLabel;
@property(copy, nonatomic) CDUnknownBlockType itemClickBlock; // @synthesize itemClickBlock=_itemClickBlock;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *originalPriceLabel; // @synthesize originalPriceLabel=_originalPriceLabel;
@property(retain, nonatomic) UILabel *currentPriceLabel; // @synthesize currentPriceLabel=_currentPriceLabel;
@property(retain, nonatomic) UILabel *titleViewLabel; // @synthesize titleViewLabel=_titleViewLabel;
@property(retain, nonatomic) UIImageView *picView; // @synthesize picView=_picView;
- (void).cxx_destruct;
- (void)buttonClick:(id)arg1;
- (void)setupTypeDWithData:(id)arg1;
- (void)setupTypeBWithData:(id)arg1;
- (void)setupTypeCWithData:(id)arg1;
- (void)setupTypeAWithData:(id)arg1;
- (void)setupViewWithData:(id)arg1;
- (void)initUIViews;
- (id)initWithFrame:(struct CGRect)arg1 type:(long long)arg2;

@end
