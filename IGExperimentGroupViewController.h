/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:47 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGGroupedTableViewController.h>

@class IGExperiment;

@interface IGExperimentGroupViewController : IGGroupedTableViewController {

	IGExperiment* _experiment;

}

@property (nonatomic,retain) IGExperiment * experiment;              //@synthesize experiment=_experiment - In the implementation block
-(void)setExperiment:(IGExperiment *)arg1 ;
-(IGExperiment *)experiment;
-(void)onCloseTapped;
-(id)userGroupAtIndexPath:(id)arg1 ;
-(id)initWithExperiment:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
@end

