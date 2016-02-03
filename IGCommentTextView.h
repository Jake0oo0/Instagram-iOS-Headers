/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:12 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, IGGrowingTextView, UIButton;

@interface IGCommentTextView : UIView {

	UIImageView* _backgroundView;
	IGGrowingTextView* _growingTextView;
	UIButton* _sendButton;

}

@property (nonatomic,readonly) UIImageView * backgroundView;                     //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) IGGrowingTextView * growingTextView;              //@synthesize growingTextView=_growingTextView - In the implementation block
@property (nonatomic,readonly) UIButton * sendButton;                            //@synthesize sendButton=_sendButton - In the implementation block
-(void)setupBackgroundView;
-(void)setupGrowingTextView;
-(IGGrowingTextView *)growingTextView;
-(void)setTextViewDelegate:(id)arg1 ;
-(void)addSendButtonTappedTarget:(id)arg1 action:(SEL)arg2 ;
-(id)autocompleteTextInput;
-(void)setPlaceholderText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setText:(id)arg1 ;
-(UIImageView *)backgroundView;
-(void)clearText;
-(void)insertText:(id)arg1 ;
-(id)textView;
-(UIButton *)sendButton;
-(void)setupSendButton;
-(void)setButtonEnabled:(char)arg1 ;
@end

