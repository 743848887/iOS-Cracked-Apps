//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<Optional><DAdGetPreloadingResourceResponseData_data>, NSNumber<Optional>, NSString<Optional>;

@interface DAdGetPreloadingResourceResponse : JSONModel
{
    NSNumber<Optional> *_code;
    NSString<Optional> *_msg;
    NSArray<Optional><DAdGetPreloadingResourceResponseData_data> *_data;
}

@property(copy, nonatomic) NSArray<Optional><DAdGetPreloadingResourceResponseData_data> *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString<Optional> *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSNumber<Optional> *code; // @synthesize code=_code;
- (void).cxx_destruct;

@end

