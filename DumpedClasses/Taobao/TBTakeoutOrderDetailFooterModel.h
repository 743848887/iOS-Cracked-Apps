//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface TBTakeoutOrderDetailFooterModel : TBJSONModel
{
    NSArray *_orderFooterViewButtons;
    NSArray *_buttonList;
    NSString *_chargeBackId;
    NSString *_chargeBackText;
    NSString *_chargeBackUrl;
    NSString *_complaintPhone;
}

@property(copy, nonatomic) NSString *complaintPhone; // @synthesize complaintPhone=_complaintPhone;
@property(copy, nonatomic) NSString *chargeBackUrl; // @synthesize chargeBackUrl=_chargeBackUrl;
@property(copy, nonatomic) NSString *chargeBackText; // @synthesize chargeBackText=_chargeBackText;
@property(copy, nonatomic) NSString *chargeBackId; // @synthesize chargeBackId=_chargeBackId;
@property(copy, nonatomic) NSArray *buttonList; // @synthesize buttonList=_buttonList;
@property(copy, nonatomic) NSArray *orderFooterViewButtons; // @synthesize orderFooterViewButtons=_orderFooterViewButtons;
- (void).cxx_destruct;

@end
