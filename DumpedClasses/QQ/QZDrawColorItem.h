//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZDrawItem.h"

@class NSArray, UIColor;

@interface QZDrawColorItem : QZDrawItem
{
    struct CGPoint *_pointArray;
    UIColor *_color;
    UIColor *_borderColor;
    double _borderWidth;
    NSArray *_points;
}

@property(retain, nonatomic) NSArray *points; // @synthesize points=_points;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)draw;
- (void)checkResetRect;
- (void)setRect:(struct CGRect)arg1;
- (void)dealloc;

@end

