/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:36 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/TTransport.h>

@protocol TTransport;
@class NSMutableData, NSString;

@interface TFramedTransport : NSObject <TTransport> {

	id<TTransport> mTransport;
	NSMutableData* writeBuffer;
	NSMutableData* readBuffer;
	unsigned readOffset;
	unsigned char dummy_header[4];

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)readAll:(char*)arg1 offset:(int)arg2 length:(int)arg3 ;
-(void)write:(const char*)arg1 offset:(unsigned)arg2 length:(unsigned)arg3 ;
-(void)readFrame;
-(void)dealloc;
-(void)flush;
-(id)initWithTransport:(id)arg1 ;
@end

