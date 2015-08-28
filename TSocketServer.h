/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:35 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TProtocolFactory, TProcessorFactory;
@class NSFileHandle;

@interface TSocketServer : NSObject {

	NSFileHandle* mSocketFileHandle;
	id<TProtocolFactory> mInputProtocolFactory;
	id<TProtocolFactory> mOutputProtocolFactory;
	id<TProcessorFactory> mProcessorFactory;

}
-(void)connectionAccepted:(id)arg1 ;
-(id)initWithPort:(int)arg1 protocolFactory:(id)arg2 processorFactory:(id)arg3 ;
-(void)dealloc;
-(void)handleClientConnection:(id)arg1 ;
@end

