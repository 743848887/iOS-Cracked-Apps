//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEGiveMovieRequest : JceObjectV2
{
    NSString *jcev2_p_0_r_dataKey;
    NSString *jcev2_p_1_o_cid;
    NSString *jcev2_p_2_o_vid;
    NSString *jcev2_p_3_o_lid;
    NSString *jcev2_p_4_o_pid;
    NSString *jcev2_p_5_o_nickName;
    NSString *jcev2_p_6_o_headerUrl;
    NSString *jcev2_p_7_o_channel;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_channel, setter=setJce_channel:) NSString *jcev2_p_7_o_channel; // @synthesize jcev2_p_7_o_channel;
@property(retain, nonatomic, getter=jce_headerUrl, setter=setJce_headerUrl:) NSString *jcev2_p_6_o_headerUrl; // @synthesize jcev2_p_6_o_headerUrl;
@property(retain, nonatomic, getter=jce_nickName, setter=setJce_nickName:) NSString *jcev2_p_5_o_nickName; // @synthesize jcev2_p_5_o_nickName;
@property(retain, nonatomic, getter=jce_pid, setter=setJce_pid:) NSString *jcev2_p_4_o_pid; // @synthesize jcev2_p_4_o_pid;
@property(retain, nonatomic, getter=jce_lid, setter=setJce_lid:) NSString *jcev2_p_3_o_lid; // @synthesize jcev2_p_3_o_lid;
@property(retain, nonatomic, getter=jce_vid, setter=setJce_vid:) NSString *jcev2_p_2_o_vid; // @synthesize jcev2_p_2_o_vid;
@property(retain, nonatomic, getter=jce_cid, setter=setJce_cid:) NSString *jcev2_p_1_o_cid; // @synthesize jcev2_p_1_o_cid;
@property(retain, nonatomic, getter=jce_dataKey, setter=setJce_dataKey:) NSString *jcev2_p_0_r_dataKey; // @synthesize jcev2_p_0_r_dataKey;
- (void).cxx_destruct;
- (id)init;

@end

