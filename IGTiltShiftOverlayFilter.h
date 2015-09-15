/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:48 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@interface IGTiltShiftOverlayFilter : IGImageFilter {

	unsigned _mode;
	float _radius;
	float _angle;
	float _opacity;
	CGPoint _center;

}

@property (assign,nonatomic) unsigned mode;               //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) float radius;                //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) CGPoint center;              //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) float angle;                 //@synthesize angle=_angle - In the implementation block
@property (assign,nonatomic) float opacity;               //@synthesize opacity=_opacity - In the implementation block
-(void)render:(id)arg1 to:(id)arg2 program:(id)arg3 ;
-(id)fragmentFunctions;
-(void)configureProgram:(id)arg1 ;
-(id)fragmentShader;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(void)setAngle:(float)arg1 ;
-(float)angle;
-(float)radius;
-(void)setRadius:(float)arg1 ;
@end

