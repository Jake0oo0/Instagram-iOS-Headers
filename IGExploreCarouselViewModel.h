/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:37 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL;

@interface IGExploreCarouselViewModel : NSObject {

	char _videoIconVisible;
	NSString* _title;
	NSURL* _imageURL;

}

@property (nonatomic,copy) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                                               //@synthesize imageURL=_imageURL - In the implementation block
@property (assign,getter=isVideoIconVisible,nonatomic) char videoIconVisible;              //@synthesize videoIconVisible=_videoIconVisible - In the implementation block
-(void)setVideoIconVisible:(char)arg1 ;
-(char)isVideoIconVisible;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

