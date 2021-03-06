//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMFoodToolBarController.h"

@class NVMRetailGoods, UIViewController;

@interface NVMRetailGoodToolBarController : NVMFoodToolBarController
{
    _Bool _inPromotion;
    NVMRetailGoods *_goods;
    UIViewController *_viewController;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool inPromotion; // @synthesize inPromotion=_inPromotion;
@property(retain, nonatomic) NVMRetailGoods *goods; // @synthesize goods=_goods;
- (void).cxx_destruct;
- (_Bool)shouldShowCantRemovePromot;
- (void)showCantRemovePromot;
- (id)removeButtonViewModelForRemovePromot;
- (id)removeButtonViewModelForNormalState;
- (id)removeButtonViewModelForThisPass;
- (id)addButtonViewModelForNormalState;
- (id)addButtonViewModelForThisPass;
- (void)decreaseFood;
- (void)increaseFood;
- (_Bool)shouldUpdateToolBarWhenFoodChanged:(id)arg1 skuID:(id)arg2 restaurantID:(id)arg3;
- (_Bool)shouldUpdateToolBar;
- (id)foodWithQuantitiesForGood;
- (_Bool)foodOutOfStock;
- (_Bool)isSoldOut;
- (unsigned long long)countOfFoodsInCart;

@end

