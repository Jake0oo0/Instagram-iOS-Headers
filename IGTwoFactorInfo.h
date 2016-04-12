/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:55 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IGConfirmPhoneSettings;

@interface IGTwoFactorInfo : NSObject {

	NSString* _username;
	NSString* _twoFactorIdentifier;
	NSString* _obfuscatedPhoneNumber;
	IGConfirmPhoneSettings* _confirmPhoneSettings;

}

@property (nonatomic,readonly) NSString * username;                                        //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * twoFactorIdentifier;                             //@synthesize twoFactorIdentifier=_twoFactorIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * obfuscatedPhoneNumber;                           //@synthesize obfuscatedPhoneNumber=_obfuscatedPhoneNumber - In the implementation block
@property (nonatomic,readonly) IGConfirmPhoneSettings * confirmPhoneSettings;              //@synthesize confirmPhoneSettings=_confirmPhoneSettings - In the implementation block
-(IGConfirmPhoneSettings *)confirmPhoneSettings;
-(NSString *)twoFactorIdentifier;
-(NSString *)obfuscatedPhoneNumber;
-(id)initWithUsername:(id)arg1 twoFactorIdentifier:(id)arg2 obfuscatedPhoneNumber:(id)arg3 confirmPhoneSettings:(id)arg4 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)username;
@end

