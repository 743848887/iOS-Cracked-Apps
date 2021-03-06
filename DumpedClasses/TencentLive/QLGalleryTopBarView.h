//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface QLGalleryTopBarView : UIView
{
    _Bool _selected;
    id <QLGalleryTopBarViewDelegate> _delegate;
    UIButton *_leftTopButton;
    UIButton *_rightTopButton;
    UILabel *_titleLabel;
    unsigned long long _style;
}

+ (id)galleryTopBarViewWithDelegate:(id)arg1 withStyle:(unsigned long long)arg2;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *rightTopButton; // @synthesize rightTopButton=_rightTopButton;
@property(retain, nonatomic) UIButton *leftTopButton; // @synthesize leftTopButton=_leftTopButton;
@property(nonatomic) __weak id <QLGalleryTopBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didPressRightTopButtonAction:(id)arg1;
- (void)didPressLeftTopButtonAction:(id)arg1;
- (void)createUserInterfaceStyle:(unsigned long long)arg1;
- (void)updateGalleryTopBarViewFrameByReferenceView:(id)arg1;

@end

