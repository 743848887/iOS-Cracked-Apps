//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface APVoiceResourceUploadTask : NSObject
{
    NSString *_localId;
    NSString *_clientMsgId;
    NSString *_business;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _voiceBlock;
    long long _maxRetryTimes;
}

@property(nonatomic) long long maxRetryTimes; // @synthesize maxRetryTimes=_maxRetryTimes;
@property(copy, nonatomic) CDUnknownBlockType voiceBlock; // @synthesize voiceBlock=_voiceBlock;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) NSString *business; // @synthesize business=_business;
@property(retain, nonatomic) NSString *clientMsgId; // @synthesize clientMsgId=_clientMsgId;
@property(retain, nonatomic) NSString *localId; // @synthesize localId=_localId;
- (void).cxx_destruct;
- (id)init;

@end
