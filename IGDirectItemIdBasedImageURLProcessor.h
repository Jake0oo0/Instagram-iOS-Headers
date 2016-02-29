/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:37 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageProcessor.h>

@class NSString;

@interface IGDirectItemIdBasedImageURLProcessor : NSObject <IGImageProcessor> {

	NSString* _itemId;

}

@property (nonatomic,readonly) NSString * itemId;                   //@synthesize itemId=_itemId - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)processedImageFromDecodedImage:(id)arg1 withSuggestedSize:(CGSize)arg2 suggestedBackgroundColor:(id)arg3 ;
-(id)cacheKeyURLFromURL:(id)arg1 withSuggestedSize:(CGSize)arg2 suggestedBackgroundColor:(id)arg3 ;
-(id)initWithItemId:(id)arg1 ;
-(NSString *)itemId;
@end

