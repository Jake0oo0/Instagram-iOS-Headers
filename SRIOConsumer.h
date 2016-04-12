/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:59 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SRIOConsumer : NSObject {

	/*^block*/id _scanner;
	/*^block*/id _handler;
	unsigned long _bytesNeeded;
	char _readToCurrentFrame;
	char _unmaskBytes;

}

@property (nonatomic,copy,readonly) id consumer;                     //@synthesize scanner=_scanner - In the implementation block
@property (nonatomic,copy,readonly) id handler;                      //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) unsigned long bytesNeeded;              //@synthesize bytesNeeded=_bytesNeeded - In the implementation block
@property (nonatomic,readonly) char readToCurrentFrame;              //@synthesize readToCurrentFrame=_readToCurrentFrame - In the implementation block
@property (nonatomic,readonly) char unmaskBytes;                     //@synthesize unmaskBytes=_unmaskBytes - In the implementation block
-(unsigned long)bytesNeeded;
-(char)readToCurrentFrame;
-(char)unmaskBytes;
-(void)setBytesNeeded:(unsigned long)arg1 ;
-(void)setupWithScanner:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 bytesNeeded:(unsigned long)arg3 readToCurrentFrame:(char)arg4 unmaskBytes:(char)arg5 ;
-(id)handler;
-(id)consumer;
@end

