//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONEMMTableViewCell.h"

#import "UITextViewDelegate.h"

@class NSString, ONEMMPlaceholderTextView, UILabel;

@interface ONEMMLongTextCell : ONEMMTableViewCell <UITextViewDelegate>
{
    UILabel *_titleLabel;
    ONEMMPlaceholderTextView *_textView;
}

+ (_Bool)canFocusWithItem:(id)arg1;
+ (double)heightWithItem:(id)arg1 tableViewManager:(id)arg2;
@property(retain, nonatomic) ONEMMPlaceholderTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)contentSizeToFit;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)textViewShouldEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)layoutSubviews;
- (void)cellWillAppear;
- (void)cellDidLoad;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)responder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
