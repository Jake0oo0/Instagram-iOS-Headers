/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:45 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class IGSimpleButton, UIImageView, UILabel;

@interface IGFeedPhotoPromptView : UIView {

	IGSimpleButton* _actionButton;
	UIImageView* _imageView;
	UILabel* _messageLabel;

}

@property (nonatomic,readonly) IGSimpleButton * actionButton;              //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;                     //@synthesize messageLabel=_messageLabel - In the implementation block
-(IGSimpleButton *)actionButton;
-(id)init;
-(void)layoutSubviews;
-(UILabel *)messageLabel;
-(UIImageView *)imageView;
@end

