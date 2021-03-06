//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "P_QLLoadPosterColorsDelegate.h"
#import "QLImageLoadDelegate.h"

@class NSString, QLJCEVRSSItem, QLSImageView, UILabel;

@interface QLVrssCoverView : UIView <QLImageLoadDelegate, P_QLLoadPosterColorsDelegate>
{
    CDUnknownBlockType _callBack;
    id _delegate;
    QLJCEVRSSItem *_vrssItem;
    QLSImageView *_headImgView;
    UILabel *_titleLbl;
    UILabel *_descLbl;
}

+ (double)getViewHeight;
@property(retain, nonatomic) UILabel *descLbl; // @synthesize descLbl=_descLbl;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(retain, nonatomic) QLSImageView *headImgView; // @synthesize headImgView=_headImgView;
@property(retain, nonatomic) QLJCEVRSSItem *vrssItem; // @synthesize vrssItem=_vrssItem;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
- (void).cxx_destruct;
- (void)didLoadImage:(id)arg1 forURL:(id)arg2;
- (void)posterColorsDidFinishLoaded:(id)arg1 colors:(id)arg2;
- (id)getDescTextString;
- (void)setObject:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

