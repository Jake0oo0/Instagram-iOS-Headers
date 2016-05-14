/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:48 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>

@protocol IGAmebaThemesDelegate;
@class NSMutableArray, NSDictionary, UIActivityIndicatorView;

@interface IGAmebaThemesViewController : IGGroupedTableViewController {

	struct {
		unsigned hasManageableThemes : 1;
		unsigned anUnknownErrorOccurred : 1;
		unsigned updating : 1;
	}  _flags;
	id<IGAmebaThemesDelegate> _delegate;
	NSMutableArray* _themes;
	NSDictionary* _selectedTheme;
	UIActivityIndicatorView* _loadingIndicator;

}

@property (nonatomic,retain) NSMutableArray * themes;                                 //@synthesize themes=_themes - In the implementation block
@property (nonatomic,retain) NSDictionary * selectedTheme;                            //@synthesize selectedTheme=_selectedTheme - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (assign,nonatomic,__weak) id<IGAmebaThemesDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(id)analyticsModule;
-(void)amebaAuthDidFinish;
-(void)fetchThemes;
-(void)configureThemesSectionCell:(id)arg1 forRow:(int)arg2 ;
-(void)storeAmebaTheme:(id)arg1 ;
-(void)didSelectThemesSectionRow:(id)arg1 ;
-(void)amebaDidLoadTheme:(id)arg1 ;
-(void)configureCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)displayUnknownError;
-(void)showLoadingIndicator;
-(void)hideLoadingIndicator;
-(void)setSelectedTheme:(NSDictionary *)arg1 ;
-(NSDictionary *)selectedTheme;
-(void)setDelegate:(id<IGAmebaThemesDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id<IGAmebaThemesDelegate>)delegate;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
-(NSMutableArray *)themes;
-(void)setThemes:(NSMutableArray *)arg1 ;
@end

