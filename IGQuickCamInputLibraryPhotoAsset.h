/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGQuickCamInputLibraryAsset.h>
#import <Instagram/IGQuickCamInputPhotoAsset.h>

@class PHAsset, ALAsset, NSString;

@interface IGQuickCamInputLibraryPhotoAsset : NSObject <IGQuickCamInputLibraryAsset, IGQuickCamInputPhotoAsset> {

	PHAsset* _phAsset;
	ALAsset* _alAsset;
	int _devicePosition;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isFromLibrary; 
@property (assign,nonatomic) int devicePosition;                    //@synthesize devicePosition=_devicePosition - In the implementation block
@property (nonatomic,retain) PHAsset * phAsset;                     //@synthesize phAsset=_phAsset - In the implementation block
@property (nonatomic,retain) ALAsset * alAsset;                     //@synthesize alAsset=_alAsset - In the implementation block
-(char)isFromLibrary;
-(int)devicePosition;
-(PHAsset *)phAsset;
-(void)setPhAsset:(PHAsset *)arg1 ;
-(ALAsset *)alAsset;
-(void)setAlAsset:(ALAsset *)arg1 ;
-(void)setDevicePosition:(int)arg1 ;
@end

