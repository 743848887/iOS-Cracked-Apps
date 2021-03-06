//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBaseComponent.h"

#import "SBottomContainerViewSource.h"

@class NSMutableArray, NSString, ONEBubbleTipsView, ONEReportSheetView, RACDisposable, SOrderActView;

@interface SOrderActCom : SBaseComponent <SBottomContainerViewSource>
{
    long long _originalOrderState;
    long long _actStyle;
    ONEBubbleTipsView *_tipsBubble;
    SOrderActView *_view;
    ONEReportSheetView *_reportSheetView;
    NSMutableArray *_dataArray;
    RACDisposable *_orderStatusChangeDispoable;
}

@property(retain, nonatomic) RACDisposable *orderStatusChangeDispoable; // @synthesize orderStatusChangeDispoable=_orderStatusChangeDispoable;
@property(copy, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) ONEReportSheetView *reportSheetView; // @synthesize reportSheetView=_reportSheetView;
@property(retain, nonatomic) SOrderActView *view; // @synthesize view=_view;
@property(retain, nonatomic) ONEBubbleTipsView *tipsBubble; // @synthesize tipsBubble=_tipsBubble;
@property(nonatomic) long long actStyle; // @synthesize actStyle=_actStyle;
@property(nonatomic) long long originalOrderState; // @synthesize originalOrderState=_originalOrderState;
- (void).cxx_destruct;
- (void)dealloc;
- (id)viewForCardPoolView;
- (id)viewForContainerView:(id)arg1 expand:(_Bool)arg2;
- (void)omgForCardDidShow;
- (id)omgTrafficReportParams:(id)arg1;
- (void)showTrafficReport;
- (void)closeTrafficBubble;
- (id)commonModelForActType:(long long)arg1;
- (void)recordBubbleAction:(long long)arg1 withActType:(long long)arg2;
- (_Bool)showBubbleTipsWithActType:(long long)arg1 withBubbleText:(id)arg2;
- (void)showBubbleTips;
- (_Bool)bubbleSwithForActType:(long long)arg1;
- (void)reloadData;
- (void)addCommonActModels;
- (void)reloadDataForOrderStateChange;
- (void)triggerEvent:(unsigned long long)arg1;
- (id)signalWhiteList;
- (void)addObservers;
- (id)initWithDataSource:(id)arg1 config:(id)arg2;
- (void)processClickActionWithType:(long long)arg1;
- (id)gridModels;
- (id)modelForActType:(long long)arg1;
- (_Bool)enableShowBubbleForActType:(long long)arg1;
- (_Bool)enableForActType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

