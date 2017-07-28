//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FMComponentCellProtocol.h"

@class NSString, UILabel, UIView;

@interface FMFishQuestionReplyTitleComponentView : UITableViewCell <FMComponentCellProtocol>
{
    UIView *_tagView;
    UILabel *_titleLabel;
    UIView *_bottomLine;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *tagView; // @synthesize tagView=_tagView;
- (void).cxx_destruct;
- (void)bindComponent:(id)arg1;
- (void)updateConstraints;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
