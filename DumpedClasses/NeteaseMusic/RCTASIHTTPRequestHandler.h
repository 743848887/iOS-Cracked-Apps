//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASIHTTPRequestDelegate.h"
#import "RCTInvalidating.h"
#import "RCTURLRequestHandler.h"

@class ASINetworkQueue, NSMapTable, NSObject<OS_dispatch_queue>, NSString, RCTBridge;

@interface RCTASIHTTPRequestHandler : NSObject <ASIHTTPRequestDelegate, RCTURLRequestHandler, RCTInvalidating>
{
    NSMapTable *_delegates;
    ASINetworkQueue *_networkQueue;
    RCTBridge *_bridge;
}

+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (float)handlerPriority;
- (void)cancelRequest:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)request:(id)arg1 didReceiveData:(id)arg2;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (id)_responseFotRequest:(id)arg1 andResponseHeaders:(id)arg2;
- (void)requestStarted:(id)arg1;
- (id)sendRequest:(id)arg1 withDelegate:(id)arg2;
- (_Bool)_requestShouldGotoTelecomProxy:(id)arg1;
- (id)_createRequest:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
- (void)dealloc;
- (void)invalidate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

