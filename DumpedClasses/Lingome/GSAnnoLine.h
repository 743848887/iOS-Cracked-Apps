//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSAnnoBase.h"

@class UIColor;

@interface GSAnnoLine : GSAnnoBase
{
    unsigned char _lineSize;
    UIColor *_lineColor;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(retain, nonatomic) UIColor *lineColor; // @synthesize lineColor=_lineColor;
@property(nonatomic) unsigned char lineSize; // @synthesize lineSize=_lineSize;
- (void).cxx_destruct;

@end

