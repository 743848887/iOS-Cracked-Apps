//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTakeoutNewViewModel.h"

@class NSArray, TBTakeoutHomeCacheService, TBTakeoutHomeHeaderModel, TBTakeoutLocationItem, TBTakeoutLocationService;

@interface TBTakeoutHomeHeaderViewModel : TBTakeoutNewViewModel
{
    _Bool _isLocationChanged;
    TBTakeoutLocationItem *_location;
    TBTakeoutLocationService *_locationService;
    TBTakeoutHomeHeaderModel *_headerModel;
    TBTakeoutHomeCacheService *_cacheService;
    NSArray *_mockArray;
}

@property(copy, nonatomic) NSArray *mockArray; // @synthesize mockArray=_mockArray;
@property(retain, nonatomic) TBTakeoutHomeCacheService *cacheService; // @synthesize cacheService=_cacheService;
@property(retain, nonatomic) TBTakeoutHomeHeaderModel *headerModel; // @synthesize headerModel=_headerModel;
@property(retain, nonatomic) TBTakeoutLocationService *locationService; // @synthesize locationService=_locationService;
@property(retain, nonatomic) TBTakeoutLocationItem *location; // @synthesize location=_location;
@property(nonatomic) _Bool isLocationChanged; // @synthesize isLocationChanged=_isLocationChanged;
- (void).cxx_destruct;
- (_Bool)needShowActivity;
- (id)weexModelArray;
- (void)onAddressInfoChange:(id)arg1;
- (void)calculateHomeRecommendViewHeight:(id)arg1;
- (void)addItemId:(id)arg1;
- (void)parseResult:(id)arg1;
- (id)serviceApi;
- (id)footPrintModel;
- (id)theme;
- (id)floating;
- (id)nearbyItems;
- (id)tabbarItems;
- (id)recommendNewLists;
- (id)recommends;
- (id)banners;
- (id)categories;
- (id)addrInfo;
- (void)requestLocationBiz;
- (void)pullToRefreshReload;
- (void)requestAddrInfoWithValidTime;
- (void)readDataFromWVFilePath;
- (void)reload;
- (void)reloadCachedData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <TBTakeoutHomeHeaderViewModelDelegate> delegate; // @dynamic delegate;

@end
