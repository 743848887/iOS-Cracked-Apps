//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QYQOSLog : NSObject
{
    NSString *_type;
    NSString *_sub_type;
    NSString *_dealTime;
    NSString *_totalTime;
    NSString *_requestTime;
    NSString *_data;
    NSString *_qipu_tv_id;
}

@property(copy, nonatomic) NSString *qipu_tv_id; // @synthesize qipu_tv_id=_qipu_tv_id;
@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *requestTime; // @synthesize requestTime=_requestTime;
@property(copy, nonatomic) NSString *totalTime; // @synthesize totalTime=_totalTime;
@property(copy, nonatomic) NSString *dealTime; // @synthesize dealTime=_dealTime;
@property(copy, nonatomic) NSString *sub_type; // @synthesize sub_type=_sub_type;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

