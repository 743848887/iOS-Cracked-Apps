//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GIFTPRODToString.h"

@class NSString;

@interface GIFTPRODTradeOrderCloseReq : GIFTPRODToString
{
    int _prodType;
    NSString *_orderNo;
}

@property(retain, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
@property(nonatomic) int prodType; // @synthesize prodType=_prodType;
- (void).cxx_destruct;

@end
