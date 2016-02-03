/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:31 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGInsightsDataProviderDelegate.h>
#import <Instagram/IGInsightsComponentViewControllerNavigationDelegate.h>
#import <Instagram/IGInsightsComponentAdapter.h>

@protocol IGInsightsComponentNavigationDelegate;
@class NSString, NSArray, IGInsightsCollectionView, IGInsightsCollectionViewController, IGInsightsDataProvider;

@interface IGInsightsCollectionViewComponentAdapter : NSObject <IGInsightsDataProviderDelegate, IGInsightsComponentViewControllerNavigationDelegate, IGInsightsComponentAdapter> {

	id<IGInsightsComponentNavigationDelegate> navigationDelegate;
	NSString* _header;
	NSString* _buttonText;
	NSArray* _mediaIDs;
	IGInsightsCollectionView* _componentView;
	IGInsightsCollectionViewController* _insightsCollectionViewController;
	NSArray* _mediaBundles;
	IGInsightsDataProvider* _mediaBundleDataProvider;

}

@property (nonatomic,copy) NSString * header;                                                                    //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * buttonText;                                                                //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,copy) NSArray * mediaIDs;                                                                   //@synthesize mediaIDs=_mediaIDs - In the implementation block
@property (nonatomic,retain) IGInsightsCollectionView * componentView;                                           //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,retain) IGInsightsCollectionViewController * insightsCollectionViewController;              //@synthesize insightsCollectionViewController=_insightsCollectionViewController - In the implementation block
@property (nonatomic,copy) NSArray * mediaBundles;                                                               //@synthesize mediaBundles=_mediaBundles - In the implementation block
@property (nonatomic,retain) IGInsightsDataProvider * mediaBundleDataProvider;                                   //@synthesize mediaBundleDataProvider=_mediaBundleDataProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGInsightsComponentNavigationDelegate> navigationDelegate; 
-(NSArray *)mediaBundles;
-(void)setMediaIDs:(NSArray *)arg1 ;
-(void)setMediaBundles:(NSArray *)arg1 ;
-(NSArray *)mediaIDs;
-(void)_fetchFeedItemsFromMediaIDs:(id)arg1 ;
-(void)_initializeComponentView;
-(void)setInsightsCollectionViewController:(IGInsightsCollectionViewController *)arg1 ;
-(IGInsightsCollectionViewController *)insightsCollectionViewController;
-(void)_updateViewWithMediaBundle:(id)arg1 ;
-(void)didGetResponseForDataProvider:(id)arg1 ;
-(void)didSelectNavigateInComponentViewController:(id)arg1 toViewController:(id)arg2 animated:(char)arg3 ;
-(id)initWithComponent:(id)arg1 ;
-(IGInsightsCollectionView *)componentView;
-(void)setComponentView:(IGInsightsCollectionView *)arg1 ;
-(IGInsightsDataProvider *)mediaBundleDataProvider;
-(void)setMediaBundleDataProvider:(IGInsightsDataProvider *)arg1 ;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)header;
-(id<IGInsightsComponentNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<IGInsightsComponentNavigationDelegate>)arg1 ;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
@end

