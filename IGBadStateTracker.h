/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:10 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface IGBadStateTracker : NSObject {

	char _tracking;
	char _backgroundedWhileTracking;

}

@property (assign) char tracking;                               //@synthesize tracking=_tracking - In the implementation block
@property (assign) char backgroundedWhileTracking;              //@synthesize backgroundedWhileTracking=_backgroundedWhileTracking - In the implementation block
+(void)initialize;
+(id)sharedTracker;
-(void)appBecameActive;
-(void)appBackgrounded;
-(char)backgroundedWhileTracking;
-(void)setBackgroundedWhileTracking:(char)arg1 ;
-(void)beginTracking;
-(void)dealloc;
-(id)init;
-(void)setTracking:(char)arg1 ;
-(void)endTracking;
-(char)tracking;
@end

