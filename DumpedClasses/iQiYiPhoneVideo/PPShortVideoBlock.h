//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PPSinglePictureBlcok.h"

@class QYUBtnControl;

@interface PPShortVideoBlock : PPSinglePictureBlcok
{
    QYUBtnControl *_buttonControl;
}

+ (void)load;
@property(retain, nonatomic) QYUBtnControl *buttonControl; // @synthesize buttonControl=_buttonControl;
- (void).cxx_destruct;
- (void)customSetup;
- (void)applyData;
- (void)setupLayouts;
- (void)initSubControls;
- (_Bool)p_isFakeFeed;
- (void)p_refershPlayBtn;
- (void)customSetup;
- (void)setPlayBtn:(id)arg1;
- (id)playBtn;

@end

