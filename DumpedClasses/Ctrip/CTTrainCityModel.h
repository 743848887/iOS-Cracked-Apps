//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTTrainCityModel : NSObject
{
    _Bool _isFromPositionLocation;
    int _cityDataID;
    int _cityID;
    int _districtID;
    int _stationID;
    int _stationProperty;
    NSString *_cityName;
    NSString *_cityName_Combine;
    long long _countryEnum;
    NSString *_cityCode;
    NSString *_cityNameEn;
    NSString *_airportCode;
    NSString *_airportName;
    NSString *_airportNameEn;
    long long _hotFlag;
    long long _ctripCityID;
    NSString *_firstLetter;
    NSString *_cityName1;
}

@property(retain, nonatomic) NSString *cityName1; // @synthesize cityName1=_cityName1;
@property(retain, nonatomic) NSString *firstLetter; // @synthesize firstLetter=_firstLetter;
@property(nonatomic) long long ctripCityID; // @synthesize ctripCityID=_ctripCityID;
@property(nonatomic) long long hotFlag; // @synthesize hotFlag=_hotFlag;
@property(nonatomic) _Bool isFromPositionLocation; // @synthesize isFromPositionLocation=_isFromPositionLocation;
@property(copy, nonatomic) NSString *airportNameEn; // @synthesize airportNameEn=_airportNameEn;
@property(copy, nonatomic) NSString *airportName; // @synthesize airportName=_airportName;
@property(copy, nonatomic) NSString *airportCode; // @synthesize airportCode=_airportCode;
@property(nonatomic) int stationProperty; // @synthesize stationProperty=_stationProperty;
@property(nonatomic) int stationID; // @synthesize stationID=_stationID;
@property(copy, nonatomic) NSString *cityNameEn; // @synthesize cityNameEn=_cityNameEn;
@property(nonatomic) int districtID; // @synthesize districtID=_districtID;
@property(copy, nonatomic) NSString *cityCode; // @synthesize cityCode=_cityCode;
@property(nonatomic) long long countryEnum; // @synthesize countryEnum=_countryEnum;
@property(copy, nonatomic) NSString *cityName_Combine; // @synthesize cityName_Combine=_cityName_Combine;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(nonatomic) int cityID; // @synthesize cityID=_cityID;
@property(nonatomic) int cityDataID; // @synthesize cityDataID=_cityDataID;
- (void).cxx_destruct;
- (id)init;

@end

