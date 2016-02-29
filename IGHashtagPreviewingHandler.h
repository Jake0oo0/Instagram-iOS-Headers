/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:45 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@class IGHashtagModel, NSString;

@interface IGHashtagPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate> {

	id _controller;
	IGHashtagModel* _hashtag;

}

@property (nonatomic,__weak,readonly) id controller;                //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) IGHashtagModel * hashtag;              //@synthesize hashtag=_hashtag - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGHashtagModel *)hashtag;
-(void)setHashtag:(IGHashtagModel *)arg1 ;
-(id)initWithController:(id)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(id)controller;
@end

