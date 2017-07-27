//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "MKMapViewDelegate.h"
#import "UITextFieldDelegate.h"

@class MKMapView, NSError, NSString, NSURLSessionDataTask, NVMLocateAddressContentView, NVMMapDestinationView, NVMPOI, UIButton;

@interface NVMAddressMapViewController : NVMViewController <MKMapViewDelegate, UITextFieldDelegate>
{
    _Bool _shouldUpdateAddressContent;
    _Bool _shouldShowGuessAddressHint;
    _Bool _shouldHightLocateButton;
    NSString *_initialGeohash;
    CDUnknownBlockType _didSelectPOI;
    NSString *_restaurantID;
    MKMapView *_mapView;
    NVMMapDestinationView *_destinationView;
    UIButton *_locateButton;
    NVMLocateAddressContentView *_addressContentView;
    UIButton *_confirmButton;
    NSError *_locateError;
    NVMPOI *_currentPOI;
    NSURLSessionDataTask *_operationWithGeohash;
    NSURLSessionDataTask *_operationWithAddressCheck;
}

@property(nonatomic) _Bool shouldHightLocateButton; // @synthesize shouldHightLocateButton=_shouldHightLocateButton;
@property(nonatomic) _Bool shouldShowGuessAddressHint; // @synthesize shouldShowGuessAddressHint=_shouldShowGuessAddressHint;
@property(nonatomic) _Bool shouldUpdateAddressContent; // @synthesize shouldUpdateAddressContent=_shouldUpdateAddressContent;
@property(nonatomic) __weak NSURLSessionDataTask *operationWithAddressCheck; // @synthesize operationWithAddressCheck=_operationWithAddressCheck;
@property(nonatomic) __weak NSURLSessionDataTask *operationWithGeohash; // @synthesize operationWithGeohash=_operationWithGeohash;
@property(retain, nonatomic) NVMPOI *currentPOI; // @synthesize currentPOI=_currentPOI;
@property(retain, nonatomic) NSError *locateError; // @synthesize locateError=_locateError;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) NVMLocateAddressContentView *addressContentView; // @synthesize addressContentView=_addressContentView;
@property(retain, nonatomic) UIButton *locateButton; // @synthesize locateButton=_locateButton;
@property(retain, nonatomic) NVMMapDestinationView *destinationView; // @synthesize destinationView=_destinationView;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(copy, nonatomic) NSString *restaurantID; // @synthesize restaurantID=_restaurantID;
@property(copy, nonatomic) CDUnknownBlockType didSelectPOI; // @synthesize didSelectPOI=_didSelectPOI;
@property(copy, nonatomic) NSString *initialGeohash; // @synthesize initialGeohash=_initialGeohash;
- (void).cxx_destruct;
- (id)geohashFromLatitude:(double)arg1 longitude:(double)arg2;
- (id)currentGeohash;
- (id)customDetailAddress;
- (void)convertToCurrentPOIFromAddress:(id)arg1;
- (void)confirmSelectedPoi;
- (void)checkPOIOutOfArea:(id)arg1;
- (void)checkAddressAccuracyWhenConfirmAddress;
- (void)checkAddressAccuracyWhenFirstAppear;
- (void)checkAddressAccuracyWithDetailAddress:(id)arg1 compeletion:(CDUnknownBlockType)arg2;
- (void)loadPOIsWithCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)destinationViewAnimating;
- (void)updateAddressContent;
- (void)setMapCenterWithLatitude:(double)arg1 longitude:(double)arg2;
- (void)updateCurrentLocationWithPOI:(id)arg1;
- (void)locateUser;
- (void)updateLocationWithInitialGeohash;
- (void)updateLocation;
- (void)goTosearchAddress;
- (void)showNotInDeliveryAreaAlert;
- (void)alertWithRecommendPoi:(id)arg1;
- (void)confirmAddressAction:(id)arg1;
- (void)changeLocateButtonGray:(_Bool)arg1;
- (void)willHideKeyboard:(id)arg1;
- (void)willShowKeyboard:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)loadAddressContentView;
- (void)loadLocateButton;
- (void)loadConfirmButton;
- (void)loadDestinationView;
- (void)loadMapView;
- (void)loadSubviews;
- (void)configNavigationBar;
- (void)addKeyboardNotifications;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithInitialGeohash:(id)arg1;
- (id)initWithAddress:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
