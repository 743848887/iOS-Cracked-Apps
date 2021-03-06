//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface TrainOrderTicketInfoV4Model : CTBusinessBean
{
    NSString *departStation;
    NSString *arriveStation;
    NSString *departureDateTime;
    NSString *arriveDateTime;
    NSString *trainNumber;
    PriceType *ticketPrice;
    NSString *seatName;
    int routeSequence;
    NSString *alternativeSeat;
    NSString *jLAlternativeTrain;
    NSString *jLAlternativeSeat;
    NSString *departureCityName;
    NSString *arrivalCityName;
    NSString *selectedSeat;
}

+ (id)modelContainerPropertyGenericClass;
@property(copy, nonatomic) NSString *selectedSeat; // @synthesize selectedSeat;
@property(copy, nonatomic) NSString *arrivalCityName; // @synthesize arrivalCityName;
@property(copy, nonatomic) NSString *departureCityName; // @synthesize departureCityName;
@property(copy, nonatomic) NSString *jLAlternativeSeat; // @synthesize jLAlternativeSeat;
@property(copy, nonatomic) NSString *jLAlternativeTrain; // @synthesize jLAlternativeTrain;
@property(copy, nonatomic) NSString *alternativeSeat; // @synthesize alternativeSeat;
@property(nonatomic) int routeSequence; // @synthesize routeSequence;
@property(copy, nonatomic) NSString *seatName; // @synthesize seatName;
@property(retain, nonatomic) PriceType *ticketPrice; // @synthesize ticketPrice;
@property(copy, nonatomic) NSString *trainNumber; // @synthesize trainNumber;
@property(copy, nonatomic) NSString *arriveDateTime; // @synthesize arriveDateTime;
@property(copy, nonatomic) NSString *departureDateTime; // @synthesize departureDateTime;
@property(copy, nonatomic) NSString *arriveStation; // @synthesize arriveStation;
@property(copy, nonatomic) NSString *departStation; // @synthesize departStation;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

