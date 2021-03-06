//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseHttpDao.h"

#import "KGCSCCProtocol.h"

@class NSString;

@interface APMHttpDao : BaseHttpDao <KGCSCCProtocol>
{
}

- (void)dealloc;
- (void)handleCSCCEvent:(id)arg1 eventType:(int)arg2;
- (id)networkType;
- (id)sysName;
- (id)osName;
- (id)moontype;
- (id)mType;
- (id)vipType;
- (int)is3rd;
- (id)key;
- (id)createInitParamsForPerformanceIndex;
- (id)createInitParams;
- (id)createInitParamsFaultTolerance:(id)arg1;
- (void)sendAPMInfo:(id)arg1 AndError:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

