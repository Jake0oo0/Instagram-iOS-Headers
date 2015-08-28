/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:36 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>
#import <Instagram/TBase.h>
#import <Instagram/NSCoding.h>

@class NSString;

@interface IGRaindropRankInfo : TBaseStruct <TBase, NSCoding> {

	int __thrift_searchType;
	NSString* __thrift_searchQueryText;
	int __thrift_viewSubType;
	NSString* __thrift_rankToken;
	long long __thrift_itemRankResponseOffset;
	long long __thrift_itemRankDisplayOffset;
	long long __thrift_rankDisplayRowSize;
	long long __thrift_rankDisplayColumnSize;
	int __thrift_sectionType;
	char __thrift_searchType_set;
	char __thrift_searchQueryText_set;
	char __thrift_viewSubType_set;
	char __thrift_rankToken_set;
	char __thrift_itemRankResponseOffset_set;
	char __thrift_itemRankDisplayOffset_set;
	char __thrift_rankDisplayRowSize_set;
	char __thrift_rankDisplayColumnSize_set;
	char __thrift_sectionType_set;

}

@property (assign,nonatomic) int searchType; 
@property (nonatomic,retain) NSString * searchQueryText; 
@property (assign,nonatomic) int viewSubType; 
@property (nonatomic,retain) NSString * rankToken; 
@property (assign,nonatomic) long long itemRankResponseOffset; 
@property (assign,nonatomic) long long itemRankDisplayOffset; 
@property (assign,nonatomic) long long rankDisplayRowSize; 
@property (assign,nonatomic) long long rankDisplayColumnSize; 
@property (assign,nonatomic) int sectionType; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)rankToken;
-(void)setRankToken:(NSString *)arg1 ;
-(id)toDict;
-(void)setRankDisplayColumnSize:(long long)arg1 ;
-(void)setViewSubType:(int)arg1 ;
-(void)setRankDisplayRowSize:(long long)arg1 ;
-(int)viewSubType;
-(void)setItemRankDisplayOffset:(long long)arg1 ;
-(void)setItemRankResponseOffset:(long long)arg1 ;
-(NSString *)searchQueryText;
-(void)setSearchQueryText:(NSString *)arg1 ;
-(void)read:(id)arg1 ;
-(char)searchQueryTextIsSet;
-(void)unsetSearchQueryText;
-(id)initWithSearchType:(int)arg1 searchQueryText:(id)arg2 viewSubType:(int)arg3 rankToken:(id)arg4 itemRankResponseOffset:(long long)arg5 itemRankDisplayOffset:(long long)arg6 rankDisplayRowSize:(long long)arg7 rankDisplayColumnSize:(long long)arg8 sectionType:(int)arg9 ;
-(char)searchTypeIsSet;
-(void)unsetSearchType;
-(char)viewSubTypeIsSet;
-(void)unsetViewSubType;
-(char)rankTokenIsSet;
-(void)unsetRankToken;
-(long long)itemRankResponseOffset;
-(char)itemRankResponseOffsetIsSet;
-(void)unsetItemRankResponseOffset;
-(long long)itemRankDisplayOffset;
-(char)itemRankDisplayOffsetIsSet;
-(void)unsetItemRankDisplayOffset;
-(long long)rankDisplayRowSize;
-(char)rankDisplayRowSizeIsSet;
-(void)unsetRankDisplayRowSize;
-(long long)rankDisplayColumnSize;
-(char)rankDisplayColumnSizeIsSet;
-(void)unsetRankDisplayColumnSize;
-(char)sectionTypeIsSet;
-(void)unsetSectionType;
-(char)makeImmutable;
-(int)sectionType;
-(void)setSectionType:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(void)setSearchType:(int)arg1 ;
-(int)searchType;
@end

