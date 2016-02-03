/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:14 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGDirectGenericShareContentCell.h>

@class UIImageView;

@interface IGDirectLocationCell : IGDirectGenericShareContentCell {

	UIImageView* _locationImageView;

}

@property (nonatomic,retain) UIImageView * locationImageView;              //@synthesize locationImageView=_locationImageView - In the implementation block
+(float)sideImageWidth;
+(float)heightForLocationShare:(id)arg1 andWidth:(float)arg2 ;
-(id)previewMedia;
-(id)sideImageView;
-(UIImageView *)locationImageView;
-(void)setLocationImageView:(UIImageView *)arg1 ;
-(id)titleText;
-(void)setContent:(id)arg1 ;
-(id)subtitleText;
@end

