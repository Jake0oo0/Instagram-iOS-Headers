/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:19 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString;


@protocol MKAnnotation <NSObject>
@property (nonatomic,readonly) SCD_Struct_IG39 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@optional
-(NSString *)title;
-(NSString *)subtitle;
-(void)setCoordinate:(SCD_Struct_IG39)arg1;

@required
-(SCD_Struct_IG39)coordinate;

@end

