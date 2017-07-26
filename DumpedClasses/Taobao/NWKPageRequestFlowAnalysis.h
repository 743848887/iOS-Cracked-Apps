//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSRecursiveLock;

@interface NWKPageRequestFlowAnalysis : NSObject
{
    NSMutableArray *_flowRecords;
    NSMutableArray *_pvRecords;
    NSRecursiveLock *_lock;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *pvRecords; // @synthesize pvRecords=_pvRecords;
@property(retain, nonatomic) NSMutableArray *flowRecords; // @synthesize flowRecords=_flowRecords;
- (void).cxx_destruct;
- (void)pre_reportPageRequestAvgFlow:(id)arg1 findPVRecord:(_Bool *)arg2;
- (void)applicationEnterBackground;
- (void)calculatePageAvgFlow:(_Bool)arg1;
- (void)pageVisitInfoStore:(id)arg1;
- (void)pageVisitInfoStore:(id)arg1 weburl:(id)arg2 entryPageTime:(double)arg3 leavePageTime:(double)arg4;
- (void)pageRequestInfoStore:(id)arg1;
- (void)registerPageAvgFlowTable;
- (id)init;

@end
