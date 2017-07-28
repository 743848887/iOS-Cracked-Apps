//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, XDb, XMessage, XMessageCenterData, XMessageCenterItem, XSession;

@protocol XMessageCenterProtocol <NSObject>
- (void)acceptSummaryInfo:(NSArray *)arg1 inDb:(XDb *)arg2 withReason:(NSString *)arg3;
- (void)syncNextPageHistroyOn:(void (^)(_Bool, PResult *, _Bool))arg1;
- (XMessageCenterItem *)itemForSession:(XSession *)arg1;
- (XMessageCenterItem *)itemOf:(NSString *)arg1;
- (void)deliverSession:(XSession *)arg1;
- (void)deliverMsg:(XMessage *)arg1;
- (void)deleteItem:(XMessageCenterItem *)arg1;
- (void)unmarkTopn:(XMessageCenterItem *)arg1;
- (void)markTopn:(XMessageCenterItem *)arg1;
- (void)markMsgRead:(XMessage *)arg1;
- (void)markMsgReadWithSid:(unsigned long long)arg1 ver:(unsigned long long)arg2 seq:(int)arg3 uid:(unsigned long long)arg4;
- (void)clearSessionUnreadCount:(unsigned long long)arg1 count:(int)arg2;
- (void)markSessionReadWithSid:(unsigned long long)arg1;
- (void)markSessionRead:(XSession *)arg1;
- (void)markRead:(XMessageCenterItem *)arg1;
- (XMessageCenterData *)data;
@end
