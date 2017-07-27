//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface QLPickerItem : NSObject
{
    _Bool _selected;
    NSString *_title;
    UIImage *_icon;
    NSString *_iconUrl;
    NSString *_selectTitle;
    UIImage *_selectIcon;
    long long _row;
    long long _col;
}

+ (id)itemWithTitle:(id)arg1 icon:(id)arg2;
@property(nonatomic) long long col; // @synthesize col=_col;
@property(nonatomic) long long row; // @synthesize row=_row;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UIImage *selectIcon; // @synthesize selectIcon=_selectIcon;
@property(retain, nonatomic) NSString *selectTitle; // @synthesize selectTitle=_selectTitle;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
