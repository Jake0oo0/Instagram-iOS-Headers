
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol IGInsightsSeeAllPostsSwitchPostTypeControllerDelegate;
@class NSArray, UITableView, NSString;

@interface IGInsightsSeeAllPostsSwitchPostTypeController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	id<IGInsightsSeeAllPostsSwitchPostTypeControllerDelegate> _delegate;
	unsigned _activeIndex;
	NSArray* _mediaIDs;
	UITableView* _tableView;
	NSArray* _titles;

}

@property (assign,nonatomic,__weak) id<IGInsightsSeeAllPostsSwitchPostTypeControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned activeIndex;                                                                   //@synthesize activeIndex=_activeIndex - In the implementation block
@property (nonatomic,copy) NSArray * mediaIDs;                                                                       //@synthesize mediaIDs=_mediaIDs - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSArray * titles;                                                                         //@synthesize titles=_titles - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMediaIDs:(NSArray *)arg1 ;
-(NSArray *)mediaIDs;
-(void)setActiveIndex:(unsigned)arg1 ;
-(unsigned)activeIndex;
-(void)updateTitles:(id)arg1 mediaIDs:(id)arg2 activeIndex:(unsigned)arg3 ;
-(id)getCurrentActiveCellTitle;
-(id)getTableView;
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

