//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActionSheet.h"

@class NSArray, NSString, UIView;

@interface FXMvShareActionSheet : UIActionSheet
{
    NSArray *_itemBtns;
    id <FXMvShareActionSheetDelegate> _sheetDelegate;
    NSString *_detail;
    UIView *_parentView;
}

@property(retain, nonatomic) UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(nonatomic) __weak id <FXMvShareActionSheetDelegate> sheetDelegate; // @synthesize sheetDelegate=_sheetDelegate;
@property(retain, nonatomic) NSArray *itemBtns; // @synthesize itemBtns=_itemBtns;
- (void).cxx_destruct;
- (id)getItemForTag:(unsigned long long)arg1;
- (void)removeFromSuperview;
- (void)hideActionSheet;
- (void)cancelAction:(id)arg1;
- (void)itemClick:(id)arg1;
- (id)createBtnsBgView:(struct CGRect)arg1;
- (id)createBtn:(id)arg1;
- (id)createCancelBtn:(struct CGRect)arg1;
- (void)showInView:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *title;

@end
