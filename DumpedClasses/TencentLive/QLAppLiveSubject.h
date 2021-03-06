//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, QLJCELiveVoteSubject;

@interface QLAppLiveSubject : NSObject
{
    int optionType;
    int _voteStatusType;
    NSString *title;
    long long subjectID;
    NSArray *optionInfo;
    long long _voteCount;
    NSString *_imageUrl;
    long long _selectMax;
    NSArray *_answerInfo;
    NSArray *_votedOptionIds;
    QLJCELiveVoteSubject *_jceVoteSubject;
}

+ (id)Subject:(id)arg1;
+ (id)SubjectWithObj:(id)arg1;
@property(retain, nonatomic) QLJCELiveVoteSubject *jceVoteSubject; // @synthesize jceVoteSubject=_jceVoteSubject;
@property(retain, nonatomic) NSArray *votedOptionIds; // @synthesize votedOptionIds=_votedOptionIds;
@property(nonatomic) int voteStatusType; // @synthesize voteStatusType=_voteStatusType;
@property(retain, nonatomic) NSArray *answerInfo; // @synthesize answerInfo=_answerInfo;
@property(nonatomic) long long selectMax; // @synthesize selectMax=_selectMax;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long voteCount; // @synthesize voteCount=_voteCount;
@property(retain, nonatomic) NSArray *optionInfo; // @synthesize optionInfo;
@property(nonatomic) long long subjectID; // @synthesize subjectID;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) int optionType; // @synthesize optionType;
- (void).cxx_destruct;
- (_Bool)isHasAnswer;
- (_Bool)isEqualToAnswer:(id)arg1;

@end

