//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTCreditCardNode : NSObject
{
    _Bool haveused;
    _Bool verified;
    _Bool isNeedCardOwner;
    _Bool isNeedIDCardNumber;
    _Bool isNeedIDCardType;
    NSString *type;
    NSString *name;
    id _customModel;
}

+ (id)nodeWithCreditCardViewItemModel:(id)arg1;
@property(retain, nonatomic) id customModel; // @synthesize customModel=_customModel;
@property(nonatomic) _Bool isNeedIDCardType; // @synthesize isNeedIDCardType;
@property(nonatomic) _Bool isNeedIDCardNumber; // @synthesize isNeedIDCardNumber;
@property(nonatomic) _Bool isNeedCardOwner; // @synthesize isNeedCardOwner;
@property(nonatomic) _Bool verified; // @synthesize verified;
@property(nonatomic) _Bool haveused; // @synthesize haveused;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(copy, nonatomic) NSString *type; // @synthesize type;
- (void).cxx_destruct;
- (void)setFlag:(int)arg1;
- (id)init;

@end
