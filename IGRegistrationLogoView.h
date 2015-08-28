/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:32 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIImageView, IGKVOHandle;

@interface IGRegistrationLogoView : UIView {

	UILabel* _messageLabel;
	UIImageView* _logoView;
	IGKVOHandle* _messageLabelTextObserver;
	IGKVOHandle* _messageLabelAttributedTextObserver;

}

@property (nonatomic,retain) UILabel * messageLabel;                                        //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIImageView * logoView;                                        //@synthesize logoView=_logoView - In the implementation block
@property (nonatomic,retain) IGKVOHandle * messageLabelTextObserver;                        //@synthesize messageLabelTextObserver=_messageLabelTextObserver - In the implementation block
@property (nonatomic,retain) IGKVOHandle * messageLabelAttributedTextObserver;              //@synthesize messageLabelAttributedTextObserver=_messageLabelAttributedTextObserver - In the implementation block
-(void)reloadMessageLabel;
-(void)setMessageLabelTextObserver:(IGKVOHandle *)arg1 ;
-(void)setMessageLabelAttributedTextObserver:(IGKVOHandle *)arg1 ;
-(IGKVOHandle *)messageLabelTextObserver;
-(IGKVOHandle *)messageLabelAttributedTextObserver;
-(void)dealloc;
-(id)init;
-(UILabel *)messageLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(UIImageView *)logoView;
-(void)setLogoView:(UIImageView *)arg1 ;
@end

