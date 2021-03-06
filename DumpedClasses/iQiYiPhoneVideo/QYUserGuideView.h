//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIPageControl, UIScrollView, UIWindow;
@protocol QYUserGuideViewDelegate;

@interface QYUserGuideView : UIView <UIScrollViewDelegate>
{
    _Bool _animating;
    UIScrollView *_scroll;
    id <QYUserGuideViewDelegate> _delegate;
    UIWindow *_window;
    UIPageControl *_pageControl;
}

@property(retain) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(nonatomic) id <QYUserGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIScrollView *scroll; // @synthesize scroll=_scroll;
- (void)shouldClose;
- (void)scrollViewDidScroll:(id)arg1;
- (void)benginEnjoy;
- (void)setupGuideContent;
- (void)pageTurn:(id)arg1;
- (id)GuideItemForImg:(id)arg1 title:(id)arg2 subtitle:(id)arg3 breakImg:(id)arg4 backgroudColor:(id)arg5 backgroundImage:(id)arg6;
- (void)LoadGuideContent:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

