/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:55 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IGUsernameHelperCheckResult : NSObject {

	char _isValid;
	NSString* _username;

}

@property (nonatomic,copy) NSString * username;              //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) char isValid;                   //@synthesize isValid=_isValid - In the implementation block
-(char)isValid;
-(void)setIsValid:(char)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

