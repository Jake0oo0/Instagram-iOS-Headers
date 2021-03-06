
#import <Instagram/IGInsightsDataProviderDelegate.h>
#import <Instagram/IGInsightsComponentViewControllerNavigationDelegate.h>
#import <Instagram/IGInsightsComponentAdapter.h>

@protocol IGInsightsComponentNavigationDelegate;
@class NSString, IGInsightsQuery, NSArray, IGInsightsCollectionView, IGInsightsCollectionViewController, IGInsightsDataProvider, IGInsightsLoggingHelper;

@interface IGInsightsCollectionViewComponentAdapter : NSObject <IGInsightsDataProviderDelegate, IGInsightsComponentViewControllerNavigationDelegate, IGInsightsComponentAdapter> {

	id<IGInsightsComponentNavigationDelegate> navigationDelegate;
	NSString* _header;
	NSString* _buttonText;
	IGInsightsQuery* _buttonQuery;
	NSArray* _mediaIDs;
	IGInsightsCollectionView* _componentView;
	IGInsightsCollectionViewController* _insightsCollectionViewController;
	NSArray* _mediaBundles;
	IGInsightsDataProvider* _mediaBundleDataProvider;
	IGInsightsLoggingHelper* _loggingHelper;

}

@property (nonatomic,copy) NSString * header;                                                                    //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * buttonText;                                                                //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,retain) IGInsightsQuery * buttonQuery;                                                      //@synthesize buttonQuery=_buttonQuery - In the implementation block
@property (nonatomic,copy) NSArray * mediaIDs;                                                                   //@synthesize mediaIDs=_mediaIDs - In the implementation block
@property (nonatomic,retain) IGInsightsCollectionView * componentView;                                           //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,retain) IGInsightsCollectionViewController * insightsCollectionViewController;              //@synthesize insightsCollectionViewController=_insightsCollectionViewController - In the implementation block
@property (nonatomic,copy) NSArray * mediaBundles;                                                               //@synthesize mediaBundles=_mediaBundles - In the implementation block
@property (nonatomic,retain) IGInsightsDataProvider * mediaBundleDataProvider;                                   //@synthesize mediaBundleDataProvider=_mediaBundleDataProvider - In the implementation block
@property (nonatomic,retain) IGInsightsLoggingHelper * loggingHelper;                                            //@synthesize loggingHelper=_loggingHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentNavigationDelegate> navigationDelegate; 
-(IGInsightsLoggingHelper *)loggingHelper;
-(IGInsightsQuery *)buttonQuery;
-(void)setMediaBundles:(NSArray *)arg1 ;
-(IGInsightsCollectionView *)componentView;
-(NSArray *)mediaBundles;
-(void)didGetResponseForDataProvider:(id)arg1 ;
-(void)requestFailureForDataProvider:(id)arg1 errorMessage:(id)arg2 ;
-(void)didSelectNavigateInComponentViewController:(id)arg1 toViewController:(id)arg2 animated:(char)arg3 ;
-(id)initWithComponent:(id)arg1 loggingHelper:(id)arg2 surface:(unsigned)arg3 ;
-(char)isComponentValid;
-(void)setButtonQuery:(IGInsightsQuery *)arg1 ;
-(NSArray *)mediaIDs;
-(void)setMediaIDs:(NSArray *)arg1 ;
-(void)setComponentView:(IGInsightsCollectionView *)arg1 ;
-(IGInsightsDataProvider *)mediaBundleDataProvider;
-(void)setMediaBundleDataProvider:(IGInsightsDataProvider *)arg1 ;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(void)_fetchFeedItemsFromMediaIDs:(id)arg1 ;
-(void)_updateViewWithMediaBundle:(id)arg1 ;
-(void)setInsightsCollectionViewController:(IGInsightsCollectionViewController *)arg1 ;
-(IGInsightsCollectionViewController *)insightsCollectionViewController;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)header;
-(id<IGInsightsComponentNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentNavigationDelegate>)arg1 ;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
@end

