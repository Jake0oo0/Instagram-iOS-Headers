/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:49 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
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
-(char)isFromLibrary;
-(int)devicePosition;
-(void)setDevicePosition:(int)arg1 ;
-(UIImage *)croppedImage;
-(void)setDisplayImage:(UIImage *)arg1 ;
-(void)setCroppedImage:(UIImage *)arg1 ;
-(void)setIsFromLibrary:(char)arg1 ;
-(UIImage *)fullSizeImage;
-(NSData *)imageData;
-(char)isPhoto;
-(UIImage *)displayImage;
-(void)setFullSizeImage:(UIImage *)arg1 ;
@end

