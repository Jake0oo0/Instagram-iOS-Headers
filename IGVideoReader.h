/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:54 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@class AVAsset, AVAssetReader, AVAssetReaderTrackOutput;

@interface IGVideoReader : NSObject {

	AVAsset* _asset;
	AVAssetReader* _assetReader;
	AVAssetReaderTrackOutput* _assetReaderVideoOutput;
	AVAssetReaderTrackOutput* _assetReaderAudioOutput;

}

@property (nonatomic,retain) AVAsset * asset;                                                //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) AVAssetReader * assetReader;                                    //@synthesize assetReader=_assetReader - In the implementation block
@property (nonatomic,retain) AVAssetReaderTrackOutput * assetReaderVideoOutput;              //@synthesize assetReaderVideoOutput=_assetReaderVideoOutput - In the implementation block
@property (nonatomic,retain) AVAssetReaderTrackOutput * assetReaderAudioOutput;              //@synthesize assetReaderAudioOutput=_assetReaderAudioOutput - In the implementation block
-(AVAssetReaderTrackOutput *)assetReaderVideoOutput;
-(AVAssetReaderTrackOutput *)assetReaderAudioOutput;
-(opaqueCMSampleBufferRef)copyNextVideoSampleBuffer;
-(opaqueCMSampleBufferRef)copyNextAudioSampleBuffer;
-(void)setAssetReaderVideoOutput:(AVAssetReaderTrackOutput *)arg1 ;
-(void)setAssetReaderAudioOutput:(AVAssetReaderTrackOutput *)arg1 ;
-(void)seekToTime:(SCD_Struct_IG44)arg1 ;
-(void)prepare;
-(void)dealloc;
-(id)initWithAsset:(id)arg1 ;
-(AVAsset *)asset;
-(void)setAsset:(AVAsset *)arg1 ;
-(void)setAssetReader:(AVAssetReader *)arg1 ;
-(AVAssetReader *)assetReader;
@end

