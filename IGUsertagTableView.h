
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITableView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Instagram/IGUserListNetworkDataSourceDelegate.h>

@protocol IGAutocompleteDataSource, IGUsertagTableViewDelegate;
@class IGUserListLocalDataSource, IGUserListNetworkDataSource, NSObject, NSString;

@interface IGUsertagTableView : UITableView <UITableViewDelegate, UITableViewDataSource, IGUserListNetworkDataSourceDelegate> {

	IGUserListLocalDataSource* _localUsersDataSource;
	IGUserListNetworkDataSource* _networkUsersDataSource;
	NSObject*<IGAutocompleteDataSource> _currentDataSource;
	id<IGUsertagTableViewDelegate> _tagDelegate;
	NSString* _query;

}

@property (assign,nonatomic,__weak) id<IGUsertagTableViewDelegate> tagDelegate;              //@synthesize tagDelegate=_tagDelegate - In the implementation block
@property (nonatomic,copy) NSString * query;                                                 //@synthesize query=_query - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 userCellForRow:(int)arg2 ;
-(void)dataSourceDidStartLoading:(id)arg1 ;
-(void)dataSourceDidFinishLoading:(id)arg1 ;
-(void)dataSourceDidFailLoad:(id)arg1 ;
-(id)noResultsCellForTableView:(id)arg1 ;
-(void)setTagDelegate:(id<IGUsertagTableViewDelegate>)arg1 ;
-(id)searchPromptCellForTableView:(id)arg1 ;
-(id<IGUsertagTableViewDelegate>)tagDelegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(void)performSearch;
@end

