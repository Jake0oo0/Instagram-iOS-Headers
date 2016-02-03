/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:19 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGItemVisibilityTrackerDelegate;
@class NSSet, NSMutableSet;

@interface IGItemVisibilityTracker : NSObject {

	NSSet* _lastVisibleItems;
	NSMutableSet* _viewedItems;
	char _trackingDisabled;
	id<IGItemVisibilityTrackerDelegate> _delegate;

}

@property (assign,nonatomic) char trackingDisabled;                                            //@synthesize trackingDisabled=_trackingDisabled - In the implementation block
@property (assign,nonatomic,__weak) id<IGItemVisibilityTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setTrackingDisabled:(char)arg1 ;
-(void)updateItemVisibilitiesWithSet:(id)arg1 ;
-(void)updateItemViewedWithItem:(id)arg1 ;
-(char)trackingDisabled;
-(void)setDelegate:(id<IGItemVisibilityTrackerDelegate>)arg1 ;
-(id)init;
-(id<IGItemVisibilityTrackerDelegate>)delegate;
@end

