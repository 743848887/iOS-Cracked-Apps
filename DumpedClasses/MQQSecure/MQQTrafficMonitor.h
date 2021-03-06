//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBOTrafficAdjustOp, DBOTrafficOp, DBOTrafficSumOp, NSDate;

@interface MQQTrafficMonitor : NSObject
{
    DBOTrafficOp *_trafficOp;
    DBOTrafficSumOp *_trafficDaysOp;
    DBOTrafficAdjustOp *_trafficAdjustOp;
    double _lastDaysSumTime;
    long long _usedCellular;
    struct Traffic _todayUsedFlow;
    long long _todayAdjustFlow;
    _Bool _isUpdate;
    _Bool _isFirstMonthRecord;
    _Bool _inAdjusting;
    long long _missType;
    _Bool _shouldShowInCenter;
    _Bool _shouldShowInTraffic;
    NSDate *_today;
}

+ (id)shareTrafficMonitor;
@property(nonatomic) _Bool shouldShowInTraffic; // @synthesize shouldShowInTraffic=_shouldShowInTraffic;
@property(nonatomic) _Bool shouldShowInCenter; // @synthesize shouldShowInCenter=_shouldShowInCenter;
@property(readonly, nonatomic) long long missType; // @synthesize missType=_missType;
@property(nonatomic) _Bool inAdjusting; // @synthesize inAdjusting=_inAdjusting;
@property(nonatomic) _Bool isUpdate; // @synthesize isUpdate=_isUpdate;
- (_Bool)deleteAdjustFromThisMonth;
- (_Bool)updateAdjustDaily:(long long)arg1 withTimeInterval:(long long)arg2;
- (_Bool)insertAdjustForToday:(long long)arg1;
- (void)closeMissTips;
- (id)tipsInTraffic;
- (_Bool)checkMissTips;
- (void)markMissForSetBalance;
- (void)checkMissInNewBalance;
- (_Bool)shouldMarkedDownMiss;
- (_Bool)hasMissData;
- (_Bool)insertRecordForRebootTimeForNow;
- (_Bool)insertRecordForRebootTime;
- (id)lastLocation;
- (_Bool)insertLocation:(struct CLLocationCoordinate2D)arg1 isNewDate:(_Bool)arg2;
- (void)setCurrentLocationInfo:(id)arg1;
- (void)setCurrentLocation:(struct CLLocationCoordinate2D)arg1 date:(id)arg2 wifiFlow:(long long)arg3 cellularFlow:(long long)arg4;
- (id)currentLocationInfo;
- (long long)getTodayUsed;
- (id)getDetailRecordsOfThisMonth;
- (id)getDetailRecordsOfLastMonth;
- (void)adjustSumRecord:(id)arg1 from:(double)arg2 to:(double)arg3;
- (id)getDetailOfDaysFrom:(double)arg1 to:(double)arg2;
- (void)updateLastLeftFlowForNewMonth;
- (void)adjustSetting:(_Bool)arg1;
- (void)update;
- (struct Traffic)lastTrafficEx;
- (struct Traffic)lastTrafficIncrement;
- (struct Traffic)lastTraffic;
- (void)transferOldDatas;
- (void)transferOldDataAndSettings;
- (void)closeDatabase;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) long long todayAdjustFlow;
@property(nonatomic) struct Traffic todayUsedFlow;
@property(readonly, retain, nonatomic) NSDate *today;
- (void)clearCache;
- (_Bool)resetCellUsedFlow;
@property(nonatomic) long long cellUsedFlow;
- (long long)cellUsedFlowFrom:(double)arg1 to:(double)arg2;
- (void)synchronizeSharedData;
- (_Bool)cleanLocationFromTimeInterval:(long long)arg1 toTimeInterval:(long long)arg2;
- (_Bool)cleanLocation;
- (void)setExtensionDidHandleBanlance:(_Bool)arg1;
- (_Bool)extensionDidHandleBanlance;
- (void)setLastIncrementDate:(id)arg1;
- (id)lastIncrementDate;
- (void)clearExAll;
- (void)updateExIncomingValue:(long long)arg1 outgoingValue:(long long)arg2 forDevice:(id)arg3;
- (id)getExAll;
- (void)updateIncrementWithIncomingValue:(long long)arg1 outgoingValue:(long long)arg2 forDevice:(id)arg3;
- (id)getAllIncrement;
- (_Bool)setLastBalanceDate:(id)arg1;
- (id)lastBalanceDate;
- (_Bool)setLastRecordDate:(id)arg1;
- (id)lastRecordDate;
- (void)clearAll;
- (_Bool)getIncomingValue:(long long *)arg1 outgoingValue:(long long *)arg2 forDevice:(id)arg3;
- (_Bool)insertIncomingValue:(long long)arg1 outgoingValue:(long long)arg2 forDevice:(id)arg3;
- (id)getAll;

@end

