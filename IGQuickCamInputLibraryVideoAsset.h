/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:07 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGQuickCamInputLibraryAsset.h>
#import <Instagram/IGQuickCamInputVideoAsset.h>

@class PHAsset, ALAsset, NSString;

@interface IGQuickCamInputLibraryVideoAsset : NSObject <IGQuickCamInputLibraryAsset, IGQuickCamInputVideoAsset> {

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
-(PHAsset *)phAsset;
-(void)setPhAsset:(PHAsset *)arg1 ;
-(ALAsset *)alAsset;
-(void)setAlAsset:(ALAsset *)arg1 ;
-(char)isFromLibrary;
-(int)devicePosition;
-(void)setDevicePosition:(int)arg1 ;
@end

