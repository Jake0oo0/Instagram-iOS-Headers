/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:48 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString;

@interface IGEditBubbleAnnotation : NSObject <MKAnnotation> {

	char _isBeingRemoved;
	SCD_Struct_IG26 _coordinate;

}

@property (assign,nonatomic) SCD_Struct_IG26 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) char isBeingRemoved;                     //@synthesize isBeingRemoved=_isBeingRemoved - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(void)setIsBeingRemoved:(char)arg1 ;
-(void)setCoordinate:(SCD_Struct_IG26)arg1 ;
-(SCD_Struct_IG26)coordinate;
-(id)initWithCoordinate:(SCD_Struct_IG26)arg1 ;
-(char)isBeingRemoved;
@end

