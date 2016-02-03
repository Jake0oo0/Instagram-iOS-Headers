/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:31 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGFeedNetworkSourceDelegate.h>

@protocol IGInsightsDataProviderDelegate;
@class NSArray, NSString;

@interface IGInsightsDataProvider : NSObject <IGFeedNetworkSourceDelegate> {

	id<IGInsightsDataProviderDelegate> _delegate;
	NSArray* _tabs;
	NSArray* _subtabs;
	NSArray* _components;
	NSArray* _mediaBundle;

}

@property (assign,nonatomic,__weak) id<IGInsightsDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * tabs;                                                    //@synthesize tabs=_tabs - In the implementation block
@property (nonatomic,copy) NSArray * subtabs;                                                 //@synthesize subtabs=_subtabs - In the implementation block
@property (nonatomic,copy) NSArray * components;                                              //@synthesize components=_components - In the implementation block
@property (nonatomic,copy) NSArray * mediaBundle;                                             //@synthesize mediaBundle=_mediaBundle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(id)getMediaBundle;
-(void)queryMediaBundleWithMediaIDs:(id)arg1 ;
-(void)queryInsightsItemsWithQueryItems:(id)arg1 ;
-(id)getComponents;
-(void)querySeeAllPostsViewTabBarItemsAndDefaultTabContent;
-(id)getSubtabs;
-(void)queryInsightsItemsWithQueryItems:(id)arg1 readLocal:(char)arg2 ;
-(id)_buildUrlFromQueryItems:(id)arg1 ;
-(void)_onDataReceived:(id)arg1 readLocal:(char)arg2 ;
-(id)_loadDummyData;
-(void)_parseAndSaveResponse:(id)arg1 ;
-(void)setTabs:(NSArray *)arg1 ;
-(void)setSubtabs:(NSArray *)arg1 ;
-(void)_parseComponentsFromItems:(id)arg1 ;
-(void)setMediaBundle:(NSArray *)arg1 ;
-(void)queryTabBarItemsAndDefaultTabContent;
-(id)getTabs;
-(NSArray *)subtabs;
-(NSArray *)mediaBundle;
-(void)setDelegate:(id<IGInsightsDataProviderDelegate>)arg1 ;
-(id<IGInsightsDataProviderDelegate>)delegate;
-(NSArray *)components;
-(void)setComponents:(NSArray *)arg1 ;
-(NSArray *)tabs;
@end

