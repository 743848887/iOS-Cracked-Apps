//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXModuleProtocol.h"

@class NSString, WXSDKInstance;

@interface NVMEAPWeexAPPInfoModule : NSObject <WXModuleProtocol>
{
    WXSDKInstance *weexInstance;
}

+ (id)wx_export_method_31;
+ (id)wx_export_method_30;
+ (id)wx_export_method_29;
+ (id)wx_export_method_28;
+ (id)wx_export_method_27;
+ (id)wx_export_method_26;
+ (id)wx_export_method_25;
+ (id)wx_export_method_24;
+ (id)wx_export_method_23;
+ (id)wx_export_method_22;
+ (id)wx_export_method_21;
+ (id)wx_export_method_20;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)defaultHeightOfTopBar:(CDUnknownBlockType)arg1;
- (void)networkType:(CDUnknownBlockType)arg1;
- (void)fallbackToWeb;
- (void)removeRightBarItems;
- (void)showRightBarItems:(id)arg1;
- (void)closePage;
- (void)setTitle:(id)arg1;
- (void)selectCoupon:(id)arg1;
- (void)selectHongbao:(id)arg1;
- (void)getUserID:(CDUnknownBlockType)arg1;
- (void)getGlobalGeohash:(CDUnknownBlockType)arg1;
- (void)getUserLocation:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

