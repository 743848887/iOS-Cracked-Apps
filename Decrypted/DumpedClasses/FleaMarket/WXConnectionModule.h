//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXModuleProtocol.h"

@class NSString, WXSDKInstance;

@interface WXConnectionModule : NSObject <WXModuleProtocol>
{
    CDUnknownBlockType _netStatusChangedCallback;
}

+ (id)wx_export_method_24;
+ (id)wx_export_method_23;
+ (id)wx_export_method_sync_22;
+ (id)wx_export_method_sync_21;
+ (id)wx_export_method_sync_20;
@property(copy, nonatomic) CDUnknownBlockType netStatusChangedCallback; // @synthesize netStatusChangedCallback=_netStatusChangedCallback;
- (void).cxx_destruct;
- (void)networkChanged:(id)arg1;
- (void)removeEventListener:(id)arg1;
- (void)addEventListener:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)getDownlinkMax;
- (id)getNetworkType;
- (id)getType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak WXSDKInstance *weexInstance;

@end
