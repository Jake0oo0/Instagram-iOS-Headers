/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:35 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGQuickCamOutputAsset.h>

@class UIImage, NSData, NSString;

@interface IGQuickCamOutputPhotoAsset : NSObject <IGQuickCamOutputAsset> {

	char _isFromLibrary;
	UIImage* _displayImage;
	UIImage* _croppedImage;
	int _devicePosition;
	UIImage* _fullSizeImage;

}

@property (nonatomic,retain) UIImage * fullSizeImage;               //@synthesize fullSizeImage=_fullSizeImage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIImage * displayImage;                //@synthesize displayImage=_displayImage - In the implementation block
@property (nonatomic,retain) UIImage * croppedImage;                //@synthesize croppedImage=_croppedImage - In the implementation block
@property (assign,nonatomic) char isFromLibrary;                    //@synthesize isFromLibrary=_isFromLibrary - In the implementation block
@property (assign,nonatomic) int devicePosition;                    //@synthesize devicePosition=_devicePosition - In the implementation block
@property (nonatomic,readonly) NSData * imageData; 
@property (nonatomic,readonly) char isPhoto; 
-(UIImage *)fullSizeImage;
-(char)isFromLibrary;
-(int)devicePosition;
-(void)setDevicePosition:(int)arg1 ;
-(UIImage *)croppedImage;
-(void)setDisplayImage:(UIImage *)arg1 ;
-(void)setCroppedImage:(UIImage *)arg1 ;
-(void)setIsFromLibrary:(char)arg1 ;
-(UIImage *)displayImage;
-(NSData *)imageData;
-(void)setFullSizeImage:(UIImage *)arg1 ;
-(char)isPhoto;
@end

