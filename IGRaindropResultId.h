/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:37 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>
#import <Instagram/TBase.h>
#import <Instagram/NSCoding.h>

@class NSString, IGRaindropPlace;

@interface IGRaindropResultId : TBaseStruct <TBase, NSCoding> {

	NSString* __thrift_hashtagId;
	long long __thrift_userId;
	IGRaindropPlace* __thrift_placeId;
	char __thrift_hashtagId_set;
	char __thrift_userId_set;
	char __thrift_placeId_set;

}

@property (nonatomic,retain) NSString * hashtagId; 
@property (assign,nonatomic) long long userId; 
@property (nonatomic,retain) IGRaindropPlace * placeId; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(void)setHashtagId:(NSString *)arg1 ;
-(void)read:(id)arg1 ;
-(char)placeIdIsSet;
-(void)unsetPlaceId;
-(char)userIdIsSet;
-(void)unsetUserId;
-(id)initWithHashtagId:(id)arg1 userId:(long long)arg2 placeId:(id)arg3 ;
-(NSString *)hashtagId;
-(char)hashtagIdIsSet;
-(void)unsetHashtagId;
-(char)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(void)setUserId:(long long)arg1 ;
-(long long)userId;
-(IGRaindropPlace *)placeId;
-(void)setPlaceId:(IGRaindropPlace *)arg1 ;
@end

