//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface NovaPriceNoticeTipReq : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *driveKilometre; // @dynamic driveKilometre;
@property(nonatomic) _Bool hasDriveKilometre; // @dynamic hasDriveKilometre;
@property(nonatomic) _Bool hasOrderId; // @dynamic hasOrderId;
@property(nonatomic) _Bool hasPriceCount; // @dynamic hasPriceCount;
@property(nonatomic) _Bool hasTimeCount; // @dynamic hasTimeCount;
@property(nonatomic) long long orderId; // @dynamic orderId;
@property(nonatomic) int priceCount; // @dynamic priceCount;
@property(nonatomic) int timeCount; // @dynamic timeCount;

@end

