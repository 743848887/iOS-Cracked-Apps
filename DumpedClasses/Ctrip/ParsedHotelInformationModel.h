//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface ParsedHotelInformationModel : CTBusinessBean
{
    long long _hotelId;
    NSString *_hotelName;
    NSString *_address;
    NSString *_image;
    NSString *_checkInDate;
    NSString *_checkOutDate;
}

@property(copy, nonatomic) NSString *checkOutDate; // @synthesize checkOutDate=_checkOutDate;
@property(copy, nonatomic) NSString *checkInDate; // @synthesize checkInDate=_checkInDate;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *hotelName; // @synthesize hotelName=_hotelName;
@property(nonatomic) long long hotelId; // @synthesize hotelId=_hotelId;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
