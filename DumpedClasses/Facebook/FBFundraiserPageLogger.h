//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface FBFundraiserPageLogger : NSObject
{
    NSString *_sourceKey;
    NSString *_loggingKey;
    NSDictionary *_extras;
}

- (void).cxx_destruct;
- (id)_mergedExtraBlockWithNewExtras:(id)arg1;
- (void)logEvent:(id)arg1 extraInfo:(id)arg2;
- (void)logPageDisplayed:(id)arg1 source:(id)arg2;
- (id)logFailureConditionsForID:(id)arg1 withObject:(id)arg2;
- (id)initWithFundraiserPageSourceKey:(id)arg1 loggingKey:(id)arg2 trackingData:(id)arg3;

@end

