/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:58 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@class RCTEventDispatcher, NSMutableOrderedSet, NSMutableArray;

@interface RCTTouchHandler : UIGestureRecognizer {

	RCTEventDispatcher* _eventDispatcher;
	NSMutableOrderedSet* _nativeTouches;
	NSMutableArray* _reactTouches;
	NSMutableArray* _touchViews;
	char _dispatchedInitialTouches;
	char _recordingInteractionTiming;
	double _mostRecentEnqueueJS;

}
-(void)handleGestureUpdate:(id)arg1 ;
-(void)_updateReactTouchAtIndex:(int)arg1 ;
-(void)_updateAndDispatchTouches:(id)arg1 eventName:(id)arg2 originatingTime:(double)arg3 ;
-(void)_recordNewTouches:(id)arg1 ;
-(void)_recordRemovedTouches:(id)arg1 ;
-(id)initWithBridge:(id)arg1 ;
-(void)cancel;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(char)canBePreventedByGestureRecognizer:(id)arg1 ;
-(char)canPreventGestureRecognizer:(id)arg1 ;
@end

