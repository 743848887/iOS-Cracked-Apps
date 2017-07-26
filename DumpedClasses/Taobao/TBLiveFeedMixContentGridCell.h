//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, TBLiveFeedCellBottomDetailView, TBLiveLivingStatusView, UIImageView, UIView;

@interface TBLiveFeedMixContentGridCell : UICollectionViewCell
{
    UIImageView *_coverImageView;
    UIView *_blurView;
    TBLiveLivingStatusView *_statusView;
    TBLiveFeedCellBottomDetailView *_detailView;
    NSString *_liveUrl;
    NSString *_feed_id;
    NSString *_account_id;
    NSString *_live_status;
}

+ (id)reusableIdentify;
@property(copy, nonatomic) NSString *live_status; // @synthesize live_status=_live_status;
@property(copy, nonatomic) NSString *account_id; // @synthesize account_id=_account_id;
@property(copy, nonatomic) NSString *feed_id; // @synthesize feed_id=_feed_id;
@property(copy, nonatomic) NSString *liveUrl; // @synthesize liveUrl=_liveUrl;
@property(retain, nonatomic) TBLiveFeedCellBottomDetailView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) TBLiveLivingStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)clickCell;
- (void)refreshWithModel:(id)arg1;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
