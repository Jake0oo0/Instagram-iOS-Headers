/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:48 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface IGSocialSectionHeaderBuilder : NSObject {

	float _superviewWidth;
	NSSet* _socialPosts;

}

@property (assign,nonatomic) float superviewWidth;               //@synthesize superviewWidth=_superviewWidth - In the implementation block
@property (nonatomic,readonly) NSSet * socialPosts;              //@synthesize socialPosts=_socialPosts - In the implementation block
-(float)superviewWidth;
-(NSSet *)socialPosts;
-(void)configurePeopleYouFollowView:(id)arg1 withFeedItem:(id)arg2 ;
-(id)initWithSuperviewWidth:(float)arg1 socialPosts:(id)arg2 ;
-(id)buildSocialSectionHeader;
-(void)setSuperviewWidth:(float)arg1 ;
@end

