/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:56 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
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

