/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:36 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/TProtocol.h>

@protocol TTransport;
@class NSString;

@interface TBinaryProtocol : NSObject <TProtocol> {

	id<TTransport> mTransport;
	char mStrictRead;
	char mStrictWrite;
	int mMessageSizeLimit;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTransport:(id)arg1 strictRead:(char)arg2 strictWrite:(char)arg3 ;
-(int)readI32;
-(int)messageSizeLimit;
-(id)readStringBody:(int)arg1 ;
-(short)readI16;
-(long long)readI64;
-(void)writeI32:(int)arg1 ;
-(void)writeByte:(unsigned char)arg1 ;
-(void)writeI16:(short)arg1 ;
-(void)writeI64:(long long)arg1 ;
-(void)readMessageBeginReturningName:(id*)arg1 type:(int*)arg2 sequenceID:(int*)arg3 ;
-(void)readMessageEnd;
-(void)readStructBeginReturningName:(id*)arg1 ;
-(void)readStructEnd;
-(void)readFieldBeginReturningName:(id*)arg1 type:(int*)arg2 fieldID:(int*)arg3 ;
-(void)readFieldEnd;
-(char)readBool;
-(id)readBinary;
-(void)readMapBeginReturningKeyType:(int*)arg1 valueType:(int*)arg2 size:(int*)arg3 ;
-(void)readMapEnd;
-(void)readSetBeginReturningElementType:(int*)arg1 size:(int*)arg2 ;
-(void)readSetEnd;
-(void)readListBeginReturningElementType:(int*)arg1 size:(int*)arg2 ;
-(void)readListEnd;
-(void)writeMessageBeginWithName:(id)arg1 type:(int)arg2 sequenceID:(int)arg3 ;
-(void)writeMessageEnd;
-(void)writeStructBeginWithName:(id)arg1 ;
-(void)writeStructEnd;
-(void)writeFieldBeginWithName:(id)arg1 type:(int)arg2 fieldID:(int)arg3 ;
-(void)writeDouble:(double)arg1 ;
-(void)writeBool:(char)arg1 ;
-(void)writeBinary:(id)arg1 ;
-(void)writeFieldStop;
-(void)writeFieldEnd;
-(void)writeMapBeginWithKeyType:(int)arg1 valueType:(int)arg2 size:(int)arg3 ;
-(void)writeMapEnd;
-(void)writeSetBeginWithElementType:(int)arg1 size:(int)arg2 ;
-(void)writeSetEnd;
-(void)writeListBeginWithElementType:(int)arg1 size:(int)arg2 ;
-(void)writeListEnd;
-(void)setMessageSizeLimit:(int)arg1 ;
-(void)dealloc;
-(unsigned char)readByte;
-(id)readString;
-(id)initWithTransport:(id)arg1 ;
-(id)transport;
-(void)writeString:(id)arg1 ;
-(double)readDouble;
@end

