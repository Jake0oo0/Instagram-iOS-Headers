/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:52 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary;

@interface IGReloadContext : NSObject {

	char _enableTapToViewComments;
	int _feedLayout;
	NSDictionary* _feedItemAttributes;

}

@property (nonatomic,readonly) int feedLayout;                               //@synthesize feedLayout=_feedLayout - In the implementation block
@property (nonatomic,retain) NSDictionary * feedItemAttributes;              //@synthesize feedItemAttributes=_feedItemAttributes - In the implementation block
@property (assign,nonatomic) char enableTapToViewComments;                   //@synthesize enableTapToViewComments=_enableTapToViewComments - In the implementation block
+(id)contextWithLayout:(int)arg1 ;
-(char)enableTapToViewComments;
-(void)setEnableTapToViewComments:(char)arg1 ;
-(NSDictionary *)feedItemAttributes;
-(void)setFeedItemAttributes:(NSDictionary *)arg1 ;
-(int)feedLayout;
@end

