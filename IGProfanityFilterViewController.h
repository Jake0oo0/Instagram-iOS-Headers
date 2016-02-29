/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:47 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGGroupedTableViewController.h>

@class UIActivityIndicatorView;

@interface IGProfanityFilterViewController : IGGroupedTableViewController {

	char _initialProfanityFilterSetting;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;               //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) char initialProfanityFilterSetting;              //@synthesize initialProfanityFilterSetting=_initialProfanityFilterSetting - In the implementation block
-(char)prefersTabBarHidden;
-(char)initialProfanityFilterSetting;
-(void)setInitialProfanityFilterSetting:(char)arg1 ;
-(id)init;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
@end

