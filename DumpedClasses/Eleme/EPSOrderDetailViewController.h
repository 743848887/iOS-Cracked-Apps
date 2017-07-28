//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EPSPayBaseViewController.h"

#import "NVMPresentationDelegate.h"

@class EPSOrder, NSString, UIButton, UILabel, UIView;

@interface EPSOrderDetailViewController : EPSPayBaseViewController <NVMPresentationDelegate>
{
    EPSOrder *_order;
    UILabel *_nameLabel;
    UILabel *_titleLabel;
    UIView *_lineView;
    UILabel *_detailLabel;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) EPSOrder *order; // @synthesize order=_order;
- (void).cxx_destruct;
- (void)animateAlongPresentation:(_Bool)arg1;
- (void)didTapView:(id)arg1;
- (id)attributedOrderDesc:(id)arg1;
- (void)dismiss;
- (void)loadCloseButton;
- (void)loadDetailLabel;
- (void)loadLineView;
- (void)loadTitleLabel;
- (void)loadNameLabel;
- (void)loadSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
