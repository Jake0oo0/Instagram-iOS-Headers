/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:40 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKTooltipView.h>

@protocol FBSDKLoginTooltipViewDelegate;
@interface FBSDKLoginTooltipView : FBSDKTooltipView {

	char _forceDisplay;
	id<FBSDKLoginTooltipViewDelegate> _delegate;

}

@property (assign,nonatomic) id<FBSDKLoginTooltipViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char forceDisplay;                                       //@synthesize forceDisplay=_forceDisplay - In the implementation block
-(void)setForceDisplay:(char)arg1 ;
-(char)forceDisplay;
-(void)presentInView:(id)arg1 withArrowPosition:(CGPoint)arg2 direction:(unsigned)arg3 ;
-(void)setDelegate:(id<FBSDKLoginTooltipViewDelegate>)arg1 ;
-(id)init;
-(id<FBSDKLoginTooltipViewDelegate>)delegate;
@end

