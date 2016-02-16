/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:47 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageProcessor.h>

@class UIColor, NSString;

@interface IGBlurredImageProcessor : NSObject <IGImageProcessor> {

	float _blurRadius;
	unsigned _iterations;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) float blurRadius;                    //@synthesize blurRadius=_blurRadius - In the implementation block
@property (nonatomic,readonly) unsigned iterations;                 //@synthesize iterations=_iterations - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                 //@synthesize tintColor=_tintColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)processedImageFromDecodedImage:(id)arg1 withSuggestedSize:(CGSize)arg2 suggestedBackgroundColor:(id)arg3 ;
-(id)cacheKeyURLFromURL:(id)arg1 withSuggestedSize:(CGSize)arg2 suggestedBackgroundColor:(id)arg3 ;
-(id)initWithBlurRadius:(float)arg1 iterations:(unsigned)arg2 tintColor:(id)arg3 ;
-(id)init;
-(float)blurRadius;
-(UIColor *)tintColor;
-(unsigned)iterations;
@end

