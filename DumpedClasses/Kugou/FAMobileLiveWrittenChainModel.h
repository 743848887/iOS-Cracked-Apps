//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAModel.h"

@class NSString;

@interface FAMobileLiveWrittenChainModel : FAModel
{
    _Bool _isInterviewRoom;
    _Bool _isPk;
    long long _interviewRoomId;
    long long _userId;
    long long _roomId;
    NSString *_image;
    long long _focusId;
    NSString *_url;
    long long _writtenType;
    NSString *_kugouId;
    NSString *_concertId;
    long long _concertType;
    long long _streamType;
    long long _liveMode;
    NSString *_title;
    NSString *_viceTitle;
    NSString *_releasePosition;
    long long _baiduCode;
}

@property(nonatomic) long long baiduCode; // @synthesize baiduCode=_baiduCode;
@property(copy, nonatomic) NSString *releasePosition; // @synthesize releasePosition=_releasePosition;
@property(copy, nonatomic) NSString *viceTitle; // @synthesize viceTitle=_viceTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isPk; // @synthesize isPk=_isPk;
@property(nonatomic) long long liveMode; // @synthesize liveMode=_liveMode;
@property(nonatomic) long long streamType; // @synthesize streamType=_streamType;
@property(nonatomic) long long concertType; // @synthesize concertType=_concertType;
@property(copy, nonatomic) NSString *concertId; // @synthesize concertId=_concertId;
@property(copy, nonatomic) NSString *kugouId; // @synthesize kugouId=_kugouId;
@property(nonatomic) long long writtenType; // @synthesize writtenType=_writtenType;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long focusId; // @synthesize focusId=_focusId;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long interviewRoomId; // @synthesize interviewRoomId=_interviewRoomId;
@property(nonatomic) _Bool isInterviewRoom; // @synthesize isInterviewRoom=_isInterviewRoom;
- (void).cxx_destruct;

@end
