/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGAlbumCreationViewControllerDataDelegate.h>
#import <Instagram/IGUserSessionClearableObject.h>

@class NSMutableArray, IGUserDefaults, NSMutableDictionary, NSString;

@interface IGAlbumCreationManager : NSObject <IGAlbumCreationViewControllerDataDelegate, IGUserSessionClearableObject> {

	NSMutableArray* _albumModels;
	IGUserDefaults* _userSessionDefaults;
	NSMutableDictionary* _pendingUploads;
	NSMutableDictionary* _currentUploadStartTimes;

}

@property (nonatomic,retain) IGUserDefaults * userSessionDefaults;                       //@synthesize userSessionDefaults=_userSessionDefaults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingUploads;                       //@synthesize pendingUploads=_pendingUploads - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * currentUploadStartTimes;              //@synthesize currentUploadStartTimes=_currentUploadStartTimes - In the implementation block
@property (nonatomic,retain) NSMutableArray * albumModels;                               //@synthesize albumModels=_albumModels - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)prepareUploadForAsset:(id)arg1 albumModel:(id)arg2 ;
+(char)shouldSaveToLibrary;
-(void)willSwitchUsers;
-(void)willLogOut;
-(NSMutableArray *)albumModels;
-(id)unarchiveAlbums;
-(void)uploadManagerDidShareAlbum:(id)arg1 ;
-(void)uploadManagerDidFailUpload:(id)arg1 ;
-(void)removeObserversFromAlbum:(id)arg1 ;
-(void)addObserversToAlbum:(id)arg1 ;
-(void)archiveAlbums;
-(void)albumWasDeleted:(id)arg1 ;
-(void)albumDidChange:(id)arg1 ;
-(void)processMetadataUpload:(id)arg1 forAlbumModel:(id)arg2 ;
-(IGUserDefaults *)userSessionDefaults;
-(void)addAlbumModel:(id)arg1 ;
-(void)uploadNextAssetForAlbumModel:(id)arg1 ;
-(id)updateTitle:(id)arg1 forAlbumModel:(id)arg2 ;
-(id)updateItemText:(id)arg1 position:(float)arg2 forAlbumModel:(id)arg3 ;
-(NSMutableDictionary *)pendingUploads;
-(NSMutableDictionary *)currentUploadStartTimes;
-(char)updateStoredAlbumModel:(id)arg1 ;
-(id)initWithUserSessionDefaults:(id)arg1 ;
-(void)removeArchivedAlbums;
-(void)setUserSessionDefaults:(IGUserDefaults *)arg1 ;
-(void)setPendingUploads:(NSMutableDictionary *)arg1 ;
-(void)setCurrentUploadStartTimes:(NSMutableDictionary *)arg1 ;
-(void)creationViewController:(id)arg1 didPickAsset:(id)arg2 forAlbumModel:(id)arg3 ;
-(id)creationViewController:(id)arg1 didUpdateTitle:(id)arg2 forAlbumModel:(id)arg3 ;
-(id)creationViewController:(id)arg1 didUpdateItemText:(id)arg2 position:(float)arg3 forAlbumModel:(id)arg4 ;
-(id)albumModelWithPK:(id)arg1 ;
-(void)setAlbumModels:(NSMutableArray *)arg1 ;
-(void)dealloc;
@end

