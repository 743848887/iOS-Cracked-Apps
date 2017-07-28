//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSMutableDictionary, NSNumber, NSString;

@interface FMSearchParameter : NSObject <NSCopying, NSCoding>
{
    long long __filterChange;
    NSString *_themeId;
    NSString *_sellerNick;
    _Bool _notToSortByDefault;
    int __stuffStatus;
    int __offline;
    long long _pageNumber;
    long long _rowsPerPage;
    NSNumber *_endPrice;
    NSNumber *_startPrice;
    NSString *_province;
    NSString *_city;
    NSString *_area;
    NSString *_sortField;
    NSString *_sortValue;
    NSString *_keyword;
    NSNumber *_lat;
    NSNumber *_lng;
    NSNumber *_range;
    NSNumber *_home;
    NSNumber *_inMap;
    NSArray *__category$FMCategory;
    long long __locationID;
    NSString *_startTimePoint;
    NSString *_propValueStr;
    NSNumber *_fromSuggest;
    NSString *_suggestBucketNum;
    NSString *_suggestRn;
    NSString *_gps;
    NSNumber *_recommend;
    NSString *_fishpoolId;
    NSString *_addOperation;
    NSString *_themeTabId;
    NSString *_link;
    NSString *_sellerId;
    NSString *_auctionType;
    NSNumber *_abTestRuleId;
    NSNumber *_fromShade;
    NSString *_shadeBucketNum;
    NSString *_shadeRn;
    NSString *_showText;
    NSString *_clickUrl;
    NSString *_source;
    NSMutableDictionary *_searchConditions;
    NSNumber *_fromKits;
    NSNumber *_fromLeaf;
    NSString *_kitsRn;
    NSString *_leafRn;
    NSString *_leafId;
}

@property(nonatomic) _Bool notToSortByDefault; // @synthesize notToSortByDefault=_notToSortByDefault;
@property(copy, nonatomic) NSString *leafId; // @synthesize leafId=_leafId;
@property(copy, nonatomic) NSString *leafRn; // @synthesize leafRn=_leafRn;
@property(copy, nonatomic) NSString *kitsRn; // @synthesize kitsRn=_kitsRn;
@property(retain, nonatomic) NSNumber *fromLeaf; // @synthesize fromLeaf=_fromLeaf;
@property(retain, nonatomic) NSNumber *fromKits; // @synthesize fromKits=_fromKits;
@property(retain, nonatomic) NSMutableDictionary *searchConditions; // @synthesize searchConditions=_searchConditions;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(copy, nonatomic) NSString *showText; // @synthesize showText=_showText;
@property(copy, nonatomic) NSString *shadeRn; // @synthesize shadeRn=_shadeRn;
@property(copy, nonatomic) NSString *shadeBucketNum; // @synthesize shadeBucketNum=_shadeBucketNum;
@property(retain, nonatomic) NSNumber *fromShade; // @synthesize fromShade=_fromShade;
@property(retain, nonatomic) NSNumber *abTestRuleId; // @synthesize abTestRuleId=_abTestRuleId;
@property(copy, nonatomic) NSString *auctionType; // @synthesize auctionType=_auctionType;
@property(copy, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(copy, nonatomic) NSString *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *themeTabId; // @synthesize themeTabId=_themeTabId;
@property(nonatomic) NSString *addOperation; // @synthesize addOperation=_addOperation;
@property(copy, nonatomic) NSString *fishpoolId; // @synthesize fishpoolId=_fishpoolId;
@property(retain, nonatomic) NSNumber *recommend; // @synthesize recommend=_recommend;
@property(copy, nonatomic) NSString *gps; // @synthesize gps=_gps;
@property(copy, nonatomic) NSString *suggestRn; // @synthesize suggestRn=_suggestRn;
@property(copy, nonatomic) NSString *suggestBucketNum; // @synthesize suggestBucketNum=_suggestBucketNum;
@property(retain, nonatomic) NSNumber *fromSuggest; // @synthesize fromSuggest=_fromSuggest;
@property(copy, nonatomic) NSString *propValueStr; // @synthesize propValueStr=_propValueStr;
@property(copy, nonatomic) NSString *startTimePoint; // @synthesize startTimePoint=_startTimePoint;
@property(copy, nonatomic) NSString *sellerNick; // @synthesize sellerNick=_sellerNick;
@property(copy, nonatomic) NSString *themeId; // @synthesize themeId=_themeId;
@property(nonatomic) int _offline; // @synthesize _offline=__offline;
@property(nonatomic) long long _filterChange; // @synthesize _filterChange=__filterChange;
@property(nonatomic) long long _locationID; // @synthesize _locationID=__locationID;
@property(nonatomic) int _stuffStatus; // @synthesize _stuffStatus=__stuffStatus;
@property(retain, nonatomic) NSArray *_category$FMCategory; // @synthesize _category$FMCategory=__category$FMCategory;
@property(retain, nonatomic) NSNumber *inMap; // @synthesize inMap=_inMap;
@property(retain, nonatomic) NSNumber *home; // @synthesize home=_home;
@property(retain, nonatomic) NSNumber *range; // @synthesize range=_range;
@property(retain, nonatomic) NSNumber *lng; // @synthesize lng=_lng;
@property(retain, nonatomic) NSNumber *lat; // @synthesize lat=_lat;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(retain, nonatomic) NSString *sortValue; // @synthesize sortValue=_sortValue;
@property(retain, nonatomic) NSString *sortField; // @synthesize sortField=_sortField;
@property(retain, nonatomic) NSString *area; // @synthesize area=_area;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSNumber *startPrice; // @synthesize startPrice=_startPrice;
@property(retain, nonatomic) NSNumber *endPrice; // @synthesize endPrice=_endPrice;
@property(nonatomic) long long rowsPerPage; // @synthesize rowsPerPage=_rowsPerPage;
@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)fromAnotherParameter:(id)arg1;
- (id)description;
- (id)getTradeTypeString;
- (id)getStatusString;
- (int)sortType;
- (void)setSortType:(int)arg1;
@property(readonly, nonatomic) NSNumber *offline;
@property(readonly, nonatomic) NSNumber *stuffStatus;
@property(readonly, nonatomic) NSNumber *frontCatId;
@property(readonly, nonatomic) NSNumber *categoryId;
- (id)init;

@end
