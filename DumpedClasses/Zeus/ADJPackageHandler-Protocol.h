//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class ADJActivityPackage, ADJResponseData, ADJSessionParameters;
@protocol ADJActivityHandler;

@protocol ADJPackageHandler
- (void)teardown:(_Bool)arg1;
- (void)updatePackages:(ADJSessionParameters *)arg1;
- (void)resumeSending;
- (void)pauseSending;
- (void)closeFirstPackage:(ADJResponseData *)arg1 activityPackage:(ADJActivityPackage *)arg2;
- (void)sendNextPackage:(ADJResponseData *)arg1;
- (void)sendFirstPackage;
- (void)addPackage:(ADJActivityPackage *)arg1;
- (id)initWithActivityHandler:(id <ADJActivityHandler>)arg1 startsSending:(_Bool)arg2;
@end

