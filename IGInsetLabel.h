/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:40 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UILabel.h>

@interface IGInsetLabel : UILabel {

	UIEdgeInsets _contentEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets;              //@synthesize contentEdgeInsets=_contentEdgeInsets - In the implementation block
+(id)lightLabel;
+(id)darkLabel;
-(id)init;
-(void)setText:(id)arg1 ;
-(void)sizeToFit;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(UIEdgeInsets)contentEdgeInsets;
@end

