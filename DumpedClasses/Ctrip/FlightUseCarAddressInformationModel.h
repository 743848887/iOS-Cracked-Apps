//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightUseCarAddressInformationModel : CTBusinessBean
{
    NSString *_addressTitle;
    NSString *_addressDetail;
    NSString *_longitude;
    NSString *_latitude;
    NSString *_cityName;
    NSString *_encryptLocation;
}

@property(copy, nonatomic) NSString *encryptLocation; // @synthesize encryptLocation=_encryptLocation;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(copy, nonatomic) NSString *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSString *addressDetail; // @synthesize addressDetail=_addressDetail;
@property(copy, nonatomic) NSString *addressTitle; // @synthesize addressTitle=_addressTitle;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

