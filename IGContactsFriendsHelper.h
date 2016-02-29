/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:41 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGContactsHelperDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Instagram/IGFindFriendsHelperProtocol.h>

@protocol IGContactsFriendsHelperDelegate;
@class NSString;

@interface IGContactsFriendsHelper : NSObject <IGContactsHelperDelegate, UIAlertViewDelegate, IGFindFriendsHelperProtocol> {

	id<IGContactsFriendsHelperDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGContactsFriendsHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)authorizeAndFetchUsers;
-(void)updateUserTotalWithCount:(int)arg1 ;
-(void)authorizeAndFetchUsersWithDisclaimerModal:(char)arg1 ;
-(void)contactsHelperWasDeniedContacts;
-(void)contactsHelperDidFetchContacts:(id)arg1 ;
-(void)setDelegate:(id<IGContactsFriendsHelperDelegate>)arg1 ;
-(id<IGContactsFriendsHelperDelegate>)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
@end

