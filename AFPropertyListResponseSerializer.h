/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:34 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/AFHTTPResponseSerializer.h>

@interface AFPropertyListResponseSerializer : AFHTTPResponseSerializer {

	unsigned _format;
	unsigned _readOptions;

}

@property (assign,nonatomic) unsigned format;                   //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned readOptions;              //@synthesize readOptions=_readOptions - In the implementation block
+(id)serializerWithFormat:(unsigned)arg1 readOptions:(unsigned)arg2 ;
+(id)acceptablePathExtensions;
+(id)serializer;
-(id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(void)setReadOptions:(unsigned)arg1 ;
-(unsigned)readOptions;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)format;
-(void)setFormat:(unsigned)arg1 ;
@end

