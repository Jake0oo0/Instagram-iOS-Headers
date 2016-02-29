/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:46 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGGroupedTableViewController.h>

@protocol IGMixiAdvancedOptionsDelegate;
@class NSArray, NSDictionary, UIBarButtonItem;

@interface IGMixiAdvancedOptionsViewController : IGGroupedTableViewController {

	NSArray* _availablePrivacySettings;
	NSDictionary* _privacySettingsMap;
	int _originalPrivacySetting;
	UIBarButtonItem* _doneButtonItem;
	id<IGMixiAdvancedOptionsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGMixiAdvancedOptionsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)onCancelModal;
-(void)onDoneTapped:(id)arg1 ;
-(id)tableView:(id)arg1 optionCellForRow:(int)arg2 ;
-(id)unlinkCellForTableView:(id)arg1 ;
-(void)setDelegate:(id<IGMixiAdvancedOptionsDelegate>)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id<IGMixiAdvancedOptionsDelegate>)delegate;
-(void)viewDidLoad;
@end

