//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class QLJCEVipUserInfo;

@interface QLJCEVipUserInfoResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    QLJCEVipUserInfo *jcev2_p_1_o_vipUserInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_vipUserInfo, setter=setJce_vipUserInfo:) QLJCEVipUserInfo *jcev2_p_1_o_vipUserInfo; // @synthesize jcev2_p_1_o_vipUserInfo;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end
