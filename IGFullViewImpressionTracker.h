/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:41 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemVisibilityTracking.h>

@protocol IGFeedItemLoggingProviderDelegate, IGAnalyticsRaindropProtocol;
@class IGFeedItemViewingSessionManager, NSString;

@interface IGFullViewImpressionTracker : NSObject <IGFeedItemVisibilityTracking> {

	IGFeedItemViewingSessionManager* _viewingSessionManager;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	id<IGAnalyticsRaindropProtocol> _raindropDelegate;

}

@property (nonatomic,readonly) IGFeedItemViewingSessionManager * viewingSessionManager;                   //@synthesize viewingSessionManager=_viewingSessionManager - In the implementation block
@property (nonatomic,__weak,readonly) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAnalyticsRaindropProtocol> raindropDelegate;                   //@synthesize raindropDelegate=_raindropDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(id)initWithLoggingProviderDelegate:(id)arg1 raindropDelegate:(id)arg2 ;
-(void)updateWithNewFeedItems:(id)arg1 ;
-(void)updateWithVisibleElementLayoutAttributeFeedItemMap:(id)arg1 visibleContentRect:(CGRect)arg2 ;
-(id<IGAnalyticsRaindropProtocol>)raindropDelegate;
-(IGFeedItemViewingSessionManager *)viewingSessionManager;
-(void)processLayoutAttributes:(id)arg1 feedItem:(id)arg2 visibleContentRect:(CGRect)arg3 ;
@end

