//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDelegate.h"

@class NSDictionary, NSMutableArray, NSString, QQSMItemElementBase, QQStructuredMessageEvent;

@interface QQSMItemElementBaseView : UIView <UITableViewDelegate>
{
    _Bool _highlighted;
    _Bool _isLongPress;
    _Bool _isHandleTouch;
    struct CGPoint _touchPoint;
    QQStructuredMessageEvent *_actionEvent;
    QQSMItemElementBase *_baseMsg;
    NSMutableArray *_elementViews;
    id _userData;
    NSDictionary *_reportDic;
    int _xo;
    id <QQSMItemElementViewDelegate> _actionDelegate;
}

+ (struct CGSize)layoutElements:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (void)drawDashLine:(id)arg1 lineLength:(int)arg2 lineSpacing:(int)arg3 lineColor:(id)arg4;
+ (id)createQQSMItemElementView:(id)arg1 withFrame:(struct CGRect)arg2;
+ (_Bool)isGttControlBarItem:(id)arg1;
@property(nonatomic) __weak id <QQSMItemElementViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *reportDic; // @dynamic reportDic;
- (id)baseCell;
- (void)logReportActionWith:(id)arg1;
- (_Bool)didAction:(struct CGPoint)arg1;
- (struct CGRect)getContentFrame;
- (_Bool)shouldHandleTouch:(struct CGPoint)arg1;
- (void)LongPressedEnded;
- (void)cancelPreviousPerformForView:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (void)setIsLongPressedWithPoint:(struct CGPoint)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)setActionEventWithTemplateID:(id)arg1 serviceID:(id)arg2 action:(id)arg3 actionData:(id)arg4 url:(id)arg5 appid:(id)arg6;
- (void)setQQGTTItemElementBase:(id)arg1;
- (void)setQQSMItemElementBase:(id)arg1;
- (void)setSubviewsPropertyWithDic:(id)arg1 propertys:(id)arg2 isMemberOfClass:(_Bool)arg3;
- (void)willMoveToSuperview:(id)arg1;
- (_Bool)shouldRelayout;
- (void)prepareForReuse;
- (_Bool)shouldReuse;
@property(readonly, copy, nonatomic) NSString *reuseIdentifier;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) QQSMItemElementBase *baseMsg; // @dynamic baseMsg;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSMutableArray *elementViews; // @dynamic elementViews;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) id userData; // @dynamic userData;

@end

