/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:40 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class NSString;

@interface IGCameraNavigationControllerAnimation : NSObject <UIViewControllerAnimatedTransitioning> {

	char _presenting;

}

@property (assign,nonatomic) char presenting;                       //@synthesize presenting=_presenting - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)present:(id)arg1 ;
-(CGRect)cameraControllerFrameForContainerView:(id)arg1 presentingController:(id)arg2 ;
-(id)initPresenting:(char)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(char)presenting;
-(void)setPresenting:(char)arg1 ;
-(void)dismiss:(id)arg1 ;
@end

