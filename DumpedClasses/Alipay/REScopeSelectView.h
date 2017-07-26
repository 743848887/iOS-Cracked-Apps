//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIButton, UIImage, UIImageView;

@interface REScopeSelectView : UIView
{
    NSArray *_titles;
    UIImageView *_checkImageView;
    NSMutableArray *_buttonArray;
    unsigned long long _style;
    UIButton *_selectedButton;
    UIImage *_arNormalImage;
    UIImage *_arHightLightImage;
    CDUnknownBlockType _clickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) UIImage *arHightLightImage; // @synthesize arHightLightImage=_arHightLightImage;
@property(retain, nonatomic) UIImage *arNormalImage; // @synthesize arNormalImage=_arNormalImage;
@property(retain, nonatomic) UIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) UIImageView *checkImageView; // @synthesize checkImageView=_checkImageView;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
- (void).cxx_destruct;
- (id)getStrechImageFromCenter:(id)arg1;
- (id)buildVerticalLine:(double)arg1 color:(id)arg2;
- (void)makeButtonChecked:(id)arg1;
- (void)onButtonClicked:(id)arg1;
- (id)buildButtonItem:(id)arg1 width:(double)arg2;
- (void)buildViews;
- (void)makeSelection:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 titles:(id)arg2 onClicked:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2 titles:(id)arg3 onClicked:(CDUnknownBlockType)arg4;

@end
