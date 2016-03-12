
#import <Instagram/IGWebViewControllerContinuationDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class IGFeedItem, UIViewController, NSString;

@interface IGFeedItemHideHandler : NSObject <IGWebViewControllerContinuationDelegate, UITableViewDataSource> {

	IGFeedItem* _feedItem;
	UIViewController* _viewController;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                                 //@synthesize feedItem=_feedItem - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(id)initWithFeedItem:(id)arg1 forViewController:(id)arg2 ;
-(unsigned)numberOfOptions;
-(void)hideForReasonAtIndex:(unsigned)arg1 ;
-(char)hasReasonAtIndex:(unsigned)arg1 ;
-(id)sectionHeaderViewForTableView:(id)arg1 ;
-(void)hideForReason:(id)arg1 withExtraDictionary:(id)arg2 ;
-(void)headerWasTapped:(id)arg1 ;
-(void)expandToShowOptions;
-(char)webViewController:(id)arg1 shouldStartLoadWithURL:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
@end

