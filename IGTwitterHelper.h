/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:22 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGXAuthServiceHelper.h>
#import <Instagram/IGActionSheetDelegate.h>

@class IGSwitch, NSString;

@interface IGTwitterHelper : IGXAuthServiceHelper <IGActionSheetDelegate> {

	char _errorCameUpDuringTweet;
	IGSwitch* _followSwitch;

}

@property (nonatomic,retain) IGSwitch * followSwitch;               //@synthesize followSwitch=_followSwitch - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedTwitterHelper;
+(id)accountStore;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)tweetPhotoLink:(id)arg1 username:(id)arg2 mediaType:(int)arg3 viewController:(id)arg4 ;
-(void)logoutAndUnlink;
-(int)numberOfExtraRowsForLogin;
-(void)prepareCell:(id)arg1 forIndexPath:(id)arg2 ;
-(id)shortServiceName;
-(void)requestTokenFromSystemAccounts;
-(id)viewControllerForAdvancedOptions;
-(IGSwitch *)followSwitch;
-(void)followTicket:(id)arg1 didSucceedWithData:(id)arg2 ;
-(void)followTicket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)onTwitterLoginCompleted:(id)arg1 ;
-(void)storeXauthCredentialsInSystemAccounts:(id)arg1 ;
-(void)followOfficialAccount;
-(void)saveLoginInfo;
-(id)reverseAuthURLRequest;
-(void)fetchSignatureForAccount:(id)arg1 ;
-(void)requestAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadProfilePictureWithDelegate:(id)arg1 screenName:(id)arg2 ;
-(void)reverseAuthTicket:(id)arg1 didFinishWithData:(id)arg2 ;
-(void)reverseAuthTicket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setFollowSwitch:(IGSwitch *)arg1 ;
-(id)consumerSecret;
-(id)consumerKey;
-(void)dealloc;
-(id)init;
-(id)URLString;
-(id)serviceName;
-(char)canSendTweet;
@end

