
#import <Instagram/IGWebViewTableViewCellDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>
#import <Instagram/IGNewsTableViewCellDelegate.h>
#import <Instagram/IGNewsDataSourceSection.h>

@protocol IGNewsDataSourceSectionDelegate;
@class NSString, NSOrderedSet, NSMutableDictionary;

@interface IGNewsDataSourceStoriesSection : NSObject <IGWebViewTableViewCellDelegate, IGRaindropAnalyticsDelegate, IGNewsTableViewCellDelegate, IGNewsDataSourceSection> {

	NSString* _title;
	id<IGNewsDataSourceSectionDelegate> _delegate;
	NSOrderedSet* _stories;
	NSMutableDictionary* _webViewCellSizes;

}

@property (nonatomic,copy) NSOrderedSet * stories;                                             //@synthesize stories=_stories - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * webViewCellSizes;                         //@synthesize webViewCellSizes=_webViewCellSizes - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGNewsDataSourceSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSString * title; 
@property (readonly) unsigned* numberOfRows; 
+(id)sectionWithTitle:(id)arg1 stories:(id)arg2 ;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(void)setStories:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)stories;
-(NSMutableDictionary *)webViewCellSizes;
-(void)webNewsCell:(id)arg1 didCalculateHeight:(float)arg2 ;
-(void)newsCell:(id)arg1 openURL:(id)arg2 ;
-(void)setUpTableView:(id)arg1 ;
-(void)setDelegate:(id<IGNewsDataSourceSectionDelegate>)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id<IGNewsDataSourceSectionDelegate>)delegate;
-(NSString *)title;
-(unsigned*)numberOfRows;
-(id)tableView:(id)arg1 cellForRowAtIndex:(unsigned)arg2 ;
-(float)tableView:(id)arg1 heightForRowAtIndex:(unsigned)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(unsigned)arg2 ;
@end
