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

@class IGRaindropHashtag, IGRaindropPositionIn2D, NSString;

@interface IGRaindropTagClickEvent : TBaseStruct <TBase, NSCoding> {

	IGRaindropHashtag* __thrift_tag;
	long long __thrift_sectionNumber;
	IGRaindropPositionIn2D* __thrift_position;
	NSString* __thrift_algorithm;
	NSString* __thrift_clusterKey;
	char __thrift_tag_set;
	char __thrift_sectionNumber_set;
	char __thrift_position_set;
	char __thrift_algorithm_set;
	char __thrift_clusterKey_set;

}

@property (nonatomic,retain) IGRaindropHashtag * tag; 
@property (assign,nonatomic) long long sectionNumber; 
@property (nonatomic,retain) IGRaindropPositionIn2D * position; 
@property (nonatomic,retain) NSString * algorithm; 
@property (nonatomic,retain) NSString * clusterKey; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(NSString *)clusterKey;
-(void)setClusterKey:(NSString *)arg1 ;
-(void)setAlgorithm:(NSString *)arg1 ;
-(void)setSectionNumber:(long long)arg1 ;
-(void)read:(id)arg1 ;
-(char)positionIsSet;
-(void)unsetPosition;
-(char)algorithmIsSet;
-(void)unsetAlgorithm;
-(char)sectionNumberIsSet;
-(void)unsetSectionNumber;
-(char)clusterKeyIsSet;
-(void)unsetClusterKey;
-(id)initWithTag:(id)arg1 sectionNumber:(long long)arg2 position:(id)arg3 algorithm:(id)arg4 clusterKey:(id)arg5 ;
-(char)tagIsSet;
-(void)unsetTag;
-(long long)sectionNumber;
-(char)makeImmutable;
-(NSString *)algorithm;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)setPosition:(IGRaindropPositionIn2D *)arg1 ;
-(IGRaindropPositionIn2D *)position;
-(IGRaindropHashtag *)tag;
-(void)setTag:(IGRaindropHashtag *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

