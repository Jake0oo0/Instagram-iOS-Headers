/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:58 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGFeedNetworkSourceDelegate.h>

@protocol IGInsightsDataProviderDelegate;
@class NSArray, NSString;

@interface IGInsightsDataProvider : NSObject <IGFeedNetworkSourceDelegate> {

	id<IGInsightsDataProviderDelegate> _delegate;
	NSArray* _tabs;
	NSArray* _subtabs;
	NSArray* _mediaOrderSelectorTabs;
	NSArray* _components;
	NSArray* _mediaBundle;
	NSString* _dataSourceFileName;

}

@property (assign,nonatomic,__weak) id<IGInsightsDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * tabs;                                                    //@synthesize tabs=_tabs - In the implementation block
@property (nonatomic,copy) NSArray * subtabs;                                                 //@synthesize subtabs=_subtabs - In the implementation block
@property (nonatomic,copy) NSArray * mediaOrderSelectorTabs;                                  //@synthesize mediaOrderSelectorTabs=_mediaOrderSelectorTabs - In the implementation block
@property (nonatomic,copy) NSArray * components;                                              //@synthesize components=_components - In the implementation block
@property (nonatomic,copy) NSArray * mediaBundle;                                             //@synthesize mediaBundle=_mediaBundle - In the implementation block
@property (nonatomic,copy) NSString * dataSourceFileName;                                     //@synthesize dataSourceFileName=_dataSourceFileName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(id)getMediaBundle;
-(void)queryMediaBundleWithMediaIDs:(id)arg1 ;
-(NSArray *)mediaOrderSelectorTabs;
-(void)queryInsightsItemsWithQueryItems:(id)arg1 ;
-(id)getComponents;
-(id)getMediaOrderSelectorTabs;
-(void)setMediaOrderSelectorTabs:(NSArray *)arg1 ;
-(id)getSubtabs;
-(void)queryInsightsItemsWithQueryItemsWithFBSDK:(id)arg1 readLocal:(char)arg2 localFileName:(id)arg3 ;
-(id)buildUrlFromQueryItems:(id)arg1 ;
-(void)onDataReceived:(id)arg1 readLocal:(char)arg2 localFileName:(id)arg3 ;
-(id)buildGraphPathFromQueryItems:(id)arg1 ;
-(id)loadDummyDataFromFile:(id)arg1 ;
-(void)parseAndSaveResponse:(id)arg1 ;
-(void)setTabs:(NSArray *)arg1 ;
-(void)setSubtabs:(NSArray *)arg1 ;
-(void)parseComponentsFromItems:(id)arg1 ;
-(void)setMediaBundle:(NSArray *)arg1 ;
-(void)queryTabBarItemsAndDefaultTabContent;
-(void)querySeeAllPostsViewTabBarItemsAndDefaultTabContent;
-(void)queryInsightsItemsWithQueryItemsIGRequest:(id)arg1 readLocal:(char)arg2 localFileName:(id)arg3 ;
-(id)getTabs;
-(NSArray *)subtabs;
-(NSArray *)mediaBundle;
-(NSString *)dataSourceFileName;
-(void)setDataSourceFileName:(NSString *)arg1 ;
-(void)setDelegate:(id<IGInsightsDataProviderDelegate>)arg1 ;
-(id<IGInsightsDataProviderDelegate>)delegate;
-(NSArray *)components;
-(void)setComponents:(NSArray *)arg1 ;
-(NSArray *)tabs;
@end

