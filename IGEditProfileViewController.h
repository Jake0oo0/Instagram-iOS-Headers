/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:50 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGProfilePictureHelperDelegate.h>
#import <Instagram/IGGrowingTextViewDelegate.h>
#import <Instagram/IGChangeEmailViewControllerDelegate.h>
#import <Instagram/IGChangePhoneNumberViewControllerDelegate.h>
#import <Instagram/IGConfirmPhoneNumberViewControllerDelegate.h>

@class IGUserProfileGroupedTableViewCell, IGInsetLabel, NSDateFormatter, UIBarButtonItem, NSArray, UITextField, UIImage, NSString;

@interface IGEditProfileViewController : IGGroupedTableViewController <IGTextFieldDelegate, IGProfilePictureHelperDelegate, IGGrowingTextViewDelegate, IGChangeEmailViewControllerDelegate, IGChangePhoneNumberViewControllerDelegate, IGConfirmPhoneNumberViewControllerDelegate> {

	IGUserProfileGroupedTableViewCell* _profileCell;
	IGInsetLabel* _characterCountLabel;
	NSDateFormatter* _dateFormatter;
	UIBarButtonItem* _doneButton;
	NSArray* _textFields;
	UITextField* _currentField;
	char _hasUnsavedChanges;
	int _currentBioHeight;
	int _dataState;
	int _profilePictureState;
	char _emptyEmailConfirmed;
	char _submitting;
	char _needPhoneConfirm;
	char _needEmailConfirm;
	char _confirmedEmailInSession;
	char _confirmedPhoneInSession;
	UIImage* _profilePicture;
	int _profilePictureOption;
	NSString* _phoneNumber;

}

@property (nonatomic,retain) UIImage * profilePicture;                  //@synthesize profilePicture=_profilePicture - In the implementation block
@property (assign,nonatomic) int profilePictureOption;                  //@synthesize profilePictureOption=_profilePictureOption - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                    //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) char emptyEmailConfirmed;                  //@synthesize emptyEmailConfirmed=_emptyEmailConfirmed - In the implementation block
@property (assign,nonatomic) char submitting;                           //@synthesize submitting=_submitting - In the implementation block
@property (assign,nonatomic) char needPhoneConfirm;                     //@synthesize needPhoneConfirm=_needPhoneConfirm - In the implementation block
@property (assign,nonatomic) char needEmailConfirm;                     //@synthesize needEmailConfirm=_needEmailConfirm - In the implementation block
@property (assign,nonatomic) char confirmedEmailInSession;              //@synthesize confirmedEmailInSession=_confirmedEmailInSession - In the implementation block
@property (assign,nonatomic) char confirmedPhoneInSession;              //@synthesize confirmedPhoneInSession=_confirmedPhoneInSession - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)onCancelModal;
-(void)growingTextViewDidBeginEditing:(id)arg1 ;
-(void)growingTextViewDidEndEditing:(id)arg1 ;
-(void)growingTextViewDidChange:(id)arg1 ;
-(char)growingTextView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)growingTextView:(id)arg1 willChangeHeight:(float)arg2 ;
-(void)growingTextView:(id)arg1 didChangeHeight:(float)arg2 ;
-(char)growingTextViewShouldReturn:(id)arg1 ;
-(char)prefersTabBarHidden;
-(UIImage *)profilePicture;
-(void)setProfilePicture:(UIImage *)arg1 ;
-(void)fetchUserData;
-(void)confirmEmailDismissedWithSuccess:(char)arg1 forEmail:(id)arg2 ;
-(void)validateAndSubmit;
-(id)indexPathForAccessoryView:(id)arg1 ;
-(char)scrollToAccessory:(id)arg1 ;
-(void)confirmPhoneNumberViewControllerWantsToChangePhoneNumber:(id)arg1 ;
-(void)confirmPhoneNumberViewControllerWantsConfirmationCodeResent:(id)arg1 ;
-(void)confirmPhoneNumberViewControllerDidConfirmPhoneNumber:(id)arg1 withResponse:(id)arg2 ;
-(void)changePhoneNumberViewController:(id)arg1 doneEditingWithCountryNumber:(id)arg2 phoneNumber:(id)arg3 contactPreference:(unsigned)arg4 ;
-(char)needEmailConfirm;
-(char)confirmedEmailInSession;
-(void)setConfirmedEmailInSession:(char)arg1 ;
-(void)removeConfirmEmailButton;
-(char)showConfirmEmailButton;
-(char)showConfirmPhoneButton;
-(void)setEmptyEmailConfirmed:(char)arg1 ;
-(char)needPhoneConfirm;
-(char)confirmedPhoneInSession;
-(void)setConfirmedPhoneInSession:(char)arg1 ;
-(void)sendSMSCodeToPhoneNumber:(id)arg1 successHandler:(/*^block*/id)arg2 ;
-(void)confirmEmailButtonTapped;
-(void)confirmPhoneButtonTapped;
-(void)configureRequiredCell:(id)arg1 forIndexPath:(id)arg2 ;
-(char)validateField:(id)arg1 withAlert:(char)arg2 ;
-(void)removeConfirmPhoneButton;
-(char)emptyEmailConfirmed;
-(id)formData;
-(void)dataFetchedWithDictionary:(id)arg1 ;
-(void)dataFetchFailed:(id)arg1 ;
-(int)pickerIndexForGender:(int)arg1 ;
-(void)setNeedEmailConfirm:(char)arg1 ;
-(void)setNeedPhoneConfirm:(char)arg1 ;
-(int)profilePictureOption;
-(void)setProfilePictureOption:(int)arg1 ;
-(void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2 fromOption:(int)arg3 ;
-(char)profilePictureHelperShouldShowRemovePicture:(id)arg1 ;
-(void)profilePictureHelperRemovePictureButtonTapped:(id)arg1 ;
-(char)submitting;
-(void)setSubmitting:(char)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(void)keyboardDidShow:(id)arg1 ;
-(void)dismiss;
-(NSString *)phoneNumber;
-(void)setCurrentField:(id)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)submit;
@end

