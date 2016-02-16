/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:16:03 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/SRWebSocketDelegate.h>

@class NSMutableSet, NSString;

@interface IGWebSocketManager : NSObject <SRWebSocketDelegate> {

	NSMutableSet* _socketSet;

}

@property (nonatomic,retain) NSMutableSet * socketSet;              //@synthesize socketSet=_socketSet - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)closeWebSocket:(id)arg1 ;
+(id)sharedManager;
-(void)closeWebSocket:(id)arg1 ;
-(void)addSocket:(id)arg1 ;
-(void)removeSocket:(id)arg1 ;
-(NSMutableSet *)socketSet;
-(void)setSocketSet:(NSMutableSet *)arg1 ;
-(void)webSocket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)webSocket:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)webSocket:(id)arg1 didCloseWithCode:(int)arg2 reason:(id)arg3 wasClean:(char)arg4 ;
-(id)init;
@end

