//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class CTCalendarDay, UILabel;

@interface CTCalendarDayView : UICollectionViewCell
{
    CTCalendarDay *_day;
    UILabel *_dateLabel;
}

@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) CTCalendarDay *day; // @synthesize day=_day;
- (void).cxx_destruct;
- (void)setup;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
