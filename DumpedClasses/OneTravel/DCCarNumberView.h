//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface DCCarNumberView : UIView
{
    _Bool _highlight;
    NSString *_province;
    NSString *_number;
    UILabel *_provinceLabel;
}

@property(retain, nonatomic) UILabel *provinceLabel; // @synthesize provinceLabel=_provinceLabel;
@property(nonatomic) _Bool highlight; // @synthesize highlight=_highlight;
@property(copy, nonatomic) NSString *number; // @synthesize number=_number;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
- (void).cxx_destruct;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)setCarNumber;
- (id)initWithFrame:(struct CGRect)arg1;

@end

