/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:33 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGRealtimeOperationDelegate.h>

@protocol IGCommentThreadManagerDelegate;
@class IGPost, IGUser, IGRealtimeManager, IGBulkCommentDeleteManager, NSString;

@interface IGCommentThreadManager : NSObject <IGRealtimeOperationDelegate> {

	char _loadingMore;
	IGPost* _post;
	IGUser* _currentUser;
	id<IGCommentThreadManagerDelegate> _delegate;
	IGRealtimeManager* _realtimeManager;
	IGBulkCommentDeleteManager* _bulkCommentDeleteManager;

}

@property (nonatomic,readonly) IGPost * post;                                                             //@synthesize post=_post - In the implementation block
@property (nonatomic,readonly) IGUser * currentUser;                                                      //@synthesize currentUser=_currentUser - In the implementation block
@property (assign,nonatomic,__weak) id<IGCommentThreadManagerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGRealtimeManager * realtimeManager;                                       //@synthesize realtimeManager=_realtimeManager - In the implementation block
@property (nonatomic,__weak,readonly) IGBulkCommentDeleteManager * bulkCommentDeleteManager;              //@synthesize bulkCommentDeleteManager=_bulkCommentDeleteManager - In the implementation block
@property (assign,getter=isLoadingMore,nonatomic) char loadingMore;                                       //@synthesize loadingMore=_loadingMore - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGPost *)post;
-(void)loadCommentsForNextPage:(char)arg1 ;
-(void)setLoadingMore:(char)arg1 ;
-(void)subscribeToRealtime:(id)arg1 patches:(id)arg2 ;
-(IGRealtimeManager *)realtimeManager;
-(void)loadAndSubscribeToRealtime;
-(void)handleRealtimeOperation:(id)arg1 ;
-(id)pkForRealtimeOperation:(id)arg1 ;
-(void)handleRealtimeRefreshRequest;
-(id)initWithPost:(id)arg1 currentUser:(id)arg2 bulkDeleteManager:(id)arg3 ;
-(void)unsubscribeFromRealtime;
-(void)postCommentText:(id)arg1 ;
-(IGBulkCommentDeleteManager *)bulkCommentDeleteManager;
-(char)isLoadingMore;
-(void)loadMore;
-(void)setDelegate:(id<IGCommentThreadManagerDelegate>)arg1 ;
-(id<IGCommentThreadManagerDelegate>)delegate;
-(IGUser *)currentUser;
@end

