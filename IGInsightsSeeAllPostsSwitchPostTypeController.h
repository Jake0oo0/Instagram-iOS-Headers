/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:49 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol IGInsightsSeeAllPostsSwitchPostTypeControllerDelegate;
@class UITableView, NSArray, NSString;

@interface IGInsightsSeeAllPostsSwitchPostTypeController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	id<IGInsightsSeeAllPostsSwitchPostTypeControllerDelegate> _delegate;
	UITableView* _tableView;
	unsigned _activeIndex;
	NSArray* _mediaIDs;
	NSArray* _titles;

}

@property (assign,nonatomic) unsigned activeIndex;                                                                   //@synthesize activeIndex=_activeIndex - In the implementation block
@property (nonatomic,copy) NSArray * mediaIDs;                                                                       //@synthesize mediaIDs=_mediaIDs - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSArray * titles;                                                                         //@synthesize titles=_titles - In the implementation block
@property (assign,nonatomic,__weak) id<IGInsightsSeeAllPostsSwitchPostTypeControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)mediaIDs;
-(void)setMediaIDs:(NSArray *)arg1 ;
-(void)setActiveIndex:(unsigned)arg1 ;
-(unsigned)activeIndex;
-(void)updateTitles:(id)arg1 mediaIDs:(id)arg2 activeIndex:(unsigned)arg3 ;
-(id)currentActiveCellTitle;
-(void)setDelegate:(id<IGInsightsSeeAllPostsSwitchPostTypeControllerDelegate>)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<IGInsightsSeeAllPostsSwitchPostTypeControllerDelegate>)delegate;
-(void)loadView;
-(UITableView *)tableView;
-(void)setTitles:(NSArray *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(NSArray *)titles;
@end

