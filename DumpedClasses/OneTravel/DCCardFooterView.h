//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSArray, UIColor, UIFont;

@interface DCCardFooterView : UIView
{
    NSArray *_models;
    UIView *_insertView;
    CALayer *_bottomLineLayer;
    CDUnknownBlockType _viewUpdated;
    CDUnknownBlockType _tapped;
    CDUnknownBlockType _tappedContent;
    UIColor *_color;
    UIFont *_messageFont;
    double _maxSizeWidth;
    struct UIEdgeInsets _bottomLineInsets;
}

+ (double)viewHeightWithLineNumber:(unsigned long long)arg1;
+ (double)viewHeight;
@property(nonatomic) double maxSizeWidth; // @synthesize maxSizeWidth=_maxSizeWidth;
@property(retain, nonatomic) UIFont *messageFont; // @synthesize messageFont=_messageFont;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) CDUnknownBlockType tappedContent; // @synthesize tappedContent=_tappedContent;
@property(copy, nonatomic) CDUnknownBlockType tapped; // @synthesize tapped=_tapped;
@property(copy, nonatomic) CDUnknownBlockType viewUpdated; // @synthesize viewUpdated=_viewUpdated;
@property(nonatomic) struct UIEdgeInsets bottomLineInsets; // @synthesize bottomLineInsets=_bottomLineInsets;
@property(retain, nonatomic) CALayer *bottomLineLayer; // @synthesize bottomLineLayer=_bottomLineLayer;
@property(retain, nonatomic) UIView *insertView; // @synthesize insertView=_insertView;
@property(copy, nonatomic) NSArray *models; // @synthesize models=_models;
- (void).cxx_destruct;
- (void)setupInsertView:(id)arg1;
- (void)setupFooterModels:(id)arg1 richViewItems:(CDUnknownBlockType)arg2;
- (void)setupFooterModels:(id)arg1;
- (void)setupFooterModel:(id)arg1;
- (struct CGRect)fitFrame:(struct CGRect)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (void)layoutSubviews;
- (void)tapAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
