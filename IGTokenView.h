/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:08 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
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
-(id)initWithToken:(id)arg1 ;
@end

