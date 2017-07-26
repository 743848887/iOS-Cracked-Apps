//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface FinanceExtendPayWayInformationModel : CTBusinessBean
{
    NSString *brandId;
    NSString *brandType;
    NSString *channelId;
    NSString *paymentWayID;
    PriceType *canUsedBalance;
    PriceType *totalBalance;
    PriceType *frozenBalance;
    PriceType *useMinLimitBalance;
    NSString *fncExPaySwitchTxt;
    int status;
}

@property(nonatomic) int status; // @synthesize status;
@property(copy, nonatomic) NSString *fncExPaySwitchTxt; // @synthesize fncExPaySwitchTxt;
@property(retain, nonatomic) PriceType *useMinLimitBalance; // @synthesize useMinLimitBalance;
@property(retain, nonatomic) PriceType *frozenBalance; // @synthesize frozenBalance;
@property(retain, nonatomic) PriceType *totalBalance; // @synthesize totalBalance;
@property(retain, nonatomic) PriceType *canUsedBalance; // @synthesize canUsedBalance;
@property(copy, nonatomic) NSString *paymentWayID; // @synthesize paymentWayID;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId;
@property(copy, nonatomic) NSString *brandType; // @synthesize brandType;
@property(copy, nonatomic) NSString *brandId; // @synthesize brandId;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end
