/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:54 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileManager, NSURL;

@interface FBSDKAudioResourceLoader : NSObject {

	NSFileManager* _fileManager;
	NSURL* _fileURL;
	unsigned long _systemSoundID;

}
+(id)name;
+(id)data;
+(unsigned)version;
+(id)sharedLoader;
-(char)loadSound:(id*)arg1 ;
-(id)_fileURL:(id*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)playSound;
@end

