//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMPageUserSkillDO : NSObject
{
    NSString *_desc;
    NSString *_price;
    NSString *_ranktitleId;
    NSString *_rankTitleName;
    NSString *_ranktitleLevel;
    NSString *_userId;
    NSString *_detailDesc;
    NSString *_linkUrl;
}

@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(copy, nonatomic) NSString *detailDesc; // @synthesize detailDesc=_detailDesc;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *ranktitleLevel; // @synthesize ranktitleLevel=_ranktitleLevel;
@property(copy, nonatomic) NSString *rankTitleName; // @synthesize rankTitleName=_rankTitleName;
@property(copy, nonatomic) NSString *ranktitleId; // @synthesize ranktitleId=_ranktitleId;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void).cxx_destruct;

@end
