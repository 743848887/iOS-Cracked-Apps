//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSTimer;

@interface QLCPULabel : UILabel
{
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)cpuInfo;
- (void)refreshControl;
- (void)handleGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
