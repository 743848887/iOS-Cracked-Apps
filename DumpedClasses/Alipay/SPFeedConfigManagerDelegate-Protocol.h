//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SPFeedConfigManager, SPProfileFeedConfigItem;

@protocol SPFeedConfigManagerDelegate <NSObject>
- (void)feedConfigManager:(SPFeedConfigManager *)arg1 configFeedFailedWithReason:(NSString *)arg2;
- (void)feedConfigManager:(SPFeedConfigManager *)arg1 configItemFinish:(SPProfileFeedConfigItem *)arg2;
- (void)feedConfigManager:(SPFeedConfigManager *)arg1 fetchFeedConfigItemsFailedWithReason:(NSString *)arg2;
- (void)feedConfigManager:(SPFeedConfigManager *)arg1 fetchedFeedConfigItems:(NSArray *)arg2;
@end
