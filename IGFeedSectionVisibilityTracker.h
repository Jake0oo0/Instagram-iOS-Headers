/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:52 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGItemDiffingDelegate.h>
#import <Instagram/IGFeedItemVisibilityTracking.h>

@protocol IGFeedSectionVisibilityTrackerDelegate;
@class IGItemDiffing, NSString;

@interface IGFeedSectionVisibilityTracker : NSObject <IGItemDiffingDelegate, IGFeedItemVisibilityTracking> {

	IGItemDiffing* _tracker;
	id<IGFeedSectionVisibilityTrackerDelegate> _delegate;

}

@property (nonatomic,readonly) IGItemDiffing * tracker;                                                 //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,__weak,readonly) id<IGFeedSectionVisibilityTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGItemDiffing *)tracker;
-(void)itemDiffing:(id)arg1 didChangeWithItemAdded:(id)arg2 ;
-(void)itemDiffing:(id)arg1 didChangeWithItemRemoved:(id)arg2 ;
-(void)updateWithVisibleElementLayoutAttributes:(id)arg1 visibleContentRect:(CGRect)arg2 feedItems:(id)arg3 ;
-(id<IGFeedSectionVisibilityTrackerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

