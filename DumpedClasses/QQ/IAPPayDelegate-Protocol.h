//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, RequestInfo;

@protocol IAPPayDelegate <NSObject>

@optional
- (void)onNetWorkEorror:(int)arg1 withRequestInfo:(RequestInfo *)arg2;
- (void)onDistributeGoodsFailue:(RequestInfo *)arg1 withErrorMessage:(NSString *)arg2 withErrorCode:(int)arg3;
- (void)onDistributeGoodsFinish:(RequestInfo *)arg1;
- (void)onIAPPayFailue:(RequestInfo *)arg1 withError:(NSError *)arg2;
- (void)onGetProductInfoFailue:(RequestInfo *)arg1 error:(NSError *)arg2;
- (void)onIAPPaymentSucess:(RequestInfo *)arg1;
- (void)onOrderFailue:(RequestInfo *)arg1 withErrorMessage:(NSString *)arg2 withErrorCode:(int)arg3;
- (void)onOrderFinish:(NSString *)arg1 withRequestInfo:(RequestInfo *)arg2;
- (void)onLoginExpiry:(RequestInfo *)arg1;
- (void)log:(NSString *)arg1;
- (void)parameterWrong:(NSString *)arg1;
@end

