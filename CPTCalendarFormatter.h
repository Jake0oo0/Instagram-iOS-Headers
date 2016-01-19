/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:03 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Foundation/NSNumberFormatter.h>

@class NSDateFormatter, NSDate, NSCalendar;

@interface CPTCalendarFormatter : NSNumberFormatter {

	NSDateFormatter* dateFormatter;
	NSDate* referenceDate;
	NSCalendar* referenceCalendar;
	unsigned referenceCalendarUnit;

}

@property (nonatomic,retain) NSDateFormatter * dateFormatter; 
@property (nonatomic,copy) NSDate * referenceDate; 
@property (nonatomic,copy) NSCalendar * referenceCalendar; 
@property (assign,nonatomic) unsigned referenceCalendarUnit; 
-(id)initWithDateFormatter:(id)arg1 ;
-(NSCalendar *)referenceCalendar;
-(unsigned)referenceCalendarUnit;
-(void)setReferenceCalendar:(NSCalendar *)arg1 ;
-(void)setReferenceCalendarUnit:(unsigned)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(NSDate *)referenceDate;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
@end

