//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBAnnouncerBase.h>

#import "FBVideoHomeGuideDataFetcherListener-Protocol.h"

@class NSString;

@interface FBVideoHomeGuideDataFetcherListenerAnnouncer : FBAnnouncerBase <FBVideoHomeGuideDataFetcherListener>
{
}

- (void)videoHomeGuideDataFetcherDidMarkDataDirty:(id)arg1 withReason:(id)arg2;
- (void)videoHomeGuideDataFetcherDidClearDataAndRequests:(id)arg1;
- (void)videoHomeGuideDataFetcher:(id)arg1 didLoadUnits:(id)arg2 loadType:(unsigned long long)arg3 requestType:(unsigned long long)arg4 error:(id)arg5;
- (void)videoHomeGuideDataFetcherWillLoadUnits:(id)arg1 loadType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

