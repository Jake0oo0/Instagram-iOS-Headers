/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:50 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUserDefaults, NSURL;

@interface IGFacebookURLBuilder : NSObject {

	NSString* _host;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,retain) NSString * host;                              //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) NSURL * graphQLBaseURL; 
@property (nonatomic,readonly) NSURL * mSiteBaseURL; 
@property (nonatomic,readonly) NSUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
+(id)sharedInstance;
-(NSURL *)graphQLBaseURL;
-(NSURL *)mSiteBaseURL;
-(id)init;
-(void)synchronize;
-(NSString *)host;
-(NSUserDefaults *)userDefaults;
-(id)initWithUserDefaults:(id)arg1 ;
-(void)setHost:(NSString *)arg1 ;
@end

