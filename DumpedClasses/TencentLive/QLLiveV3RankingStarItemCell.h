//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GMGridViewCell.h"

@class QLJCEActorRankItem, QLSImageView, UIButton, UILabel;

@interface QLLiveV3RankingStarItemCell : GMGridViewCell
{
    UIButton *_btnVote;
    QLSImageView *_avatarView;
    QLSImageView *_avatarRankIdImg;
    UILabel *_avatarRankIdLbl;
    UILabel *_nameLabel;
    QLJCEActorRankItem *_rankItem;
}

@property(retain, nonatomic) QLJCEActorRankItem *rankItem; // @synthesize rankItem=_rankItem;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *avatarRankIdLbl; // @synthesize avatarRankIdLbl=_avatarRankIdLbl;
@property(retain, nonatomic) QLSImageView *avatarRankIdImg; // @synthesize avatarRankIdImg=_avatarRankIdImg;
@property(retain, nonatomic) QLSImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)voteBtnDown:(id)arg1;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
