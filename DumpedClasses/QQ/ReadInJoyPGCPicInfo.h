//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ReadInJoyPGCPicInfo : NSObject
{
    unsigned int _width;
    unsigned int _height;
    NSString *_md5;
    NSString *_url;
}

+ (id)pgcPicInfoFromMsgDecoder:(struct CPBMessageDecoder *)arg1;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
- (void)dealloc;
- (void)toEncoder:(struct CPBMessageEncoder *)arg1;

@end

