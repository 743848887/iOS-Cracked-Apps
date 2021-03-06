//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FTSMsgEngineDelegate.h"
#import "QC2CRoamMessageDelegate.h"
#import "QMsgSpliteMergeProtocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString, NSTimer, QQBaseChatUIOperation, QQMessageModel;

@interface QQBaseChatMessage : NSObject <QC2CRoamMessageDelegate, FTSMsgEngineDelegate, QMsgSpliteMergeProtocol>
{
    QQBaseChatUIOperation *_chatUIOperation;
    int _roamTroopMsgSeq;
    int _getRoamMsgTime;
    NSTimer *_startRefreshTimer;
    long long _minSeq;
    long long _minMsgID;
    int _minTime;
    QQMessageModel *_minModel;
    NSArray *_msgTmpList;
    long long _beginMsgTime;
    long long _endMsgTime;
    id _lastMsgModel;
    _Bool _isNeedAddOrigin;
    QQMessageModel *_friendOriginModel;
    int _requestCount;
    _Bool _hasAcceptMsgTip;
    _Bool _bHasInsertUnreadMark;
    _Bool unreadMarkShouldScroll;
    int _unReadCountRecord;
    int _MakeUpMsgNumber;
    long long _lastMaxSeq;
    _Bool _hasBreakUp;
    int _noRoamMessage;
    id <QQBaseChatMessageDelegate> _delegate;
    _Bool _ftsCertainMsg;
    NSMutableDictionary *_dynamicMsgRecords;
    NSMutableDictionary *_dynamicDeleteInfo;
    int _xo;
    _Bool _c2cMsgEmptyAutoRefresh;
    unsigned int _c2cMsgEmptyAutoRefreshLimitCount;
    _Bool _bHasInsertHistoricalSplitLine;
    struct {
        _Bool isLatestRichStateLoaded;
        unsigned long long minTimeOfPreviousPage;
    } _richStateInsertInfo;
    struct {
        _Bool isLatestQZNewestFeedLoaded;
        unsigned long long minTimeOfPreviousPage;
        _Bool isExposureReported;
    } _qzNewestFeedInsertInfo;
    _Bool hasCalculateUnReadEmojiStick;
    NSDictionary *UnreadEmojiStickGrayInfo;
    NSMutableDictionary *unFindHostEmojiStickList;
    _Bool _isFisrtLoadGroupMsg;
    _Bool _unreadMarkShouldScroll;
    long long _lastReadTime;
    double _groupMsgLoadBeginTime;
    NSMutableDictionary *_emojiStickMsgs;
}

