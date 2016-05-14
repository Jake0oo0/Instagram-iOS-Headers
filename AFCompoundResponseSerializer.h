/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:35 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/AFHTTPResponseSerializer.h>

@class NSArray;

@interface AFCompoundResponseSerializer : AFHTTPResponseSerializer {

	NSArray* _responseSerializers;

}

@property (nonatomic,retain) NSArray * responseSerializers;              //@synthesize responseSerializers=_responseSerializers - In the implementation block
+(id)compoundSerializerWithResponseSerializers:(id)arg1 ;
-(void)setResponseSerializers:(NSArray *)arg1 ;
-(NSArray *)responseSerializers;
-(id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

