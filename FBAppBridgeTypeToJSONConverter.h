/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:38 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface FBAppBridgeTypeToJSONConverter : NSObject {

	NSMutableArray* _createdPasteboardNames;

}

@property (nonatomic,retain) NSMutableArray * createdPasteboardNames;              //@synthesize createdPasteboardNames=_createdPasteboardNames - In the implementation block
+(id)appBridgeTypeFromJSON:(id)arg1 ;
-(NSMutableArray *)createdPasteboardNames;
-(id)jsonDictionaryFromDictionaryWithAppBridgeTypes:(id)arg1 ;
-(id)dictionaryWithAppBridgeTypesFromJSONDictionary:(id)arg1 ;
-(void)setCreatedPasteboardNames:(NSMutableArray *)arg1 ;
-(id)convertedDictionaryFromDictionary:(id)arg1 convertingToJSON:(char)arg2 ;
-(id)convertedArrayFromArray:(id)arg1 convertingToJSON:(char)arg2 ;
-(id)jsonFromData:(id)arg1 tag:(id)arg2 ;
-(id)convertedObjectFromObject:(id)arg1 convertingToJSON:(char)arg2 ;
-(void)dealloc;
@end

