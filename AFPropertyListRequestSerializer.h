/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:16:01 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/AFHTTPRequestSerializer.h>

@interface AFPropertyListRequestSerializer : AFHTTPRequestSerializer {

	unsigned _format;
	unsigned _writeOptions;

}

@property (assign,nonatomic) unsigned format;                    //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned writeOptions;              //@synthesize writeOptions=_writeOptions - In the implementation block
+(id)serializerWithFormat:(unsigned)arg1 writeOptions:(unsigned)arg2 ;
+(id)serializer;
-(id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id*)arg3 ;
-(void)setWriteOptions:(unsigned)arg1 ;
-(unsigned)writeOptions;
-(unsigned)format;
-(void)setFormat:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

