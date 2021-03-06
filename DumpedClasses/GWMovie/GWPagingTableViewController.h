//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseTableViewController.h"

@class GWPagingProvider, NSMutableArray;

@interface GWPagingTableViewController : GWBaseTableViewController
{
    GWPagingProvider *_pagingProvider;
    NSMutableArray *_dataArray;
}

@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) GWPagingProvider *pagingProvider; // @synthesize pagingProvider=_pagingProvider;
- (void).cxx_destruct;
- (void)requestFinishedWithCurrentDataArray:(id)arg1 error:(id)arg2;
- (void)requestDidFinished:(id)arg1;
- (void)requestWillStart;
- (void)loadNextPageWithClear:(_Bool)arg1;
- (void)beginRefreshFromFooter;
- (void)beginRefreshFromHeader;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

