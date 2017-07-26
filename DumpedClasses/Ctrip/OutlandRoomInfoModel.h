//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString, PriceType;

@interface OutlandRoomInfoModel : CTBusinessBean
{
    int _roomID;
    int _quantity;
    int _passengers;
    int _payType;
    int _subPayType;
    int _hourSpan;
    int _checkAvID;
    int _shadowID;
    NSString *_passengerList;
    NSString *_passengerOfNewList;
    NSString *_checkInDate;
    NSString *_checkOutDate;
    NSString *_earlyArrivalTime;
    NSString *_ratePlanID;
    NSString *_traceRemark;
    NSString *_supplierCtx;
    NSMutableArray *_ticketGiftList;
    PriceType *_couponAmount;
    NSMutableArray *_addOptionalList;
    long long _rewardID;
    NSString *_lastArrivalTime;
}

@property(copy, nonatomic) NSString *lastArrivalTime; // @synthesize lastArrivalTime=_lastArrivalTime;
@property(nonatomic) long long rewardID; // @synthesize rewardID=_rewardID;
@property(retain, nonatomic) NSMutableArray *addOptionalList; // @synthesize addOptionalList=_addOptionalList;
@property(retain, nonatomic) PriceType *couponAmount; // @synthesize couponAmount=_couponAmount;
@property(retain, nonatomic) NSMutableArray *ticketGiftList; // @synthesize ticketGiftList=_ticketGiftList;
@property(copy, nonatomic) NSString *supplierCtx; // @synthesize supplierCtx=_supplierCtx;
@property(nonatomic) int shadowID; // @synthesize shadowID=_shadowID;
@property(copy, nonatomic) NSString *traceRemark; // @synthesize traceRemark=_traceRemark;
@property(copy, nonatomic) NSString *ratePlanID; // @synthesize ratePlanID=_ratePlanID;
@property(nonatomic) int checkAvID; // @synthesize checkAvID=_checkAvID;
@property(nonatomic) int hourSpan; // @synthesize hourSpan=_hourSpan;
@property(copy, nonatomic) NSString *earlyArrivalTime; // @synthesize earlyArrivalTime=_earlyArrivalTime;
@property(copy, nonatomic) NSString *checkOutDate; // @synthesize checkOutDate=_checkOutDate;
@property(copy, nonatomic) NSString *checkInDate; // @synthesize checkInDate=_checkInDate;
@property(nonatomic) int subPayType; // @synthesize subPayType=_subPayType;
@property(nonatomic) int payType; // @synthesize payType=_payType;
@property(copy, nonatomic) NSString *passengerOfNewList; // @synthesize passengerOfNewList=_passengerOfNewList;
@property(copy, nonatomic) NSString *passengerList; // @synthesize passengerList=_passengerList;
@property(nonatomic) int passengers; // @synthesize passengers=_passengers;
@property(nonatomic) int quantity; // @synthesize quantity=_quantity;
@property(nonatomic) int roomID; // @synthesize roomID=_roomID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
