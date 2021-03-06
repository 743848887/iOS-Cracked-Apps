//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSheetItemView.h"

#import "SQuestionViewDelegate.h"

@class NSArray, NSMutableArray, NSString, SEvaluateQuestionButton, SQuestionCellLoadingView, SQuestionCellQuestionView, SQuestionCellRetryView, SQuestionCellSuccessView;

@interface SEvaluateSheetViewQuestionCell : SSheetItemView <SQuestionViewDelegate>
{
    _Bool _showEvaluate;
    NSArray *_questions;
    SQuestionCellQuestionView *_questionView;
    id <SEvaluateSheetViewQuestionCellDelegate> _delegate;
    long long _rating;
    NSMutableArray *_selectedIndexs;
    long long _currentQuestionIndex;
    SEvaluateQuestionButton *_evaluateButton;
    SQuestionCellLoadingView *_loadingView;
    SQuestionCellSuccessView *_successView;
    SQuestionCellRetryView *_retryView;
}

@property(retain, nonatomic) SQuestionCellRetryView *retryView; // @synthesize retryView=_retryView;
@property(retain, nonatomic) SQuestionCellSuccessView *successView; // @synthesize successView=_successView;
@property(retain, nonatomic) SQuestionCellLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) SEvaluateQuestionButton *evaluateButton; // @synthesize evaluateButton=_evaluateButton;
@property(nonatomic) long long currentQuestionIndex; // @synthesize currentQuestionIndex=_currentQuestionIndex;
@property(retain, nonatomic) NSMutableArray *selectedIndexs; // @synthesize selectedIndexs=_selectedIndexs;
@property(nonatomic) long long rating; // @synthesize rating=_rating;
@property(nonatomic) _Bool showEvaluate; // @synthesize showEvaluate=_showEvaluate;
@property(nonatomic) __weak id <SEvaluateSheetViewQuestionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SQuestionCellQuestionView *questionView; // @synthesize questionView=_questionView;
@property(retain, nonatomic) NSArray *questions; // @synthesize questions=_questions;
- (void).cxx_destruct;
- (void)handleLading;
- (void)questionView:(id)arg1 didSelectedOptionWithIndex:(long long)arg2;
- (void)reflashWithSuccess:(_Bool)arg1;
- (void)reloadData;
- (void)layoutSubviews;
- (void)retry;
- (void)evaluateWithRating:(long long)arg1;
- (void)evaluate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

