//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQQConfigUpdater, NSData, NSDate;

@interface MQQSoftwareUsageManager : NSObject
{
    NSData *_bigGodConfigData;
    long long _mqqChristmasDay;
    MQQConfigUpdater *_updater;
    NSDate *_lastUltimateDate;
}

+ (id)shareSoftwareUsageManager;
@property(retain, nonatomic) NSDate *lastUltimateDate; // @synthesize lastUltimateDate=_lastUltimateDate;
@property(retain, nonatomic) MQQConfigUpdater *updater; // @synthesize updater=_updater;
@property(nonatomic) long long mqqChristmasDay; // @synthesize mqqChristmasDay=_mqqChristmasDay;
@property(retain, nonatomic) NSData *bigGodConfigData; // @synthesize bigGodConfigData=_bigGodConfigData;
- (void)softwareUsageUltimate;
- (id)stringForSoftwareUsageId:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

