//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KugouObject.h"

@class NSDictionary, NSString, ThreePartyBindInfo;

@interface MyDetailInfo : KugouObject
{
    NSString *_signature;
    long long _userID;
    NSString *_username;
    NSString *_nickname;
    NSString *_picture;
    NSString *_regtime;
    NSString *_servertime;
    long long _sex;
    NSString *_city;
    NSString *_province;
    NSString *_birthday;
    long long _constellation;
    NSString *_tags;
    long long _contactStatus;
    NSString *_QQ;
    NSString *_wechat;
    NSString *_loginMobile;
    NSString *_loginEmail;
    NSString *_securityEmail;
    long long _cityID;
    long long _provinceID;
    long long _maritalStatus;
    NSString *_occupation;
    NSString *_company;
    NSString *_school;
    NSString *_hobby;
    NSString *_offenAppear;
    long long _risk;
    long long _vipType;
    long long _mType;
    unsigned long long _yType;
    NSDictionary *_third_info;
    ThreePartyBindInfo *_qqInfo;
    ThreePartyBindInfo *_wechatInfo;
    ThreePartyBindInfo *_weiboInfo;
}

+ (id)createWithDictionary:(id)arg1;
@property(retain, nonatomic) ThreePartyBindInfo *weiboInfo; // @synthesize weiboInfo=_weiboInfo;
@property(retain, nonatomic) ThreePartyBindInfo *wechatInfo; // @synthesize wechatInfo=_wechatInfo;
@property(retain, nonatomic) ThreePartyBindInfo *qqInfo; // @synthesize qqInfo=_qqInfo;
@property(retain, nonatomic) NSDictionary *third_info; // @synthesize third_info=_third_info;
@property(nonatomic) unsigned long long yType; // @synthesize yType=_yType;
@property(nonatomic) long long mType; // @synthesize mType=_mType;
@property(nonatomic) long long vipType; // @synthesize vipType=_vipType;
@property(nonatomic) long long risk; // @synthesize risk=_risk;
@property(retain, nonatomic) NSString *offenAppear; // @synthesize offenAppear=_offenAppear;
@property(retain, nonatomic) NSString *hobby; // @synthesize hobby=_hobby;
@property(retain, nonatomic) NSString *school; // @synthesize school=_school;
@property(retain, nonatomic) NSString *company; // @synthesize company=_company;
@property(retain, nonatomic) NSString *occupation; // @synthesize occupation=_occupation;
@property(nonatomic) long long maritalStatus; // @synthesize maritalStatus=_maritalStatus;
@property(nonatomic) long long provinceID; // @synthesize provinceID=_provinceID;
@property(nonatomic) long long cityID; // @synthesize cityID=_cityID;
@property(retain, nonatomic) NSString *securityEmail; // @synthesize securityEmail=_securityEmail;
@property(retain, nonatomic) NSString *loginEmail; // @synthesize loginEmail=_loginEmail;
@property(retain, nonatomic) NSString *loginMobile; // @synthesize loginMobile=_loginMobile;
@property(retain, nonatomic) NSString *wechat; // @synthesize wechat=_wechat;
@property(retain, nonatomic) NSString *QQ; // @synthesize QQ=_QQ;
@property(nonatomic) long long contactStatus; // @synthesize contactStatus=_contactStatus;
@property(retain, nonatomic) NSString *tags; // @synthesize tags=_tags;
@property(nonatomic) long long constellation; // @synthesize constellation=_constellation;
@property(retain, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(nonatomic) long long sex; // @synthesize sex=_sex;
@property(retain, nonatomic) NSString *servertime; // @synthesize servertime=_servertime;
@property(retain, nonatomic) NSString *regtime; // @synthesize regtime=_regtime;
@property(retain, nonatomic) NSString *picture; // @synthesize picture=_picture;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) long long userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
- (void).cxx_destruct;

@end

