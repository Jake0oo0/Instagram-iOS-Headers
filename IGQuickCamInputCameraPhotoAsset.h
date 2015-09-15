/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:35 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGQuickCamInputAsset.h>
#import <Instagram/IGQuickCamInputPhotoAsset.h>

@class UIImage, NSString;

@interface IGQuickCamInputCameraPhotoAsset : NSObject <IGQuickCamInputAsset, IGQuickCamInputPhotoAsset> {

	int _devicePosition;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                       //@synthesize image=_image - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isFromLibrary; 
@property (assign,nonatomic) int devicePosition;                    //@synthesize devicePosition=_devicePosition - In the implementation block
-(char)isFromLibrary;
-(int)devicePosition;
-(void)setDevicePosition:(int)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
@end

