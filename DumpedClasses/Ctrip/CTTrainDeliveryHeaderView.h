//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CTTrainDeliveryHeaderTabViewDelegate.h"

@class NSArray, NSLayoutConstraint, NSString;

@interface CTTrainDeliveryHeaderView : UIView <CTTrainDeliveryHeaderTabViewDelegate>
{
    id <CTTrainDeliveryHeaderViewDelegate> _delegate;
    NSArray *_dataArray;
    long long _currentType;
    NSLayoutConstraint *_slideLeadingConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *slideLeadingConstraint; // @synthesize slideLeadingConstraint=_slideLeadingConstraint;
@property(nonatomic) long long currentType; // @synthesize currentType=_currentType;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak id <CTTrainDeliveryHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)slideAnimate:(long long)arg1 withAnimate:(_Bool)arg2;
- (void)updateSelectType:(long long)arg1 withAnimate:(_Bool)arg2;
- (void)selectTrainDeliveryHeaderTabView:(id)arg1;
- (id)createTab:(id)arg1 withFrontView:(id)arg2;
- (void)initView;
- (void)initData;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
