//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface NMAlarmClockWaitRemindView : UIView
{
    UIImageView *_circleImageView;
    UILabel *_waitRemindLabel;
    UIButton *_waitButton;
    id <NMAlarmClockWaitRemindViewDelegate> _delegate;
}

+ (struct CGSize)remindViewSize;
@property(nonatomic) __weak id <NMAlarmClockWaitRemindViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)waitButtonClicked:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
