//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLHTMLFontLabel, QLHTMLLabel, QLJCEMarkLabel, QLSImageView, UILabel;

@interface QLONAMarksLabel : UIView
{
    QLSImageView *_imgMrkLeft;
    QLSImageView *_imgMrkRight;
    QLHTMLFontLabel *_lblMrkLeft;
    QLHTMLLabel *_lblMrkRight;
    UILabel *_lblTop;
    UILabel *_lblBottom;
    _Bool _suportExtend;
    long long _maxLines;
    QLJCEMarkLabel *_leftMark;
    QLJCEMarkLabel *_rightMark;
}

@property(readonly) QLHTMLLabel *lblMrkRight; // @synthesize lblMrkRight=_lblMrkRight;
@property(readonly) QLSImageView *imgMrkRight; // @synthesize imgMrkRight=_imgMrkRight;
@property(readonly) QLSImageView *imgMrkLeft; // @synthesize imgMrkLeft=_imgMrkLeft;
@property(retain, nonatomic) QLJCEMarkLabel *rightMark; // @synthesize rightMark=_rightMark;
@property(retain, nonatomic) QLJCEMarkLabel *leftMark; // @synthesize leftMark=_leftMark;
@property(nonatomic) _Bool suportExtend; // @synthesize suportExtend=_suportExtend;
@property(nonatomic) long long maxLines; // @synthesize maxLines=_maxLines;
- (void).cxx_destruct;
@property(readonly) UILabel *lblBottom;
@property(readonly) UILabel *lblTop;
@property(readonly) QLHTMLFontLabel *lblMrkLeft;
- (id)createHtmlLabel:(double)arg1;
- (void)sizeFitLabel:(id)arg1 origenTxt:(id)arg2;
- (void)layoutSubviews;
- (void)setMarkLables:(id)arg1 thumbStyle:(int)arg2 mainTxt:(id)arg3;
- (void)setFont:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

