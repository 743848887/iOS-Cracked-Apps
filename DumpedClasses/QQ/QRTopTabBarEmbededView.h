//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray;

@interface QRTopTabBarEmbededView : UIView
{
    NSArray *_items;
    id <QRTopTabBarEmbededViewSwitchTabDelegate> _delegate;
    unsigned long long _selectedIndex;
    NSMutableArray *_itemViews;
    UIView *_bottomBoundaryLine;
}

@property(retain, nonatomic) UIView *bottomBoundaryLine; // @synthesize bottomBoundaryLine=_bottomBoundaryLine;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <QRTopTabBarEmbededViewSwitchTabDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)addContentViews;
- (void)switchTab:(id)arg1;
- (id)createItemViewAtIndex:(int)arg1;
- (void)drawTopBarItem;

@end

