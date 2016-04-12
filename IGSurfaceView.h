/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:57 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGSurface, IGRenderer;

@interface IGSurfaceView : UIView {

	IGSurface* _surface;
	IGRenderer* _renderer;

}

@property (nonatomic,retain) IGRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) IGSurface * surface; 
+(Class)layerClass;
-(void)setRenderer:(IGRenderer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(IGSurface *)surface;
-(IGRenderer *)renderer;
@end

