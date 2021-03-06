//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQSharkRequestDelegate-Protocol.h"
#import "MQQWiFiTestPingDelegate-Protocol.h"

@class DBOWiFiTestDeviceOp, MQQMacToProviderRequest, NSMutableArray, NSMutableDictionary, NSString;
@protocol MQQWiFiTestDeviceScannerDelegate, OS_dispatch_queue;

@interface MQQWiFiTestDeviceScanner : NSObject <MQQWiFiTestPingDelegate, MQQSharkRequestDelegate>
{
    _Bool _isScanning;
    NSMutableDictionary *_pings;
    NSString *_ipAddressHeader;
    long long _selfIpTail;
    NSMutableArray *_scanningList;
    long long _currentScanIndex;
    NSMutableArray *_avaibleDeviceList;
    NSObject<OS_dispatch_queue> *_pingQueue;
    DBOWiFiTestDeviceOp *_deviceDB;
    id <MQQWiFiTestDeviceScannerDelegate> _delegate;
    double _lastCompleteTimeInterval;
    long long _addConcurrentCount;
    MQQMacToProviderRequest *macToProviderRequest;
}

@property(retain, nonatomic) MQQMacToProviderRequest *macToProviderRequest; // @synthesize macToProviderRequest;
@property(readonly, nonatomic) _Bool isScanning; // @synthesize isScanning=_isScanning;
@property(nonatomic) id <MQQWiFiTestDeviceScannerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sharkRequestDidFail:(id)arg1;
- (void)sharkRequestDidFinish:(id)arg1 withInfo:(id)arg2;
- (void)ping:(id)arg1 recieveIpAddress:(id)arg2 packet:(id)arg3;
- (void)ping:(id)arg1 result:(_Bool)arg2;
- (void)loadDeviceDB;
- (id)macAddressString:(unsigned long long)arg1;
- (void)mergeReduplicateDevices;
- (void)addMissDeviceFromArpTable:(id)arg1;
- (_Bool)updateAvaibleDeviceListWithArpTable:(id)arg1 updateVendor:(_Bool)arg2;
- (void)stopScanningBecauseEnteringBackground;
- (void)stopScanningBecauseNetworkChanged;
- (void)stopMonitoringEvents;
- (void)startMonitoringEvents;
- (void)stopScanningWithError:(long long)arg1;
- (void)finishScanning;
- (void)stopAllPingAndClearDelegate;
- (_Bool)scanNextIpAddress:(_Bool)arg1;
- (void)updateScanningList;
- (id)wifiName;
- (void)clearupAllRequest;
- (void)stopScanning;
- (void)additionCheck;
- (void)startScanning;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

