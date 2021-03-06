//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "STPFormEncodable.h"

@class NSDictionary, NSString, STPAddress;

@interface STPCardParams : NSObject <STPFormEncodable>
{
    NSDictionary *_additionalAPIParameters;
    NSString *_number;
    unsigned long long _expMonth;
    unsigned long long _expYear;
    NSString *_cvc;
    NSString *_name;
    NSString *_addressLine1;
    NSString *_addressLine2;
    NSString *_addressCity;
    NSString *_addressState;
    NSString *_addressZip;
    NSString *_addressCountry;
    NSString *_currency;
}

+ (id)propertyNamesToFormFieldNamesMapping;
+ (id)rootObjectName;
@property(copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(copy, nonatomic) NSString *addressCountry; // @synthesize addressCountry=_addressCountry;
@property(copy, nonatomic) NSString *addressZip; // @synthesize addressZip=_addressZip;
@property(copy, nonatomic) NSString *addressState; // @synthesize addressState=_addressState;
@property(copy, nonatomic) NSString *addressCity; // @synthesize addressCity=_addressCity;
@property(copy, nonatomic) NSString *addressLine2; // @synthesize addressLine2=_addressLine2;
@property(copy, nonatomic) NSString *addressLine1; // @synthesize addressLine1=_addressLine1;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *cvc; // @synthesize cvc=_cvc;
@property(nonatomic) unsigned long long expYear; // @synthesize expYear=_expYear;
@property(nonatomic) unsigned long long expMonth; // @synthesize expMonth=_expMonth;
@property(copy, nonatomic) NSString *number; // @synthesize number=_number;
@property(copy, nonatomic) NSDictionary *additionalAPIParameters; // @synthesize additionalAPIParameters=_additionalAPIParameters;
- (void).cxx_destruct;
@property(copy, nonatomic) STPAddress *address;
- (id)last4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

