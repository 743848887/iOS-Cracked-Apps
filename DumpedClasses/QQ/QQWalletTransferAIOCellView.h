//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCommonCellView.h"

#import "QQWebviewExecuteJSDelegate.h"

@class NSMutableArray, NSString, QQWalletRedEnvelopeAIOMsgView, QQWalletTransferAIOMsgModel, QQWalletTransferAIOMsgView, UIView<QQWalletAIOMsgViewProtocol>;

@interface QQWalletTransferAIOCellView : QQAIOCommonCellView <QQWebviewExecuteJSDelegate>
{
    NSMutableArray *_childAccessibleElements;
    UIView<QQWalletAIOMsgViewProtocol> *_msgView;
    QQWalletRedEnvelopeAIOMsgView *_redEnvelopeAIOMsgView;
    QQWalletTransferAIOMsgView *_customMsgView;
}

+ (void)openRedEnvelopeDetailViewController:(id)arg1 messageModel:(id)arg2;
@property(retain, nonatomic) QQWalletTransferAIOMsgView *customMsgView; // @synthesize customMsgView=_customMsgView;
@property(retain, nonatomic) QQWalletRedEnvelopeAIOMsgView *redEnvelopeAIOMsgView; // @synthesize redEnvelopeAIOMsgView=_redEnvelopeAIOMsgView;
@property(retain, nonatomic) UIView<QQWalletAIOMsgViewProtocol> *msgView; // @synthesize msgView=_msgView;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)configAccessibilityFrameForElement:(id)arg1;
- (id)childAccessibleElements;
- (_Bool)isAccessibilityElement;
- (void)ExecuteJS:(id)arg1 withParam:(id)arg2;
- (struct CGRect)GetPaoPaoBgRect;
- (void)calBubbleBackRect;
- (void)loadBubbleImageNor:(int)arg1 imageSel:(int)arg2;
- (id)getMenuItems;
- (void)recordHasOpenRedEnvelope;
- (_Bool)didTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
@property(nonatomic) __weak QQWalletTransferAIOMsgModel *aioModel;
- (struct CGRect)frameForMsgSendFail;
- (struct CGRect)frameForMsgSendLoading;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
