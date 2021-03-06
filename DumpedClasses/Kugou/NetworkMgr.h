//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition;

@interface NetworkMgr : NSObject
{
    _Bool m_isConnected;
    _Bool m_isWideNet;
    NSCondition *_netlock;
}

+ (id)networkMgrInstance;
- (void)setNetworkState;
- (_Bool)isWideNet;
- (_Bool)isNetConnected;
- (id)init;
- (void)checkNetTimerProc;

@end

