//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseDBObj.h"

#import "QQDBTaskQueueProtocol.h"

@class NSString;

@interface FTSDBObj : BaseDBObj <QQDBTaskQueueProtocol>
{
}

+ (_Bool)safeDoeExecuteUpdate:(id)arg1 Sql:(id)arg2;
+ (int)doAsyncOperation:(SEL)arg1 target:(id)arg2 userdata:(id)arg3 callback:(id)arg4;
+ (unsigned long long)getFTSDBFileSize;
+ (id)getDBPath:(id)arg1;
+ (id)doDbOperation:(SEL)arg1 target:(id)arg2;
+ (id)currentDB;
+ (void)registDBKey;
- (void)forceClose;
- (void)willChangeAccount:(id)arg1;
- (void)onTaskQueueIdle;
- (void)dealloc;
- (id)doDbOperation:(SEL)arg1 tableSign:(unsigned long long)arg2 va:(char *)arg3 async:(_Bool)arg4;
- (id)initWithUin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