@property(retain, nonatomic) NSMutableDictionary *emojiStickMsgs; // @synthesize emojiStickMsgs=_emojiStickMsgs;
@property(nonatomic) _Bool unreadMarkShouldScroll; // @synthesize unreadMarkShouldScroll=_unreadMarkShouldScroll;
@property(nonatomic) double groupMsgLoadBeginTime; // @synthesize groupMsgLoadBeginTime=_groupMsgLoadBeginTime;
@property(nonatomic) _Bool isFisrtLoadGroupMsg; // @synthesize isFisrtLoadGroupMsg=_isFisrtLoadGroupMsg;
@property(readonly, nonatomic) long long minSeq; // @synthesize minSeq=_minSeq;
@property(nonatomic) long long lastReadTime; // @synthesize lastReadTime=_lastReadTime;
- (void)clearAllEmojiStickMessage;
- (_Bool)removeEmojiStick:(id)arg1 isRecall:(_Bool)arg2;
- (void)showUnreadEmojiStickIfNeed;
- (void)calculateUnreadEmojiStick:(id)arg1 unreadCount:(unsigned long long)arg2;
- (void)insertHistoricalSplitLine;
- (void)_refreshC2CMsgStartRefreshWithCount;
- (void)ftsAIOScrollToEndIfNeed;
- (void)ftsHandleAIOTroopMsg:(id)arg1 msgList:(id)arg2;
- (void)ftsHandleAIOC2CMsg:(id)arg1 msgList:(id)arg2;
- (void)ftsHandleAIOMessageWithUid:(id)arg1 sessionType:(long long)arg2 msgList:(id)arg3;
- (void)actionMakeUpBreakUp:(id)arg1;
- (struct CGRect)getItemRectbyMsgSeq:(long long)arg1;
- (id)insertUnreadMark:(id)arg1;
- (int)getIndexFromChatMessage:(long long)arg1;
- (int)getUnreadMarkIndexFromChatMessage;
- (void)checkSeqAction;
- (void)getGroupMessage:(id)arg1 toGroupSeq:(long long)arg2;
- (id)filterMessageList:(id)arg1;
- (id)getDuplicateMessage:(id)arg1;
- (_Bool)_isValidMsgSeqFromMessage:(id)arg1;
- (void)_reloadTableWithMsgArray:(id)arg1;
- (void)_refreshGroupMsgStartRefreshWithCount;
- (void)_refreshGroupMsg;
- (long long)_getValidMsgSeqFromDataSource;
- (void)_getRoamMsgTimeout:(id)arg1;
- (id)_handleC2CRoamMsg;
- (id)checkWeatherTextMsg:(id)arg1;
- (id)checkLongMessage:(id)arg1 andNeedDwon:(_Bool)arg2;
- (id)largeMsgIDsFromMinModel;
- (void)handleBabyQLoadMoreMessage;
- (void)handleC2CRoamMsg;
- (void)_GetOffLineTroopMessageAction:(id)arg1;
- (void)hotChatGroupGayTipsRemoveDouble:(id)arg1;
- (void)showGroupPublishMessageDelay:(id)arg1;
- (void)invokeDidGetAllOffLineTroopMessageDelegate;
- (void)_amendTroopPttMsgReadStatus:(id)arg1 oriMsgList:(id)arg2;
- (_Bool)deleteEmptyPttMsg:(id)arg1;
- (id)filterDuplicateSeqGroupMsg:(id)arg1;
- (id)filterInvalidGroupMsg:(id)arg1;
- (id)filterNearbyLiveMsg:(id)arg1;
- (id)filterEmptyPttMsg:(id)arg1;
- (void)asynMsgListByInsertingLatestRichSigInToList:(id)arg1;
- (void)asynMsgListByInsertingLatestNewestQZoneFeedList:(id)arg1;
- (void)processInsertNewestQzoneFeedList:(id)arg1 msgList:(id)arg2;
- (void)setQZNewestFeedLoaded;
- (_Bool)isEmptyPttMsg:(id)arg1;
- (id)messageModelIfInsertEmojiTickGrayTip:(unsigned long long)arg1;
- (id)insertEmojiTickGrayTipIfNeed:(id)arg1;
- (void)insertEmojiGrayUnreadTipOrNot:(id)arg1;
- (void)operateUIActionWithMessages:(id)arg1 isFirstLoad:(_Bool)arg2;
- (_Bool)msgEmptyAutoRefreshIfNeed;
- (void)c2cMsgEmptyAutoRefresh;
- (void)actionC2CMessage:(id)arg1;
- (void)handleC2CRoamMessage:(id)arg1 msgList:(id)arg2;
- (void)insertContactMobilePhoneUnvailable;
- (void)insertContactNotBindMessage:(_Bool)arg1;
- (void)insertAddFriendHintMessage;
- (_Bool)insertFriendTipsMessageIfNeed;
- (void)emojiStickCacheInsertAIOModel:(id)arg1;
- (id)keyWithEmojiStickMsgModel:(id)arg1;
- (void)insertUnFindStickerGrayTipsTroop:(id)arg1;
- (void)insertUnFindStickerGrayTipsC2C:(id)arg1;
- (void)removeStickerMsgAndInsertDeleteMsgGrayTips:(id)arg1;
- (id)cellArrayForTable:(id)arg1;
- (id)getMessagePicInfo:(id)arg1 inArray:(id)arg2;
- (void)startRefresh:(id)arg1;
- (void)handleGroupMessage;
- (void)handleGroupMessage:(id)arg1 userInfo:(id)arg2:(id)arg3:(long long)arg4;
- (void)handleGroupMessageSilent:(id)arg1 userInfo:(id)arg2:(id)arg3:(long long)arg4;
- (void)setMinModelFromMessageList:(id)arg1;
- (void)clearMinMsgIDAndMsgSeq;
- (void)setMinMsgIDFromMessageList:(long long)arg1;
- (long long)getMinMsgIDFromMessageList:(id)arg1;
- (void)setMinSeqFromMessageList:(long long)arg1;
- (long long)getMinSeqFromAIOModelList:(id)arg1;
- (long long)getMinSeqFromMessageList:(id)arg1;
- (void)dealloc;
- (id)initWithBaseChatUIOperation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <QQBaseChatMessageDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) QQMessageModel *friendOriginModel; // @dynamic friendOriginModel;
@property(nonatomic) _Bool ftsCertainMsg; // @dynamic ftsCertainMsg;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) QQMessageModel *minModel; // @dynamic minModel;
@property(nonatomic) int noRoamMessage; // @dynamic noRoamMessage;
@property(readonly) Class superclass;
@property(nonatomic) int unReadCountRecord; // @dynamic unReadCountRecord;

@end

