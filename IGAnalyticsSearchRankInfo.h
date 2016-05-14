/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:35 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
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
-(NSString *)searchQueryText;
-(NSString *)viewSubType;
-(NSNumber *)itemRankResponseOffset;
-(NSNumber *)itemRankDisplayOffset;
-(NSNumber *)rankDisplayRowSize;
-(NSNumber *)rankDisplayColumnSize;
-(NSString *)searchSessionId;
-(NSString *)entityId;
-(NSString *)searchImpressionToken;
-(NSString *)rankToken;
-(void)setSearchQueryText:(NSString *)arg1 ;
-(void)setViewSubType:(NSString *)arg1 ;
-(void)setRankToken:(NSString *)arg1 ;
-(void)setItemRankResponseOffset:(NSNumber *)arg1 ;
-(void)setItemRankDisplayOffset:(NSNumber *)arg1 ;
-(void)setRankDisplayRowSize:(NSNumber *)arg1 ;
-(void)setRankDisplayColumnSize:(NSNumber *)arg1 ;
-(void)setSearchSessionId:(NSString *)arg1 ;
-(void)setEntityId:(NSString *)arg1 ;
-(void)setSearchImpressionToken:(NSString *)arg1 ;
-(void)setSearchType:(NSString *)arg1 ;
-(NSString *)sectionType;
-(void)setSectionType:(NSString *)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)searchType;
@end

