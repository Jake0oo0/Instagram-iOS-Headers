/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:49 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@protocol IGPreviewingControllerHandler;
@class IGHashtagModel, NSString;

@interface IGHashtagPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate> {

	id _controller;
	id<IGPreviewingControllerHandler> _handler;
	IGHashtagModel* _hashtag;

}

@property (nonatomic,__weak,readonly) id controller;                                   //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) id<IGPreviewingControllerHandler> handler;              //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) IGHashtagModel * hashtag;                                 //@synthesize hashtag=_hashtag - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithController:(id)arg1 handler:(id)arg2 ;
-(IGHashtagModel *)hashtag;
-(void)setHashtag:(IGHashtagModel *)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(id<IGPreviewingControllerHandler>)handler;
-(id)controller;
@end

