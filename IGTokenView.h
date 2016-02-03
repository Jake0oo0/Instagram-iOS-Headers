/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:15 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UIKeyInput.h>
#import <UIKit/UITextInputTraits.h>

@protocol IGTokenViewDelegate;
@class IGUser, NSString;

@interface IGTokenView : UIView <UIKeyInput, UITextInputTraits> {

	IGUser* _token;
	id<IGTokenViewDelegate> _delegate;

}

@property (nonatomic,retain) IGUser * token;                                             //@synthesize token=_token - In the implementation block
@property (assign,nonatomic,__weak) id<IGTokenViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
-(id)initWithToken:(id)arg1 ;
-(void)setDelegate:(id<IGTokenViewDelegate>)arg1 ;
-(id<IGTokenViewDelegate>)delegate;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(char)canBecomeFirstResponder;
-(void)setSelected:(char)arg1 ;
-(char)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(int)autocorrectionType;
-(IGUser *)token;
-(void)setToken:(IGUser *)arg1 ;
@end

