
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGCoreTextLinkHandler.h>

@class NSString;

@interface IGUsertagSettingsViewController : IGGroupedTableViewController <IGCoreTextLinkHandler> {

	int _savedReviewSetting;
	int _selectedReviewSetting;
	char _isLoading;
	int _photoCount;

}

@property (assign,nonatomic) int photoCount;                        //@synthesize photoCount=_photoCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(id)tableView:(id)arg1 subtitleForHeaderInSection:(int)arg2 ;
-(void)onDoneButtonTapped;
-(void)submitWithStartHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 failureHandler:(/*^block*/id)arg3 ;
-(int)photoCount;
-(void)setPhotoCount:(int)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)viewDidLoad;
@end

