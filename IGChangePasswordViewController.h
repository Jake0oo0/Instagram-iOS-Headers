/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:47 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGTextFieldDelegate.h>

@class IGTextField, NSArray, NSString;

@interface IGChangePasswordViewController : IGGroupedTableViewController <IGTextFieldDelegate> {

	IGTextField* _currentPasswordField;
	IGTextField* _changedPasswordField;
	IGTextField* _confirmPasswordField;
	NSArray* _fields;
	IGTextField* _currentField;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)prefersTabBarHidden;
-(void)validateAndSubmit;
-(id)indexPathForAccessoryView:(id)arg1 ;
-(char)scrollToAccessory:(id)arg1 ;
-(char)validateField:(id)arg1 ;
-(char)fieldIsLongEnough:(id)arg1 ;
-(void)showPasswordLengthAlert;
-(char)fieldsMatch;
-(void)showPasswordsDoNotMatchAlert;
-(void)updateDoneButton;
-(void)textFieldDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)keyboardDidShow:(id)arg1 ;
-(void)dismiss;
-(void)setCurrentField:(id)arg1 ;
@end

