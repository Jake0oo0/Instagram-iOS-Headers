/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:16:01 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/TNSStreamTransport.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSInputStream, NSOutputStream, NSString;

@interface TSocketClient : TNSStreamTransport <NSStreamDelegate> {

	NSInputStream* inputStream;
	NSOutputStream* outputStream;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithHostname:(id)arg1 port:(int)arg2 ;
-(void)dealloc;
@end

