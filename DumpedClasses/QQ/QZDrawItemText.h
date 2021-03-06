//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZDrawItem.h"

@class NSAttributedString, NSString, UIColor, UIFont;

@interface QZDrawItemText : QZDrawItem
{
    NSString *_str;
    UIFont *_font;
    UIColor *_color;
    NSAttributedString *attributedText;
}

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *str; // @synthesize str=_str;
- (void).cxx_destruct;
- (id)getDrawItemVoiceText;
- (void)drawString:(id)arg1 inRect:(struct CGRect)arg2 withFont:(id)arg3 andColor:(id)arg4;
- (void)draw;
- (id)initWithStr:(id)arg1 Rect:(struct CGRect)arg2 Font:(id)arg3 Color:(id)arg4;

@end

