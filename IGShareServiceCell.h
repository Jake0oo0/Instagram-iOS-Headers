/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:31 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGCollectionViewCell.h>

@class IGShareService, IGKVOHandle;

@interface IGShareServiceCell : IGCollectionViewCell {

	IGShareService* _shareService;
	IGKVOHandle* _shareServiceObserver;

}

@property (nonatomic,retain) IGShareService * shareService;                   //@synthesize shareService=_shareService - In the implementation block
@property (nonatomic,retain) IGKVOHandle * shareServiceObserver;              //@synthesize shareServiceObserver=_shareServiceObserver - In the implementation block
-(void)setShareService:(IGShareService *)arg1 ;
-(IGKVOHandle *)shareServiceObserver;
-(void)setShareServiceObserver:(IGKVOHandle *)arg1 ;
-(IGShareService *)shareService;
-(void)updateShareState;
-(void)dealloc;
@end

