//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface IOMGoodsDetailSKUObject : NSObject
{
    NSString *_skuID;
    NSString *_originPrice;
    NSString *_price;
    NSString *_quantity;
    NSMutableArray *_props;
}

@property(retain, nonatomic) NSMutableArray *props; // @synthesize props=_props;
@property(copy, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *originPrice; // @synthesize originPrice=_originPrice;
@property(copy, nonatomic) NSString *skuID; // @synthesize skuID=_skuID;
- (void).cxx_destruct;
- (void)parseDataDic:(id)arg1;

@end

