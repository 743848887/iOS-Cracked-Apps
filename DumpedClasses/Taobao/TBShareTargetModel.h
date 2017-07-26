//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIImage;

@interface TBShareTargetModel : NSObject
{
    int _pType;
    NSString *_targetId;
    NSString *_title;
    unsigned long long _zone;
    NSString *_iconText;
    UIColor *_iconTextColor;
    UIImage *_iconImage;
    NSString *_tipsText;
    UIImage *_tipsImage;
}

@property(retain, nonatomic) UIImage *tipsImage; // @synthesize tipsImage=_tipsImage;
@property(retain, nonatomic) NSString *tipsText; // @synthesize tipsText=_tipsText;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIColor *iconTextColor; // @synthesize iconTextColor=_iconTextColor;
@property(retain, nonatomic) NSString *iconText; // @synthesize iconText=_iconText;
@property(nonatomic) unsigned long long zone; // @synthesize zone=_zone;
@property(nonatomic) int pType; // @synthesize pType=_pType;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
- (void).cxx_destruct;

@end
