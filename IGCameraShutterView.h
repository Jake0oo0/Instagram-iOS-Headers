/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:11 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface IGCameraShutterView : UIView {

	UIView* _backgroundView;
	UIView* _topBlind;
	UIView* _bottomBlind;
	int _state;

}

@property (assign,nonatomic) int state;              //@synthesize state=_state - In the implementation block
-(void)openAnimated:(char)arg1 delay:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)moveToPosition:(float)arg1 andDarken:(char)arg2 ;
-(void)shutterWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)moveToPosition:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)openAnimated:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)closeAnimated:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

