//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "FBGroupsLandingHeaderViewProtocol-Protocol.h"

@class NSString, UIButton, UIColor, UILabel, UIView;

@interface FBGroupsLandingHeaderView : UICollectionReusableView <FBGroupsLandingHeaderViewProtocol>
{
    UILabel *_titleLabel;
    UIView *_separator;
    _Bool _buttonImageOnRight;
    UIButton *_button;
}

+ (double)headerHeight;
@property(nonatomic) _Bool buttonImageOnRight; // @synthesize buttonImageOnRight=_buttonImageOnRight;
@property(readonly, retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGSize)_sizeForLabel:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIColor *separatorColor;
@property(retain, nonatomic) UIColor *textColor;
@property(copy, nonatomic) NSString *text;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

