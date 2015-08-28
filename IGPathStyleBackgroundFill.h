/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:37 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGPathStyle.h>

@class UIColor;

@interface IGPathStyleBackgroundFill : IGPathStyle {

	UIColor* _color;

}

@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
+(id)backgroundFillWithColor:(id)arg1 ;
-(void)applyToPath:(id)arg1 inContext:(CGContextRef)arg2 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithColor:(id)arg1 ;
@end

