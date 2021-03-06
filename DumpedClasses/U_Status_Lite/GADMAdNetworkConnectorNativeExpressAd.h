//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADMAdNetworkConnector.h"

@class GADAdLoaderConfiguration, GADAdType, GADMAdNetworkConnectorNativeAd;

@interface GADMAdNetworkConnectorNativeExpressAd : GADMAdNetworkConnector
{
    GADMAdNetworkConnectorNativeAd *_nativeAdConnector;
    GADAdType *_adType;
    GADAdLoaderConfiguration *_adLoaderConfiguration;
}

+ (id)JSONAssetsFromMediatedNativeAppInstallAd:(id)arg1;
+ (id)JSONAssetsFromMediatedNativeContentAd:(id)arg1;
@property(retain, nonatomic) GADAdLoaderConfiguration *adLoaderConfiguration; // @synthesize adLoaderConfiguration=_adLoaderConfiguration;
- (void).cxx_destruct;
- (void)loadNativeExpressHTMLTemplateForMediatedNativeAd:(id)arg1;
- (id)assetsFromMediatedNativeAd:(id)arg1;
- (void)adapter:(id)arg1 didFailAd:(id)arg2;
- (void)adapter:(id)arg1 didReceiveMediatedNativeAd:(id)arg2;
- (void)getAdFromAdapterWithType:(id)arg1;
- (void)setUpAdapter;
- (void)setAdManager:(id)arg1;
- (id)initWithConfig:(id)arg1 networkConfig:(id)arg2;

@end

