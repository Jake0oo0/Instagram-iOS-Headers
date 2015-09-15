/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:36 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol IGDirectGrowingMessageTextViewDelegate;
@class UIImageView, UIButton, UILabel, UITextView, NSString;

@interface IGDirectGrowingMessageTextView : UIView <UITextViewDelegate> {

	id<IGDirectGrowingMessageTextViewDelegate> _delegate;
	UIImageView* _backgroundBubbleView;
	UIButton* _messageTextViewClearButton;
	UILabel* _placeholderTextLabel;
	UITextView* _messageTextView;

}

@property (assign,nonatomic,__weak) id<IGDirectGrowingMessageTextViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundBubbleView;                                      //@synthesize backgroundBubbleView=_backgroundBubbleView - In the implementation block
@property (nonatomic,retain) UIButton * messageTextViewClearButton;                                   //@synthesize messageTextViewClearButton=_messageTextViewClearButton - In the implementation block
@property (nonatomic,retain) UILabel * placeholderTextLabel;                                          //@synthesize placeholderTextLabel=_placeholderTextLabel - In the implementation block
@property (nonatomic,retain) UITextView * messageTextView;                                            //@synthesize messageTextView=_messageTextView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)messageViewDefaultHeight;
-(UIImageView *)backgroundBubbleView;
-(void)setBackgroundBubbleView:(UIImageView *)arg1 ;
-(UITextView *)messageTextView;
-(void)setMessageTextView:(UITextView *)arg1 ;
-(UIButton *)messageTextViewClearButton;
-(UILabel *)placeholderTextLabel;
-(void)messageTextViewClearButtonTapped;
-(void)updateMessageTextView;
-(void)updateClearButton;
-(void)startEditing;
-(void)setMessageTextViewClearButtonAlpha:(float)arg1 ;
-(void)setMessageTextViewClearButton:(UIButton *)arg1 ;
-(void)setPlaceholderTextLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGDirectGrowingMessageTextViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGDirectGrowingMessageTextViewDelegate>)delegate;
-(char)resignFirstResponder;
-(id)text;
-(char)isFirstResponder;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
@end

