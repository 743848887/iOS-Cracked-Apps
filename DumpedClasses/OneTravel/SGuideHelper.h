//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface SGuideHelper : NSObject
{
    NSString *_guideSessionId;
    NSMutableDictionary *_guideSceneDic;
}

@property(retain, nonatomic) NSMutableDictionary *guideSceneDic; // @synthesize guideSceneDic=_guideSceneDic;
@property(copy, nonatomic) NSString *guideSessionId; // @synthesize guideSessionId=_guideSessionId;
- (void).cxx_destruct;
- (_Bool)hasScene:(id)arg1 sessionId:(id)arg2;
- (void)setHasScene:(id)arg1 sessionId:(id)arg2;
- (id)init;

@end

