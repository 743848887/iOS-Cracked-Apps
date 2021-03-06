//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QLJCEViewInfoProtocol.h"

@class NSString, QLHTMLLabel, QLJCECircleCommentFeed;

@interface QLJCECircleCommentFeedView : UIView <QLJCEViewInfoProtocol>
{
    QLHTMLLabel *_contentLbl;
    QLJCECircleCommentFeed *_commentInfo;
}

+ (id)generateCommentTextWithJCEObject:(id)arg1;
+ (id)viewIdentifierWithJCEObject:(id)arg1 uInfo:(id)arg2;
+ (_Bool)isObjectValidWithJCEObject:(id)arg1 uInfo:(id)arg2;
+ (double)heightWithJCEObject:(id)arg1 uInfo:(id)arg2;
@property(retain, nonatomic) QLJCECircleCommentFeed *commentInfo; // @synthesize commentInfo=_commentInfo;
@property(retain, nonatomic) QLHTMLLabel *contentLbl; // @synthesize contentLbl=_contentLbl;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

