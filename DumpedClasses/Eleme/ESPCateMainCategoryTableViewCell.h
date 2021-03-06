//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class ESPCategoryFilterItem, UILabel, UIView;

@interface ESPCateMainCategoryTableViewCell : NVMTableViewCell
{
    _Bool _chosen;
    ESPCategoryFilterItem *_category;
    UILabel *_nameLabel;
    UILabel *_countLabel;
    UIView *_topLine;
    UIView *_bottomLine;
    UIView *_rightLine;
    UIView *_selectionBlueView;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIView *selectionBlueView; // @synthesize selectionBlueView=_selectionBlueView;
@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) _Bool chosen; // @synthesize chosen=_chosen;
@property(retain, nonatomic) ESPCategoryFilterItem *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateUI;
- (void)loadLines;
- (void)loadCountLabel;
- (void)loadBlueView;
- (void)loadNameLabel;
- (void)loadSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

