//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

#import "FRPostAssetViewColumnDelegate.h"
#import "TTImagePickerControllerDelegate.h"
#import "TTImagePreviewViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSDictionary, NSMutableArray, NSString, TTImagePickerTrackDelegate, UIButton, UIView;

@interface FRAddMultiImagesView : SSThemedView <FRPostAssetViewColumnDelegate, UIActionSheetDelegate, TTImagePickerControllerDelegate, TTImagePreviewViewControllerDelegate>
{
    double _imageSize;
    long long _selectionLimit;
    NSMutableArray *_selectedImageCacheTasks;
    NSString *_eventName;
    UIButton *_addImagesButton;
    id _delegate;
    NSDictionary *_ssTrackDict;
    NSMutableArray *_selectedImageViews;
    TTImagePickerTrackDelegate *_trackDelegate;
    UIView *_currentPreviewMaskView;
    UIView *_disableInteractionView;
    CDUnknownBlockType _changeFrameBlock;
}

@property(copy, nonatomic) CDUnknownBlockType changeFrameBlock; // @synthesize changeFrameBlock=_changeFrameBlock;
@property(retain, nonatomic) UIView *disableInteractionView; // @synthesize disableInteractionView=_disableInteractionView;
@property(retain, nonatomic) UIView *currentPreviewMaskView; // @synthesize currentPreviewMaskView=_currentPreviewMaskView;
@property(retain, nonatomic) TTImagePickerTrackDelegate *trackDelegate; // @synthesize trackDelegate=_trackDelegate;
@property(retain, nonatomic) NSMutableArray *selectedImageViews; // @synthesize selectedImageViews=_selectedImageViews;
@property(copy, nonatomic) NSDictionary *ssTrackDict; // @synthesize ssTrackDict=_ssTrackDict;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *addImagesButton; // @synthesize addImagesButton=_addImagesButton;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(retain, nonatomic) NSMutableArray *selectedImageCacheTasks; // @synthesize selectedImageCacheTasks=_selectedImageCacheTasks;
@property(nonatomic) long long selectionLimit; // @synthesize selectionLimit=_selectionLimit;
- (void).cxx_destruct;
- (void)ttImagePreviewViewControllerSelectChange:(id)arg1 index:(long long)arg2;
- (void)ttImagePreviewViewControllerScrollChange:(id)arg1 index:(long long)arg2;
- (void)ttImagePreviewViewControllerDidDismiss:(id)arg1;
- (void)DidTapWSAssetViewColumn:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)ttimagePickerController:(id)arg1 didFinishTakePhoto:(id)arg2 selectedAssets:(id)arg3 withInfo:(id)arg4;
- (void)ttimagePickerController:(id)arg1 didFinishPickingPhotos:(id)arg2 sourceAssets:(id)arg3;
- (void)addImages:(id)arg1;
- (void)addAssets:(id)arg1;
- (void)addImagesButtonClicked:(id)arg1;
- (void)removeAssetViewColumnWithIndex:(unsigned long long)arg1;
- (void)removeAssetViewColumn:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *selectedThumbImages;
- (void)appendAssetViewColumnByImage:(id)arg1 asset:(id)arg2;
- (void)appendSelectedImage:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)stopObserving;
- (void)frameChangedBlock:(CDUnknownBlockType)arg1;
- (void)changeHeight:(double)arg1 notiy:(_Bool)arg2;
- (id)imageViews;
- (void)startTrackImagepicker;
- (id)initWithFrame:(struct CGRect)arg1 assets:(id)arg2 images:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

