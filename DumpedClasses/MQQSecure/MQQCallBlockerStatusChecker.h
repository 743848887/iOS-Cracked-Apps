//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MQQCallBlockerStatusCheckerDelegate;

@interface MQQCallBlockerStatusChecker : NSObject
{
    double _startTimeStamp;
    double _lastTimeStamp;
    _Bool _isChecking;
    id <MQQCallBlockerStatusCheckerDelegate> _delegate;
    unsigned long long _backgroundTaskIdentifier;
}

+ (_Bool)isSupported;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(readonly, nonatomic) _Bool isChecking; // @synthesize isChecking=_isChecking;
@property(nonatomic) id <MQQCallBlockerStatusCheckerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_check;
- (void)_stopChecking;
- (_Bool)_shouldContinueChecking;
- (void)_stopBackgroundTask;
- (void)_startBackgroundTask;
- (void)stopChecking;
- (void)startChecking;
- (void)dealloc;

@end

