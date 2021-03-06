//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZBasePhotoCell.h"

#import "QZPhotoModuleDownloaderInterfaceDelegate.h"

@class NSArray, NSMutableArray, NSString, UIButton, UIImageView, UIView;

@interface QZCommonSmallModePhotoListCell : QZBasePhotoCell <QZPhotoModuleDownloaderInterfaceDelegate>
{
    NSMutableArray *_photoButtons;
    UIButton *_untimeBtn;
    UIView *_bgView;
    UIImageView *_bgStampView;
    NSArray *_photoModels;
}

+ (double)photoWidthWithAlbumType:(long long)arg1;
+ (double)heightWithAlbumType:(long long)arg1 rowType:(long long)arg2 photoModelsCount:(long long)arg3;
@property(retain, nonatomic) NSArray *photoModels; // @synthesize photoModels=_photoModels;
- (void).cxx_destruct;
- (void)requestFinishedisSuccess:(_Bool)arg1 image:(id)arg2 reqUrl:(id)arg3;
- (void)onClickPhotoBtn:(id)arg1;
- (void)onClickMoreUntimeBtn:(id)arg1;
- (void)updateLayoutWithPhotoModels:(id)arg1 restUntimeNum:(long long)arg2 isLastUntimeCell:(_Bool)arg3 albumType:(long long)arg4 rowType:(long long)arg5 backgroundType:(long long)arg6;
- (void)updateLayoutWithPhotoModels:(id)arg1 restUntimeNum:(long long)arg2 isLastUntimeCell:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

