/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:20 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGPhotoMapDataSourceDelegate;
@class IGUser;

@interface IGUserPhotoMapDataSource : NSObject {

	char _forMapReview;
	IGUser* _user;
	id<IGPhotoMapDataSourceDelegate> _delegate;

}

@property (nonatomic,readonly) IGUser * user;                                               //@synthesize user=_user - In the implementation block
@property (assign,nonatomic,__weak) id<IGPhotoMapDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithUser:(id)arg1 forMapReview:(char)arg2 ;
-(void)setDelegate:(id<IGPhotoMapDataSourceDelegate>)arg1 ;
-(id<IGPhotoMapDataSourceDelegate>)delegate;
-(IGUser *)user;
-(void)startRequest;
@end

