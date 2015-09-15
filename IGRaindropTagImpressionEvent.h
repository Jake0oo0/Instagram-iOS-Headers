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

@class IGRaindropHashtag, IGRaindropPositionIn2D, NSString;

@interface IGRaindropTagImpressionEvent : TBaseStruct <TBase, NSCoding> {

	IGRaindropHashtag* __thrift_tag;
	long long __thrift_sectionNumber;
	IGRaindropPositionIn2D* __thrift_position;
	NSString* __thrift_algorithm;
	char __thrift_viewed;
	char __thrift_subImpression;
	NSString* __thrift_clusterKey;
	int __thrift_sectionType;
	char __thrift_tag_set;
	char __thrift_sectionNumber_set;
	char __thrift_position_set;
	char __thrift_algorithm_set;
	char __thrift_viewed_set;
	char __thrift_subImpression_set;
	char __thrift_clusterKey_set;
	char __thrift_sectionType_set;

}

@property (nonatomic,retain) IGRaindropHashtag * tag; 
@property (assign,nonatomic) long long sectionNumber; 
@property (nonatomic,retain) IGRaindropPositionIn2D * position; 
@property (nonatomic,retain) NSString * algorithm; 
@property (assign,nonatomic) char viewed; 
@property (assign,nonatomic) char subImpression; 
@property (nonatomic,retain) NSString * clusterKey; 
@property (assign,nonatomic) int sectionType; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(NSString *)clusterKey;
-(void)setClusterKey:(NSString *)arg1 ;
-(char)sectionTypeIsSet;
-(void)setAlgorithm:(NSString *)arg1 ;
-(void)read:(id)arg1 ;
-(char)positionIsSet;
-(void)unsetPosition;
-(char)algorithmIsSet;
-(void)unsetAlgorithm;
-(void)unsetSectionType;
-(void)setSectionNumber:(long long)arg1 ;
-(char)sectionNumberIsSet;
-(void)unsetSectionNumber;
-(char)clusterKeyIsSet;
-(void)unsetClusterKey;
-(char)tagIsSet;
-(void)unsetTag;
-(void)setSubImpression:(char)arg1 ;
-(char)viewed;
-(char)viewedIsSet;
-(void)unsetViewed;
-(char)subImpression;
-(char)subImpressionIsSet;
-(void)unsetSubImpression;
-(id)initWithTag:(id)arg1 sectionNumber:(long long)arg2 position:(id)arg3 algorithm:(id)arg4 viewed:(char)arg5 subImpression:(char)arg6 clusterKey:(id)arg7 sectionType:(int)arg8 ;
-(long long)sectionNumber;
-(char)makeImmutable;
-(NSString *)algorithm;
-(int)sectionType;
-(void)setSectionType:(int)arg1 ;
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
-(void)setViewed:(char)arg1 ;
@end

