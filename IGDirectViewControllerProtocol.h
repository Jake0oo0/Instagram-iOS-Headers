/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UICollectionView, IGDirectThread, NSString;


@protocol IGDirectViewControllerProtocol <NSObject>
@property (nonatomic,retain) UICollectionView * collectionView; 
@property (nonatomic,retain) IGDirectThread * thread; 
@property (nonatomic,copy,readonly) NSString * threadID; 
@required
-(void)renderThreadWithCompletionHandler:(/*^block*/id)arg1;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(id)arg1;
-(void)setThread:(id)arg1;
-(IGDirectThread *)thread;
-(NSString *)threadID;

@end

