/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:42 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGSearchResultsLoggableItem.h>
#import <Instagram/IGRelatedItemType.h>

@class NSString, NSNumber;

@interface IGHashtagModel : NSObject <IGSearchResultsLoggableItem, IGRelatedItemType> {

	NSString* _tagName;
	NSString* _tagDescription;
	NSNumber* _mediaCount;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * tagName;                      //@synthesize tagName=_tagName - In the implementation block
@property (nonatomic,copy) NSString * tagDescription;               //@synthesize tagDescription=_tagDescription - In the implementation block
@property (nonatomic,retain) NSNumber * mediaCount;                 //@synthesize mediaCount=_mediaCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * pk; 
@property (nonatomic,readonly) NSString * displayName; 
-(NSString *)pk;
-(NSNumber *)mediaCount;
-(void)setMediaCount:(NSNumber *)arg1 ;
-(id)relatedItemDisplayName;
-(void)fetchAdditionalInfo;
-(id)relatedItemId;
-(id)relatedItemURL;
-(id)relatedItemType;
-(NSString *)tagDescription;
-(void)setTagDescription:(NSString *)arg1 ;
-(void)setTagName:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)tagName;
-(id)initWithName:(id)arg1 ;
-(NSString *)displayName;
-(id)loggingDescription;
@end

