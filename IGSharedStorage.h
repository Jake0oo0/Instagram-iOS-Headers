/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:46 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSUserDefaults;

@interface IGSharedStorage : NSObject {

	NSUserDefaults* _sharedDefaults;

}

@property (nonatomic,retain) NSUserDefaults * sharedDefaults;              //@synthesize sharedDefaults=_sharedDefaults - In the implementation block
+(id)sharedInstance;
-(id)breakpadStorageURL;
-(id)layoutStorageURL;
-(void)setSharingEnabled;
-(id)storageURLForDirectory:(id)arg1 ;
-(void)setSharedDefaults:(NSUserDefaults *)arg1 ;
-(id)groupIdentifier;
-(id)init;
-(NSUserDefaults *)sharedDefaults;
-(char)isSharingEnabled;
@end

