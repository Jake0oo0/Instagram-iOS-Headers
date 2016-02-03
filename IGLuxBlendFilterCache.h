/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:37 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IGSurface;

@interface IGLuxBlendFilterCache : NSObject {

	IGSurface* _antiLuxSurface;
	IGSurface* _starlightSurface;

}

@property (nonatomic,retain) IGSurface * antiLuxSurface;                //@synthesize antiLuxSurface=_antiLuxSurface - In the implementation block
@property (nonatomic,retain) IGSurface * starlightSurface;              //@synthesize starlightSurface=_starlightSurface - In the implementation block
-(IGSurface *)antiLuxSurface;
-(void)setAntiLuxSurface:(IGSurface *)arg1 ;
-(IGSurface *)starlightSurface;
-(void)setStarlightSurface:(IGSurface *)arg1 ;
@end

