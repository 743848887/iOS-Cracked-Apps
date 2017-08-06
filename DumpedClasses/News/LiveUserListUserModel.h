//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing.h"

@class LiveUserListAvatarURLModel, LivingUserListUserAttrs, NSNumber, NSString;

@interface LiveUserListUserModel : MTLModel <MTLJSONSerializing>
{
    _Bool _sinaVerified;
    NSNumber *_userID;
    LivingUserListUserAttrs *_livingRoomAttrs;
    LiveUserListAvatarURLModel *_avatarThumb;
}

+ (id)livingRoomAttrsJSONTransformer;
+ (id)avatarThumbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) LiveUserListAvatarURLModel *avatarThumb; // @synthesize avatarThumb=_avatarThumb;
@property(readonly, nonatomic) LivingUserListUserAttrs *livingRoomAttrs; // @synthesize livingRoomAttrs=_livingRoomAttrs;
@property(nonatomic) _Bool sinaVerified; // @synthesize sinaVerified=_sinaVerified;
@property(readonly, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
