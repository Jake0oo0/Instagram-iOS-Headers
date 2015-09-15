/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:47 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>
#import <Instagram/TBase.h>
#import <Instagram/NSCoding.h>

@class IGRaindropMarquee, IGRaindropPositionIn2D, NSString;

@interface IGRaindropMarqueeClickEvent : TBaseStruct <TBase, NSCoding> {

	IGRaindropMarquee* __thrift_marquee;
	long long __thrift_sectionNumber;
	IGRaindropPositionIn2D* __thrift_position;
	NSString* __thrift_algorithm;
	NSString* __thrift_clusterKey;
	int __thrift_sectionType;
	char __thrift_marquee_set;
	char __thrift_sectionNumber_set;
	char __thrift_position_set;
	char __thrift_algorithm_set;
	char __thrift_clusterKey_set;
	char __thrift_sectionType_set;

}

@property (nonatomic,retain) IGRaindropMarquee * marquee; 
@property (assign,nonatomic) long long sectionNumber; 
@property (nonatomic,retain) IGRaindropPositionIn2D * position; 
@property (nonatomic,retain) NSString * algorithm; 
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
-(void)setMarquee:(IGRaindropMarquee *)arg1 ;
-(IGRaindropMarquee *)marquee;
-(char)marqueeIsSet;
-(void)unsetMarquee;
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
-(id)initWithMarquee:(id)arg1 sectionNumber:(long long)arg2 position:(id)arg3 algorithm:(id)arg4 clusterKey:(id)arg5 sectionType:(int)arg6 ;
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
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

