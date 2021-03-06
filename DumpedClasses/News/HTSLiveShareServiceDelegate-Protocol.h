//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HTSShareModel, LiveRoomModel, LiveUserModel, UIViewController;

@protocol HTSLiveShareServiceDelegate <NSObject>
- (_Bool)shareSinaWeiboAvailable;
- (_Bool)shareQQAvailable;
- (_Bool)shareWeChatAvailable;
- (void)shareWithModel:(HTSShareModel *)arg1 user:(LiveUserModel *)arg2 type:(long long)arg3;
- (void)shareRoom:(LiveRoomModel *)arg1 type:(long long)arg2 controller:(UIViewController *)arg3;
- (void)shareWatchingRoom:(LiveRoomModel *)arg1 controller:(UIViewController *)arg2;
@end

