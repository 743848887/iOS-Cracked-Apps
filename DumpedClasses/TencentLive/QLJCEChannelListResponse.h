//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, QLJCEChannelListPersonalizeData;

@interface QLJCEChannelListResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    int jcev2_p_1_r_version;
    NSArray *jcev2_p_2_o_list__b0x9i_VOQLJCEChannelListItem;
    QLJCEChannelListPersonalizeData *jcev2_p_3_o_personalizeData;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_personalizeData, setter=setJce_personalizeData:) QLJCEChannelListPersonalizeData *jcev2_p_3_o_personalizeData; // @synthesize jcev2_p_3_o_personalizeData;
@property(retain, nonatomic, getter=jce_list, setter=setJce_list:) NSArray *jcev2_p_2_o_list__b0x9i_VOQLJCEChannelListItem; // @synthesize jcev2_p_2_o_list__b0x9i_VOQLJCEChannelListItem;
@property(nonatomic, getter=jce_version, setter=setJce_version:) int jcev2_p_1_r_version; // @synthesize jcev2_p_1_r_version;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end
