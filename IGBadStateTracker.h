/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:42 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
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

