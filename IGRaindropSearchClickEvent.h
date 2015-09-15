/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:48 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>
#import <Instagram/TBase.h>
#import <Instagram/NSCoding.h>

@class NSString, IGRaindropInstagramEntity;

@interface IGRaindropSearchClickEvent : TBaseStruct <TBase, NSCoding> {

	char __thrift_isTypeahead;
	char __thrift_nullState;
	NSString* __thrift_searchQueryText;
	IGRaindropInstagramEntity* __thrift_object;
	long long __thrift_selectedPosition;
	char __thrift_isLocalResult;
	char __thrift_isFollow;
	char __thrift_isTypeahead_set;
	char __thrift_nullState_set;
	char __thrift_searchQueryText_set;
	char __thrift_object_set;
	char __thrift_selectedPosition_set;
	char __thrift_isLocalResult_set;
	char __thrift_isFollow_set;

}

@property (assign,nonatomic) char isTypeahead; 
@property (assign,nonatomic) char nullState; 
@property (nonatomic,retain) NSString * searchQueryText; 
@property (nonatomic,retain) IGRaindropInstagramEntity * object; 
@property (assign,nonatomic) long long selectedPosition; 
@property (assign,nonatomic) char isLocalResult; 
@property (assign,nonatomic) char isFollow; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(NSString *)searchQueryText;
-(void)setSearchQueryText:(NSString *)arg1 ;
-(void)read:(id)arg1 ;
-(char)searchQueryTextIsSet;
-(void)unsetSearchQueryText;
-(char)objectIsSet;
-(void)unsetObject;
-(void)setSelectedPosition:(long long)arg1 ;
-(long long)selectedPosition;
-(char)selectedPositionIsSet;
-(void)unsetSelectedPosition;
-(void)setIsFollow:(char)arg1 ;
-(char)isFollow;
-(char)isFollowIsSet;
-(void)unsetIsFollow;
-(void)setIsTypeahead:(char)arg1 ;
-(void)setNullState:(char)arg1 ;
-(char)isTypeahead;
-(char)isTypeaheadIsSet;
-(void)unsetIsTypeahead;
-(char)nullState;
-(char)nullStateIsSet;
-(void)unsetNullState;
-(void)setIsLocalResult:(char)arg1 ;
-(id)initWithIsTypeahead:(char)arg1 nullState:(char)arg2 searchQueryText:(id)arg3 object:(id)arg4 selectedPosition:(long long)arg5 isLocalResult:(char)arg6 isFollow:(char)arg7 ;
-(char)isLocalResult;
-(char)isLocalResultIsSet;
-(void)unsetIsLocalResult;
-(char)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(IGRaindropInstagramEntity *)object;
-(void)setObject:(IGRaindropInstagramEntity *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

