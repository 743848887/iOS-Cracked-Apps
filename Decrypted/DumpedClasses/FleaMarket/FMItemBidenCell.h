//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, UIView;

@interface FMItemBidenCell : UITableViewCell
{
    UILabel *_hBidTitleLabel;
    UILabel *_hTimeInvalidLabel;
    UILabel *_hPriceLabel;
    UIView *_personalBidView;
}

@property(retain, nonatomic) UIView *personalBidView; // @synthesize personalBidView=_personalBidView;
@property(retain, nonatomic) UILabel *hPriceLabel; // @synthesize hPriceLabel=_hPriceLabel;
@property(retain, nonatomic) UILabel *hTimeInvalidLabel; // @synthesize hTimeInvalidLabel=_hTimeInvalidLabel;
@property(retain, nonatomic) UILabel *hBidTitleLabel; // @synthesize hBidTitleLabel=_hBidTitleLabel;
- (void).cxx_destruct;
- (id)timeWithCountDown:(long long)arg1;
- (void)setLayout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setBidItemDO:(id)arg1;

@end
