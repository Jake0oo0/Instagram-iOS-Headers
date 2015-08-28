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

@class NSString, NSMutableArray;

@interface IGRaindropTapLocationResultEvent : TBaseStruct <TBase, NSCoding> {

	long long __thrift_selectedPosition;
	NSString* __thrift_placeId;
	NSMutableArray* __thrift_resultList;
	NSString* __thrift_searchSessionId;
	char __thrift_selectedPosition_set;
	char __thrift_placeId_set;
	char __thrift_resultList_set;
	char __thrift_searchSessionId_set;

}

@property (assign,nonatomic) long long selectedPosition; 
@property (nonatomic,retain) NSString * placeId; 
@property (nonatomic,retain) NSMutableArray * resultList; 
@property (nonatomic,retain) NSString * searchSessionId; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(NSString *)searchSessionId;
-(void)setSearchSessionId:(NSString *)arg1 ;
-(void)setSelectedPosition:(long long)arg1 ;
-(void)setResultList:(NSMutableArray *)arg1 ;
-(void)read:(id)arg1 ;
-(char)placeIdIsSet;
-(void)unsetPlaceId;
-(long long)selectedPosition;
-(char)selectedPositionIsSet;
-(void)unsetSelectedPosition;
-(char)searchSessionIdIsSet;
-(void)unsetSearchSessionId;
-(NSMutableArray *)resultList;
-(char)resultListIsSet;
-(void)unsetResultList;
-(id)initWithSelectedPosition:(long long)arg1 placeId:(id)arg2 resultList:(NSMutableArray*)arg3 searchSessionId:(id)arg4 ;
-(char)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(NSString *)placeId;
-(void)setPlaceId:(NSString *)arg1 ;
@end

