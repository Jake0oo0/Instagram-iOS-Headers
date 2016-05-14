/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:43 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGImageViewDelegate.h>

@class IGImageView, NSString;

@interface IGBlurredImageView : UIView <IGImageViewDelegate> {

	IGImageView* _imageView;

}

@property (nonatomic,__weak,readonly) IGImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelImageLoad;
-(void)setupSubviewsWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(IGImageView *)imageView;
-(void)setPhoto:(id)arg1 ;
@end

