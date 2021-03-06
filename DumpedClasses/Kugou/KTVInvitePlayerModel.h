//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KTVOpusInfo, KTVPlayerDetailInfo, KtvUserInfoHttpDAO, NSArray;

@interface KTVInvitePlayerModel : NSObject
{
    KtvUserInfoHttpDAO *opusDAO;
    int _playerid;
    KTVOpusInfo *_opusInfo;
    NSArray *_opusInfoArray;
    KTVPlayerDetailInfo *_playerDetailInfo;
    CDUnknownBlockType _getDataCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType getDataCompletionBlock; // @synthesize getDataCompletionBlock=_getDataCompletionBlock;
@property(retain, nonatomic) KTVPlayerDetailInfo *playerDetailInfo; // @synthesize playerDetailInfo=_playerDetailInfo;
@property(retain, nonatomic) NSArray *opusInfoArray; // @synthesize opusInfoArray=_opusInfoArray;
@property(retain, nonatomic) KTVOpusInfo *opusInfo; // @synthesize opusInfo=_opusInfo;
@property(nonatomic) int playerid; // @synthesize playerid=_playerid;
- (void).cxx_destruct;
- (void)getData;
- (id)init;

@end

