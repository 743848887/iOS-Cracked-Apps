//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSObject<CustomTabBarDelegate>;

@interface CustomTabBar : UIView
{
    NSObject<CustomTabBarDelegate> *delegate;
    NSMutableArray *buttons;
}

@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons;
- (void).cxx_destruct;
- (void)selectItemAtIndex:(long long)arg1;
- (void)otherDoubleTouchesAction:(id)arg1;
- (void)otherTouchesAction:(id)arg1;
- (void)touchUpInsideAction:(id)arg1;
- (void)touchDownAction:(id)arg1;
- (long long)getSelectedButtonIdx;
- (id)getSelectedButton;
- (void)dimAllButtonsExcept:(id)arg1;
- (void)changeBgView:(id)arg1;
- (void)changeBgColor:(id)arg1;
- (void)setTranslucent:(_Bool)arg1;
- (id)initWithItemCount:(unsigned long long)arg1 itemSize:(struct CGSize)arg2 tag:(long long)arg3 delegate:(id)arg4;

@end
