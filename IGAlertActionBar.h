/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:09 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGAlertBar.h>

@class UITapGestureRecognizer;

@interface IGAlertActionBar : IGAlertBar {

	UITapGestureRecognizer* _tapGestureRecognizer;
	/*^block*/id _tapActionBlock;
	/*^block*/id _completeBlock;

}

@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;              //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,copy) id tapActionBlock;                                            //@synthesize tapActionBlock=_tapActionBlock - In the implementation block
@property (nonatomic,copy) id completeBlock;                                             //@synthesize completeBlock=_completeBlock - In the implementation block
+(id)sharedAlertBar;
-(void)setTapActionBlock:(id)arg1 ;
-(void)setCompleteBlock:(id)arg1 ;
-(void)hideAfterDelay;
-(void)resetCallbackBlocks;
-(id)tapActionBlock;
-(void)cancelHidePerformSelector;
-(id)completeBlock;
-(void)showInViewController:(id)arg1 withText:(id)arg2 style:(int)arg3 delay:(double)arg4 updateExistingAlertBar:(char)arg5 actionBlock:(/*^block*/id)arg6 completeBlock:(/*^block*/id)arg7 ;
-(void)dismissAndNotify:(char)arg1 ;
-(void)didShowAlertView;
-(void)didHideAlertView;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(id)init;
-(void)willMoveToWindow:(id)arg1 ;
-(void)handleTap:(id)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
@end

