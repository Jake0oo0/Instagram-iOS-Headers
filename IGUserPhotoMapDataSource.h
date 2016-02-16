/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:55 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(IGUser *)user;
-(void)setDelegate:(id<IGPhotoMapDataSourceDelegate>)arg1 ;
-(id<IGPhotoMapDataSourceDelegate>)delegate;
-(void)startRequest;
@end

