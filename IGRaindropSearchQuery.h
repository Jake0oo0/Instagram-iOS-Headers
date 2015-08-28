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

@interface IGRaindropSearchQuery : TBaseStruct <TBase, NSCoding> {

	NSString* __thrift_searchQueryText;
	double __thrift_timestamp;
	long long __thrift_rttInMillis;
	char __thrift_searchQueryText_set;
	char __thrift_timestamp_set;
	char __thrift_rttInMillis_set;

}

@property (nonatomic,retain) NSString * searchQueryText; 
@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) long long rttInMillis; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(NSString *)searchQueryText;
-(void)setSearchQueryText:(NSString *)arg1 ;
-(void)setRttInMillis:(long long)arg1 ;
-(void)read:(id)arg1 ;
-(id)initWithSearchQueryText:(id)arg1 timestamp:(double)arg2 rttInMillis:(long long)arg3 ;
-(char)searchQueryTextIsSet;
-(void)unsetSearchQueryText;
-(char)timestampIsSet;
-(void)unsetTimestamp;
-(long long)rttInMillis;
-(char)rttInMillisIsSet;
-(void)unsetRttInMillis;
-(char)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)validate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

