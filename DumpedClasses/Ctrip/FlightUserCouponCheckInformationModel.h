//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface FlightUserCouponCheckInformationModel : CTBusinessBean
{
    int promotionID;
    NSString *couponCode;
    int couponTypeID;
    NSString *displayName;
    NSString *startDate;
    NSString *disableDate;
    int flag;
    int unitType;
    int deductionStrategyType;
    NSMutableArray *deductionStrategyList;
    NSString *extension;
    NSString *remark;
    NSString *paymentLimitInfo;
    int couponType;
    long long promotionNewID;
}

@property(nonatomic) long long promotionNewID; // @synthesize promotionNewID;
@property(nonatomic) int couponType; // @synthesize couponType;
@property(copy, nonatomic) NSString *paymentLimitInfo; // @synthesize paymentLimitInfo;
@property(copy, nonatomic) NSString *remark; // @synthesize remark;
@property(copy, nonatomic) NSString *extension; // @synthesize extension;
@property(retain, nonatomic) NSMutableArray *deductionStrategyList; // @synthesize deductionStrategyList;
@property(nonatomic) int deductionStrategyType; // @synthesize deductionStrategyType;
@property(nonatomic) int unitType; // @synthesize unitType;
@property(nonatomic) int flag; // @synthesize flag;
@property(copy, nonatomic) NSString *disableDate; // @synthesize disableDate;
@property(copy, nonatomic) NSString *startDate; // @synthesize startDate;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName;
@property(nonatomic) int couponTypeID; // @synthesize couponTypeID;
@property(copy, nonatomic) NSString *couponCode; // @synthesize couponCode;
@property(nonatomic) int promotionID; // @synthesize promotionID;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

