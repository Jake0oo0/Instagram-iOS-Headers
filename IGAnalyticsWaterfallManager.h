/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:01 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IGAnalyticsWaterfall;

@interface IGAnalyticsWaterfallManager : NSObject {

	IGAnalyticsWaterfall* _currentCameraWaterfall;

}

@property (nonatomic,retain) IGAnalyticsWaterfall * currentCameraWaterfall;              //@synthesize currentCameraWaterfall=_currentCameraWaterfall - In the implementation block
+(id)sharedInstance;
-(void)setCurrentCameraWaterfall:(IGAnalyticsWaterfall *)arg1 ;
-(IGAnalyticsWaterfall *)currentCameraWaterfall;
-(id)startNewWaterfall:(int)arg1 withEntryPoint:(int)arg2 experimentGroupName:(id)arg3 ;
@end

