//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class UIImageView, UILabel;

@interface CTLanguageSelectCell : CTCustomeGroupTableViewCell
{
    UILabel *_languageLabel;
    UIImageView *_selectView;
    UILabel *_tipsLabel;
}

@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) UILabel *languageLabel; // @synthesize languageLabel=_languageLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

