/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGFollowPeopleMegaphoneConfiguration, NSArray;

@interface IGFollowAccountListModel : NSObject {

	IGFollowPeopleMegaphoneConfiguration* _configuration;
	NSArray* _accountList;

}

@property (nonatomic,readonly) IGFollowPeopleMegaphoneConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSArray * accountList;                                             //@synthesize accountList=_accountList - In the implementation block
+(id)followAccountListFromResponse:(id)arg1 ;
-(NSArray *)accountList;
-(id)initWithConfiguration:(id)arg1 accountList:(id)arg2 ;
-(IGFollowPeopleMegaphoneConfiguration *)configuration;
@end

