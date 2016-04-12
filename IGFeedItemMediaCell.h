/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:44 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGHeartAnimatable.h>

@class IGPost, UINavigationController, NSString;

@interface IGFeedItemMediaCell : UICollectionViewCell <IGHeartAnimatable> {

	IGPost* _post;
	UINavigationController* _navigationController;

}

@property (nonatomic,retain) IGPost * post;                                                     //@synthesize post=_post - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellIdentifier;
-(IGPost *)post;
-(void)setPost:(IGPost *)arg1 ;
-(id)contentViewForHeartAnimation;
-(void)layoutSubviews;
-(id)accessibilityIdentifier;
-(void)prepareForReuse;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
@end

