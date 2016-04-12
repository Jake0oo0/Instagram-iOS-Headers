/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:37 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGMediaMetadataProtocol.h>

@class NSString, IGVideoComposition, NSArray;

@interface IGVideoMetadata : NSObject <IGMediaMetadataProtocol> {

	char _isAudioMuted;
	NSString* _rawVideoLocationString;
	IGVideoComposition* _videoComposition;
	int _posterFrameIndex;
	float _videoTimeLength;
	int _videoSourceType;
	NSArray* _clipsMetadata;

}

@property (nonatomic,copy) NSString * rawVideoLocationString;                           //@synthesize rawVideoLocationString=_rawVideoLocationString - In the implementation block
@property (nonatomic,copy,readonly) IGVideoComposition * videoComposition;              //@synthesize videoComposition=_videoComposition - In the implementation block
@property (assign,nonatomic) int posterFrameIndex;                                      //@synthesize posterFrameIndex=_posterFrameIndex - In the implementation block
@property (assign,nonatomic) float videoTimeLength;                                     //@synthesize videoTimeLength=_videoTimeLength - In the implementation block
@property (assign,nonatomic) int videoSourceType;                                       //@synthesize videoSourceType=_videoSourceType - In the implementation block
@property (nonatomic,retain) NSArray * clipsMetadata;                                   //@synthesize clipsMetadata=_clipsMetadata - In the implementation block
@property (assign,nonatomic) char isAudioMuted;                                         //@synthesize isAudioMuted=_isAudioMuted - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareToShare;
-(id)sharingInfo;
-(NSString *)rawVideoLocationString;
-(id)initWithVideo:(id)arg1 ;
-(void)updateKeyPosition:(float)arg1 ;
-(void)updateIsAudioMuted:(char)arg1 ;
-(void)updateClipsMetadataWithVideo:(id)arg1 ;
-(void)setVideoTimeLength:(float)arg1 ;
-(void)setVideoSourceType:(int)arg1 ;
-(void)updateVideoTimeLengthWithVideo:(id)arg1 ;
-(NSArray *)clipsMetadata;
-(void)setClipsMetadata:(NSArray *)arg1 ;
-(unsigned)calculateTrimType;
-(int)posterFrameIndex;
-(float)videoTimeLength;
-(int)videoSourceType;
-(void)updateWithVideo:(id)arg1 ;
-(char)isFastVideo;
-(char)isBoomerang;
-(void)setRawVideoLocationString:(NSString *)arg1 ;
-(void)setPosterFrameIndex:(int)arg1 ;
-(void)setIsAudioMuted:(char)arg1 ;
-(IGVideoComposition *)videoComposition;
-(char)isAudioMuted;
@end

