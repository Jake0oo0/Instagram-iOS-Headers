/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:46 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGUserSessionClearableObject.h>

@class NSMutableDictionary, NSString;

@interface IGMediaUploadManager : NSObject <IGUserSessionClearableObject> {

	NSMutableDictionary* _activeUploads;
	NSString* _userPK;

}

@property (nonatomic,retain) NSString * userPK;                     //@synthesize userPK=_userPK - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)unarchiveUploadsForPath:(id)arg1 ;
+(char)isAddToPostEnabledForUpload:(id)arg1 ;
+(id)configureEndpointFromUpload:(id)arg1 ;
+(id)configureUrlFromUpload:(id)arg1 ;
+(id)sharedManager;
-(void)willSwitchUsers;
-(void)willLogOut;
-(id)createUploadForType:(int)arg1 ;
-(id)uploadForStartTime:(id)arg1 ;
-(void)uploadPhotoForStartTime:(id)arg1 ;
-(void)archiveUploadsWithAppEnteringBackground:(char)arg1 ;
-(void)removeUploadWithStartTime:(id)arg1 isUserAction:(char)arg2 ;
-(id)initWithUserSessionPK:(id)arg1 ;
-(void)retryUploadWithStartTime:(id)arg1 ;
-(void)unarchiveUploads;
-(id)validUploadsBroadcastUploads;
-(void)configureUploadForStartTime:(id)arg1 ;
-(void)onAppWillBackground:(id)arg1 ;
-(void)onAppWillResume:(id)arg1 ;
-(void)onAppWillTerminate:(id)arg1 ;
-(void)removeCompletedUploads;
-(id)activeUploadsSynchronizedCopy;
-(NSString *)userPK;
-(void)processUnarchivedUploads;
-(void)removeUnusedSavedUploadsFromDisk;
-(void)removeUploadsForKeys:(id)arg1 ;
-(void)createUploadWithDataType:(int)arg1 startTime:(id)arg2 ;
-(void)startUploadBackgroundTaskForUpload:(id)arg1 ;
-(void)showAlertProcessingFailed;
-(void)uploadVideoForStartTime:(id)arg1 ;
-(void)startConfigureBackgroundTaskForUpload:(id)arg1 ;
-(void)uploadVideoDataForUpload:(id)arg1 ;
-(id)validUploadsForDirectedSharing:(char)arg1 ;
-(id)uploadIdForUpload:(id)arg1 ;
-(id)paramsForHighResolutionUploadExperimentWithUpload:(id)arg1 ;
-(void)endUploadBackgroundTaskForUpload:(id)arg1 ;
-(void)notifyImageUploadFailureWithUploadTime:(id)arg1 andReason:(id)arg2 ;
-(void)notifyVideoUploadFailureWithUploadTime:(id)arg1 andReason:(id)arg2 ;
-(void)uploadVideoCoverPhotoForStartTime:(id)arg1 ;
-(void)finishConfigureForDirectShareUpload:(id)arg1 ;
-(id)generateConfigureParamsForUpload:(id)arg1 ;
-(void)postFinishedWithServerResponse:(id)arg1 forUpload:(id)arg2 ;
-(void)configureUploadAutoRetryUpload:(id)arg1 withRetryError:(id)arg2 ;
-(void)configureUploadFailed:(id)arg1 withError:(id)arg2 ;
-(void)notifyVideoConfigureFailureWithUploadTime:(id)arg1 andReason:(id)arg2 ;
-(void)endConfigureBackgroundTaskForUpload:(id)arg1 ;
-(void)manuallyCacheLocalImageData:(id)arg1 forItem:(id)arg2 ;
-(void)stashAllUploads;
-(id)validUploadsDirectedUploads;
-(char)validateServerResponse:(id)arg1 forUpload:(id)arg2 ;
-(void)setUserPK:(NSString *)arg1 ;
-(void)dealloc;
-(void)cancelAllUploads;
@end

