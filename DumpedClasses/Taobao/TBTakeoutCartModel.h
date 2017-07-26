//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString, TBTakeoutCartViewTipsModel;

@interface TBTakeoutCartModel : TBJSONModel
{
    _Bool _canBuy;
    _Bool _inDeliverRange;
    _Bool _isFengNiao;
    NSString *_buttonText;
    NSArray *_cartItemList;
    NSString *_title;
    NSString *_storeId;
    NSString *_outStoreId;
    NSString *_payType;
    double _totalPrice;
    double _totalPromotionPrice;
    double _packingFee;
    double _agentFee;
    double _deliverAmount;
    NSString *_recommendDesc;
    TBTakeoutCartViewTipsModel *_tips;
    NSString *_discountDesc;
    NSString *_failedDesc;
}

+ (id)modelContainerClassMapDictioanry;
@property(copy, nonatomic) NSString *failedDesc; // @synthesize failedDesc=_failedDesc;
@property(copy, nonatomic) NSString *discountDesc; // @synthesize discountDesc=_discountDesc;
@property(retain, nonatomic) TBTakeoutCartViewTipsModel *tips; // @synthesize tips=_tips;
@property(nonatomic) _Bool isFengNiao; // @synthesize isFengNiao=_isFengNiao;
@property(copy, nonatomic) NSString *recommendDesc; // @synthesize recommendDesc=_recommendDesc;
@property(nonatomic) _Bool inDeliverRange; // @synthesize inDeliverRange=_inDeliverRange;
@property(nonatomic) double deliverAmount; // @synthesize deliverAmount=_deliverAmount;
@property(nonatomic) double agentFee; // @synthesize agentFee=_agentFee;
@property(nonatomic) double packingFee; // @synthesize packingFee=_packingFee;
@property(nonatomic) double totalPromotionPrice; // @synthesize totalPromotionPrice=_totalPromotionPrice;
@property(nonatomic) double totalPrice; // @synthesize totalPrice=_totalPrice;
@property(copy, nonatomic) NSString *payType; // @synthesize payType=_payType;
@property(copy, nonatomic) NSString *outStoreId; // @synthesize outStoreId=_outStoreId;
@property(copy, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *cartItemList; // @synthesize cartItemList=_cartItemList;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(nonatomic) _Bool canBuy; // @synthesize canBuy=_canBuy;
- (void).cxx_destruct;

@end
