/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:49 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

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
-(NSArray *)mediaBundles;
-(NSArray *)mediaIDs;
-(IGInsightsQuery *)buttonQuery;
-(void)_fetchFeedItemsFromMediaIDs:(id)arg1 ;
-(void)_updateViewWithMediaBundle:(id)arg1 ;
-(void)setInsightsCollectionViewController:(IGInsightsCollectionViewController *)arg1 ;
-(IGInsightsCollectionViewController *)insightsCollectionViewController;
-(void)setMediaBundles:(NSArray *)arg1 ;
-(void)didGetResponseForDataProvider:(id)arg1 ;
-(void)requestFailureForDataProvider:(id)arg1 errorMessage:(id)arg2 ;
-(void)didSelectNavigateInComponentViewController:(id)arg1 toViewController:(id)arg2 animated:(char)arg3 ;
-(id)initWithComponent:(id)arg1 loggingHelper:(id)arg2 surface:(unsigned)arg3 ;
-(char)isComponentValid;
-(IGInsightsCollectionView *)componentView;
-(void)setButtonQuery:(IGInsightsQuery *)arg1 ;
-(void)setMediaIDs:(NSArray *)arg1 ;
-(void)setComponentView:(IGInsightsCollectionView *)arg1 ;
-(IGInsightsDataProvider *)mediaBundleDataProvider;
-(void)setMediaBundleDataProvider:(IGInsightsDataProvider *)arg1 ;
-(IGInsightsLoggingHelper *)loggingHelper;
-(void)setLoggingHelper:(IGInsightsLoggingHelper *)arg1 ;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)header;
-(id<IGInsightsComponentNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentNavigationDelegate>)arg1 ;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
@end

