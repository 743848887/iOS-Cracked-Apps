//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPListViewController.h"

@class NSString;

@interface PPao_StarAlbumViewController : QYPPListViewController
{
    NSString *_circleId;
}

@property(copy, nonatomic) NSString *circleId; // @synthesize circleId=_circleId;
- (void).cxx_destruct;
- (void)setServerDataException;
- (void)setNoMoreTripDataIfNeed;
- (void)listFailureLoadMore;
- (void)listFailureRefresh;
- (void)listFinishRefresh;
- (void)networkStatusChanged:(long long)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)refresh;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

