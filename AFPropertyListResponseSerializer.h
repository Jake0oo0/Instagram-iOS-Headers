/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:36 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
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
-(unsigned)format;
-(void)setFormat:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

