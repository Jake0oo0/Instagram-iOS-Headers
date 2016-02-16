/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:52 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedViewController_DEPRECATED.h>

@class IGFeedPostsConfiguration, UIView, IGFeedItem, NSIndexPath;

@interface IGPostsFeedViewController : IGFeedViewController_DEPRECATED {

	IGFeedPostsConfiguration* _configuration;
	UIView* _previewSplashView;
	IGFeedItem* _originalMediaPost;
	NSIndexPath* _savedVisibleIndexPath;
	float _savedVisibleIndexPathOffset;
	int _entryPoint;
	int _mode;

}

@property (nonatomic,readonly) IGFeedPostsConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) UIView * previewSplashView;                              //@synthesize previewSplashView=_previewSplashView - In the implementation block
@property (nonatomic,retain) IGFeedItem * originalMediaPost;                          //@synthesize originalMediaPost=_originalMediaPost - In the implementation block
@property (nonatomic,retain) NSIndexPath * savedVisibleIndexPath;                     //@synthesize savedVisibleIndexPath=_savedVisibleIndexPath - In the implementation block
@property (assign,nonatomic) float savedVisibleIndexPathOffset;                       //@synthesize savedVisibleIndexPathOffset=_savedVisibleIndexPathOffset - In the implementation block
@property (assign,nonatomic) int entryPoint;                                          //@synthesize entryPoint=_entryPoint - In the implementation block
@property (assign,nonatomic) int mode;                                                //@synthesize mode=_mode - In the implementation block
-(void)setEntryPoint:(int)arg1 ;
-(id)analyticsModule;
-(id)additionalParamsForFetchRequest;
-(char)shouldDisplayPivotInActionBar;
-(char)enableNavState;
-(void)handleLoadedContentDidChange;
-(void)reloadWithNewObjects:(id)arg1 ;
-(void)displayPivots:(id)arg1 ;
-(void)feedItemHeaderDidTapFollowButton:(id)arg1 ;
-(void)setOriginalMediaPost:(IGFeedItem *)arg1 ;
-(void)handleDidDisplayFeedItem:(id)arg1 ;
-(char)isPivotCompatibleEntrypoint;
-(void)insertPreviewSplashView;
-(UIView *)previewSplashView;
-(CGRect)frameForCell:(id)arg1 ;
-(void)setSavedVisibleIndexPath:(NSIndexPath *)arg1 ;
-(void)setSavedVisibleIndexPathOffset:(float)arg1 ;
-(void)saveCurrentScrollPosition;
-(id)filterOutDummyPosts:(id)arg1 ;
-(NSIndexPath *)savedVisibleIndexPath;
-(float)savedVisibleIndexPathOffset;
-(void)scrollToIndexPath:(id)arg1 verticalOffset:(float)arg2 ;
-(id)initWithFeedNetworkSource:(id)arg1 title:(id)arg2 subtitle:(id)arg3 entityId:(id)arg4 showsPullToRefresh:(char)arg5 mode:(int)arg6 entryPoint:(int)arg7 ;
-(void)setPreviewSplashView:(UIView *)arg1 ;
-(IGFeedItem *)originalMediaPost;
-(void)dealloc;
-(int)viewType;
-(void)viewDidLoad;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(IGFeedPostsConfiguration *)configuration;
-(void)setFeedLayout:(int)arg1 ;
-(int)entryPoint;
@end

