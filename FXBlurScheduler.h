/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:40 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FXBlurScheduler : NSObject {

	char _blurEnabled;
	char _updating;
	NSMutableArray* _views;
	unsigned _viewIndex;
	unsigned _updatesEnabled;

}

@property (nonatomic,retain) NSMutableArray * views;               //@synthesize views=_views - In the implementation block
@property (assign,nonatomic) unsigned viewIndex;                   //@synthesize viewIndex=_viewIndex - In the implementation block
@property (assign,nonatomic) unsigned updatesEnabled;              //@synthesize updatesEnabled=_updatesEnabled - In the implementation block
@property (assign,nonatomic) char blurEnabled;                     //@synthesize blurEnabled=_blurEnabled - In the implementation block
@property (assign,nonatomic) char updating;                        //@synthesize updating=_updating - In the implementation block
+(id)sharedInstance;
-(unsigned)viewIndex;
-(void)setViewIndex:(unsigned)arg1 ;
-(void)updateAsynchronously;
-(char)blurEnabled;
-(void)setBlurEnabled:(char)arg1 ;
-(void)setUpdatesEnabled;
-(void)setUpdatesDisabled;
-(void)removeView:(id)arg1 ;
-(void)setUpdatesEnabled:(unsigned)arg1 ;
-(void)setUpdating:(char)arg1 ;
-(id)init;
-(void)setViews:(NSMutableArray *)arg1 ;
-(NSMutableArray *)views;
-(void)addView:(id)arg1 ;
-(char)updating;
-(unsigned)updatesEnabled;
@end

