/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:55 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString;

@interface MapPin : NSObject <MKAnnotation> {

	NSString* _title;
	NSString* _subtitle;
	SCD_Struct_IG26 _coordinate;

}

@property (assign,nonatomic) SCD_Struct_IG26 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,copy) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoordinates:(SCD_Struct_IG26)arg1 placeName:(id)arg2 description:(id)arg3 ;
-(void)setCoordinate:(SCD_Struct_IG26)arg1 ;
-(SCD_Struct_IG26)coordinate;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
@end

