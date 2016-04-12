/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:52 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IGInsightsQuery : NSObject {

	NSString* _pageType;
	NSString* _timeframe;
	NSString* _dataOrdering;
	NSString* _after;
	NSString* _first;
	NSString* _timezoneName;

}

@property (nonatomic,copy,readonly) NSString * pageType;                  //@synthesize pageType=_pageType - In the implementation block
@property (nonatomic,copy,readonly) NSString * timeframe;                 //@synthesize timeframe=_timeframe - In the implementation block
@property (nonatomic,copy,readonly) NSString * dataOrdering;              //@synthesize dataOrdering=_dataOrdering - In the implementation block
@property (nonatomic,copy) NSString * after;                              //@synthesize after=_after - In the implementation block
@property (nonatomic,copy) NSString * first;                              //@synthesize first=_first - In the implementation block
@property (nonatomic,copy) NSString * timezoneName;                       //@synthesize timezoneName=_timezoneName - In the implementation block
-(id)toDict;
-(NSString *)timeframe;
-(NSString *)dataOrdering;
-(NSString *)after;
-(NSString *)timezoneName;
-(void)copyPageTypeFromQuery:(id)arg1 ;
-(void)copyTimeframeFromQuery:(id)arg1 ;
-(void)copyDataOrderingFromQuery:(id)arg1 ;
-(void)setAfter:(NSString *)arg1 ;
-(void)setTimezoneName:(NSString *)arg1 ;
-(NSString *)first;
-(void)setFirst:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)pageType;
@end

