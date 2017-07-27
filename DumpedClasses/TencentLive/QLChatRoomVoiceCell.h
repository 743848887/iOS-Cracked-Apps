//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLChatRoomCommonCell.h"

@class UIImageView, UILabel;

@interface QLChatRoomVoiceCell : QLChatRoomCommonCell
{
    UIImageView *_voiceImg;
    UILabel *_VoiceDrationLbl;
    UIImageView *_tipNewView;
}

+ (_Bool)isVoiceSentByCurrentUser:(id)arg1;
+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(retain, nonatomic) UIImageView *tipNewView; // @synthesize tipNewView=_tipNewView;
@property(retain, nonatomic) UILabel *VoiceDrationLbl; // @synthesize VoiceDrationLbl=_VoiceDrationLbl;
@property(retain, nonatomic) UIImageView *voiceImg; // @synthesize voiceImg=_voiceImg;
- (void).cxx_destruct;
- (void)doSomethingWhenNewlyComeout;
- (_Bool)shouldPlayWhenNewlyComeOut;
- (void)reallyPlayVoice;
- (void)clickMessageContent:(id)arg1;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
