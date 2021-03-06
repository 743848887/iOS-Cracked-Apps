//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class NSArray;

@interface TTThreadRateView : SSThemedView
{
    double _rate;
    NSArray *_rateStars;
}

@property(retain, nonatomic) NSArray *rateStars; // @synthesize rateStars=_rateStars;
@property(nonatomic) double rate; // @synthesize rate=_rate;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)createComponent;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

