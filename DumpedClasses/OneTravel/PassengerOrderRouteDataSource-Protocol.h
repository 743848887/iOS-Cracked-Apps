//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, SCOrderModel, UIImage, UIView;

@protocol PassengerOrderRouteDataSource <NSObject>
- (void)passengerOrderRouteUpdatePointRoute;
- (long long)passengerOrderRouteCurrentOrderStatus;
- (SCOrderModel *)passengerOrderRouteOrderModel;
- (UIView *)passengerOrderRouteCalloutView;
- (_Bool)passengerOrderRouteShouldSelectDriver;
- (UIImage *)passengerOrderRouteCarIcon;

@optional
- (void)passengerOrderRouteReceivedData:(NSData *)arg1;
@end
