/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:56 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface IGAnalyticsSearchRankInfo : NSObject {

	NSString* _searchType;
	NSString* _searchQueryText;
	NSString* _viewSubType;
	NSString* _rankToken;
	NSNumber* _itemRankResponseOffset;
	NSNumber* _itemRankDisplayOffset;
	NSNumber* _rankDisplayRowSize;
	NSNumber* _rankDisplayColumnSize;
	NSString* _sectionType;
	NSString* _searchSessionId;
	NSString* _entityId;
	NSString* _searchImpressionToken;

}

@property (nonatomic,copy) NSString * searchType;                            //@synthesize searchType=_searchType - In the implementation block
@property (nonatomic,copy) NSString * searchQueryText;                       //@synthesize searchQueryText=_searchQueryText - In the implementation block
@property (nonatomic,copy) NSString * viewSubType;                           //@synthesize viewSubType=_viewSubType - In the implementation block
@property (nonatomic,copy) NSString * rankToken;                             //@synthesize rankToken=_rankToken - In the implementation block
@property (nonatomic,retain) NSNumber * itemRankResponseOffset;              //@synthesize itemRankResponseOffset=_itemRankResponseOffset - In the implementation block
@property (nonatomic,retain) NSNumber * itemRankDisplayOffset;               //@synthesize itemRankDisplayOffset=_itemRankDisplayOffset - In the implementation block
@property (nonatomic,retain) NSNumber * rankDisplayRowSize;                  //@synthesize rankDisplayRowSize=_rankDisplayRowSize - In the implementation block
@property (nonatomic,retain) NSNumber * rankDisplayColumnSize;               //@synthesize rankDisplayColumnSize=_rankDisplayColumnSize - In the implementation block
@property (nonatomic,copy) NSString * sectionType;                           //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,copy) NSString * searchSessionId;                       //@synthesize searchSessionId=_searchSessionId - In the implementation block
@property (nonatomic,copy) NSString * entityId;                              //@synthesize entityId=_entityId - In the implementation block
@property (nonatomic,copy) NSString * searchImpressionToken;                 //@synthesize searchImpressionToken=_searchImpressionToken - In the implementation block
-(NSString *)rankToken;
-(void)setRankToken:(NSString *)arg1 ;
-(void)setRankDisplayRowSize:(NSNumber *)arg1 ;
-(void)setRankDisplayColumnSize:(NSNumber *)arg1 ;
-(void)setViewSubType:(NSString *)arg1 ;
-(NSString *)entityId;
-(void)setEntityId:(NSString *)arg1 ;
-(NSString *)viewSubType;
-(void)setItemRankDisplayOffset:(NSNumber *)arg1 ;
-(void)setItemRankResponseOffset:(NSNumber *)arg1 ;
-(NSString *)searchQueryText;
-(void)setSearchQueryText:(NSString *)arg1 ;
-(NSString *)searchSessionId;
-(void)setSearchSessionId:(NSString *)arg1 ;
-(void)setSearchImpressionToken:(NSString *)arg1 ;
-(NSNumber *)itemRankResponseOffset;
-(NSNumber *)itemRankDisplayOffset;
-(NSNumber *)rankDisplayRowSize;
-(NSNumber *)rankDisplayColumnSize;
-(NSString *)searchImpressionToken;
-(void)setSearchType:(NSString *)arg1 ;
-(NSString *)sectionType;
-(void)setSectionType:(NSString *)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)searchType;
@end

