//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSArray, NSString, XYPHIllegalInfo, XYPHUser;

@interface XYPHNoteComment : XYRKModel
{
    _Bool _liked;
    NSString *_commentId;
    XYPHUser *_user;
    unsigned long long _time;
    NSString *_content;
    NSString *_likeFriend;
    unsigned long long _likeCount;
    unsigned long long _subCommentCount;
    NSArray *_subComments;
    XYPHNoteComment *_targetComment;
    XYPHIllegalInfo *_illegalInfo;
    NSArray *_prioritySubComments;
    NSString *_prioritySubCommentUser;
    NSArray *_hashTags;
    NSArray *_ats;
}

+ (id)atsJSONTransformer;
+ (id)hashTagsJSONTransformer;
+ (id)prioritySubCommentsJSONTransformer;
+ (id)illegalInfoJSONTransformer;
+ (id)targetCommentJSONTransformer;
+ (id)subCommentsJSONTransformer;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *ats; // @synthesize ats=_ats;
@property(retain, nonatomic) NSArray *hashTags; // @synthesize hashTags=_hashTags;
@property(retain, nonatomic) NSString *prioritySubCommentUser; // @synthesize prioritySubCommentUser=_prioritySubCommentUser;
@property(retain, nonatomic) NSArray *prioritySubComments; // @synthesize prioritySubComments=_prioritySubComments;
@property(retain, nonatomic) XYPHIllegalInfo *illegalInfo; // @synthesize illegalInfo=_illegalInfo;
@property(retain, nonatomic) XYPHNoteComment *targetComment; // @synthesize targetComment=_targetComment;
@property(retain, nonatomic) NSArray *subComments; // @synthesize subComments=_subComments;
@property(nonatomic) unsigned long long subCommentCount; // @synthesize subCommentCount=_subCommentCount;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) _Bool liked; // @synthesize liked=_liked;
@property(retain, nonatomic) NSString *likeFriend; // @synthesize likeFriend=_likeFriend;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) unsigned long long time; // @synthesize time=_time;
@property(retain, nonatomic) XYPHUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isSubComment;
@property(readonly, nonatomic) NSString *oid;

@end

