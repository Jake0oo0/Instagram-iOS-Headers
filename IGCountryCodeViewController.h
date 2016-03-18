
#import <Instagram/IGGroupedTableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol IGCountryCodeViewControllerDelegate;
@class NSDictionary, NSArray, NSString;

@interface IGCountryCodeViewController : IGGroupedTableViewController <UITableViewDataSource, UITableViewDelegate> {

	NSDictionary* _countryNameToCountryNumberMap;
	id<IGCountryCodeViewControllerDelegate> _delegate;
	NSArray* _countryDataArray;

}

@property (nonatomic,retain) NSDictionary * countryNameToCountryNumberMap;                         //@synthesize countryNameToCountryNumberMap=_countryNameToCountryNumberMap - In the implementation block
@property (assign,nonatomic,__weak) id<IGCountryCodeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * countryDataArray;                                           //@synthesize countryDataArray=_countryDataArray - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)countryNameToCountryNumberMap;
-(void)setCountryDataArray:(NSArray *)arg1 ;
-(NSArray *)countryDataArray;
-(void)setCountryNameToCountryNumberMap:(NSDictionary *)arg1 ;
-(void)setDelegate:(id<IGCountryCodeViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<IGCountryCodeViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)dismiss;
@end

