//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelLableInformationModel : CTBusinessBean
{
    _Bool _isShow;
    int _flag;
    NSString *_content;
    NSString *_jumpUrl;
    NSString *_imageUrl;
}

@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) int flag; // @synthesize flag=_flag;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
