//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol MQQWallpaperTabBarDelegate;

@interface MQQWallpaperTabBar : UIView
{
    UIButton *_onlineButton;
    UIButton *_albumButton;
    id <MQQWallpaperTabBarDelegate> _delegate;
    long long _currentTag;
}

@property(nonatomic) long long currentTag; // @synthesize currentTag=_currentTag;
@property(nonatomic) id <MQQWallpaperTabBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *albumButton; // @synthesize albumButton=_albumButton;
@property(retain, nonatomic) UIButton *onlineButton; // @synthesize onlineButton=_onlineButton;
- (void)buttonClicked:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

