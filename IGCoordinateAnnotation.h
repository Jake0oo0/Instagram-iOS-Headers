/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:47 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class CLLocation, NSString;

@interface IGCoordinateAnnotation : NSObject <MKAnnotation> {

	CLLocation* _clLocation;

}

@property (nonatomic,retain) CLLocation * clLocation;                   //@synthesize clLocation=_clLocation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_IG82 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
+(id)annotationWithCLLocation:(id)arg1 ;
-(void)setClLocation:(CLLocation *)arg1 ;
-(CLLocation *)clLocation;
-(SCD_Struct_IG82)coordinate;
@end

