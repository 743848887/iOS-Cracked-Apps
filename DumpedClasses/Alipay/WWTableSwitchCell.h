//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WWTableTitleCell.h"

@class UISwitch;

@interface WWTableSwitchCell : WWTableTitleCell
{
    UISwitch *_switchItem;
}

@property(retain, nonatomic) UISwitch *switchItem; // @synthesize switchItem=_switchItem;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)setupComponents;

@end
