/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:26 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol IGToastViewDelegate;
@class UIView, IGToastItem, UIImageView, UIButton, IGToastData;

@interface IGToastViewPopup : UIView {

	UIView* _paddedItems;
	IGToastItem* _commentsItem;
	IGToastItem* _likesItem;
	IGToastItem* _relationshipsItem;
	IGToastItem* _usertagsItem;
	UIImageView* _leftBackground;
	UIImageView* _rightBackground;
	UIButton* _overlayButton;
	IGToastData* _toastData;
	id<IGToastViewDelegate> _delegate;
	int _toastType;

}

@property (nonatomic,retain) IGToastData * toastData;                              //@synthesize toastData=_toastData - In the implementation block
@property (assign,nonatomic,__weak) id<IGToastViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int toastType;                                        //@synthesize toastType=_toastType - In the implementation block
-(void)setToastType:(int)arg1 ;
-(void)setToastData:(IGToastData *)arg1 ;
-(void)onTappingToastView;
-(void)updateAndHideWhenItemHasZeroCount:(id)arg1 count:(int)arg2 atOriginX:(float)arg3 ;
-(IGToastData *)toastData;
-(int)toastType;
-(void)setDelegate:(id<IGToastViewDelegate>)arg1 ;
-(id)init;
-(id<IGToastViewDelegate>)delegate;
@end

