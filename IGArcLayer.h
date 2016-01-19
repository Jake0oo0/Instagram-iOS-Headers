/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:52 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIColor;

@interface IGArcLayer : CALayer {

	float _trackThickness;
	UIColor* _progressTintColor;
	UIColor* _trackTintColor;

}

@property (assign,nonatomic) float trackThickness;                     //@synthesize trackThickness=_trackThickness - In the implementation block
@property (nonatomic,retain) UIColor * progressTintColor;              //@synthesize progressTintColor=_progressTintColor - In the implementation block
@property (nonatomic,retain) UIColor * trackTintColor;                 //@synthesize trackTintColor=_trackTintColor - In the implementation block
@property (assign,nonatomic) float progress; 
+(char)needsDisplayForKey:(id)arg1 ;
-(void)setTrackThickness:(float)arg1 ;
-(float)trackThickness;
-(UIColor *)trackTintColor;
-(UIColor *)progressTintColor;
-(void)setProgressTintColor:(UIColor *)arg1 ;
-(void)setTrackTintColor:(UIColor *)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

