//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CFT_TPIDKeyboardButton, UITextField;

@interface CFT_TPIDKeyboardView : UIView
{
    UITextField *curText;
    CFT_TPIDKeyboardButton *actionBtn;
    id _actionTarget;
    SEL _action;
    _Bool bShowX;
    char szTitle[13];
    _Bool _showSecureTipView;
    int maxInput;
}

@property(nonatomic) _Bool showSecureTipView; // @synthesize showSecureTipView=_showSecureTipView;
@property(nonatomic) int maxInput; // @synthesize maxInput;
- (void)numberKeyBoardClicked:(id)arg1;
- (void)numberKeyBoardTouchTouchCancel:(id)arg1;
- (void)numberKeyBoardTouchDown:(id)arg1;
- (void)touchInput:(id)arg1;
- (void)removeController:(id)arg1;
- (void)addController:(id)arg1;
- (void)setActionBtnText:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithExKey:(BOOL)arg1;

@end

