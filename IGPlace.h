/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:10 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGStorableObject.h>
#import <Instagram/IGSearchResultsLoggableItem.h>
#import <Instagram/IGStoredObject.h>

@class IGLocation, NSArray, NSString;

@interface IGPlace : IGStorableObject <IGSearchResultsLoggableItem, IGStoredObject> {

	IGLocation* _location;
	NSArray* _mediaBundles;
	NSString* _title;
	NSString* _subtitle;
	NSString* _byline;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) IGLocation * location;               //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSArray * mediaBundles;              //@synthesize mediaBundles=_mediaBundles - In the implementation block
@property (nonatomic,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                 //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * byline;                   //@synthesize byline=_byline - In the implementation block
+(id)centralizedStore;
+(id)loggingLocationIdsForPlaces:(id)arg1 ;
-(id)pk;
-(char)postIsBroken;
-(char)needsFetch;
-(NSArray *)mediaBundles;
-(NSString *)byline;
-(id)loggingDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(IGLocation *)location;
-(char)updateWithDictionary:(id)arg1 ;
@end

