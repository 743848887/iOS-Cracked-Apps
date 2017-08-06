//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LiveAvatarURLModel, LiveImageModel, LiveUserModel, NSString;

@interface SendGiftMode : NSObject
{
    LiveUserModel *_user;
    LiveAvatarURLModel *_avatarImgMode;
    LiveImageModel *_giftIconMode;
    NSString *_giftDescription;
    NSString *_nickName;
    unsigned long long _giftID;
    unsigned long long _userID;
    unsigned long long _fanTicketCount;
    unsigned long long _repeatCount;
}

+ (id)createSendGiftModeFromGiftMessage:(id)arg1;
@property(nonatomic) unsigned long long repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) unsigned long long fanTicketCount; // @synthesize fanTicketCount=_fanTicketCount;
@property(nonatomic) unsigned long long userID; // @synthesize userID=_userID;
@property(nonatomic) unsigned long long giftID; // @synthesize giftID=_giftID;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *giftDescription; // @synthesize giftDescription=_giftDescription;
@property(retain, nonatomic) LiveImageModel *giftIconMode; // @synthesize giftIconMode=_giftIconMode;
@property(retain, nonatomic) LiveAvatarURLModel *avatarImgMode; // @synthesize avatarImgMode=_avatarImgMode;
@property(retain, nonatomic) LiveUserModel *user; // @synthesize user=_user;
- (void).cxx_destruct;

@end
