/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:23 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageView.h>

@class NSString, IGSimpleButton;

@interface IGTappableImageView : IGImageView {

	NSString* _mediaID;
	IGSimpleButton* _button;

}

@property (nonatomic,copy) NSString * mediaID;                     //@synthesize mediaID=_mediaID - In the implementation block
@property (nonatomic,retain) IGSimpleButton * button;              //@synthesize button=_button - In the implementation block
-(NSString *)mediaID;
-(void)onButtonTapped:(id)arg1 ;
-(void)setMediaID:(NSString *)arg1 ;
-(IGSimpleButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setButton:(IGSimpleButton *)arg1 ;
@end

