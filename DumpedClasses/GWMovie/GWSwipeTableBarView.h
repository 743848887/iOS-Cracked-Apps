//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "POPAnimationDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol GWSwipeTableBarDelegate;

@interface GWSwipeTableBarView : UIView <POPAnimationDelegate>
{
    _Bool _isTouch;
    NSArray *_itemsArray;
    id <GWSwipeTableBarDelegate> _delegate;
    NSMutableArray *_itemsButtons;
    UIView *_blockView;
    long long _selectIndex;
    UIView *_bottomLineView;
}

@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(retain, nonatomic) UIView *blockView; // @synthesize blockView=_blockView;
@property(retain, nonatomic) NSMutableArray *itemsButtons; // @synthesize itemsButtons=_itemsButtons;
@property(nonatomic) _Bool isTouch; // @synthesize isTouch=_isTouch;
@property(nonatomic) __weak id <GWSwipeTableBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *itemsArray; // @synthesize itemsArray=_itemsArray;
- (void).cxx_destruct;
- (void)dealloc;
- (void)blockViewAnimation;
- (void)onTabSelectIndex:(long long)arg1;
- (void)buttonClick:(id)arg1;
- (void)reloadSubviews;
- (void)resetSelectIndex:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)panGesEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

