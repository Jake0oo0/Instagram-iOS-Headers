/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/DDAbstractLogger.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface DDAbstractDatabaseLogger : DDAbstractLogger {

	unsigned saveThreshold;
	double saveInterval;
	double maxAge;
	double deleteInterval;
	char deleteOnEverySave;
	char saveTimerSuspended;
	unsigned unsavedCount;
	unsigned long long unsavedTime;
	NSObject*<OS_dispatch_source> saveTimer;
	unsigned long long lastDeleteTime;
	NSObject*<OS_dispatch_source> deleteTimer;

}

@property (assign) unsigned saveThreshold; 
@property (assign) double saveInterval; 
@property (assign) double maxAge; 
@property (assign) double deleteInterval; 
@property (assign) char deleteOnEverySave; 
-(void)didAddLogger;
-(void)willRemoveLogger;
-(void)destroySaveTimer;
-(void)destroyDeleteTimer;
-(void)db_saveAndDelete;
-(void)db_save;
-(void)db_delete;
-(void)performSaveAndSuspendSaveTimer;
-(void)performDelete;
-(void)updateDeleteTimer;
-(void)createSuspendedSaveTimer;
-(void)updateAndResumeSaveTimer;
-(void)createAndStartDeleteTimer;
-(char)db_log:(id)arg1 ;
-(unsigned)saveThreshold;
-(void)setSaveThreshold:(unsigned)arg1 ;
-(double)saveInterval;
-(void)setSaveInterval:(double)arg1 ;
-(double)deleteInterval;
-(void)setDeleteInterval:(double)arg1 ;
-(char)deleteOnEverySave;
-(void)setDeleteOnEverySave:(char)arg1 ;
-(void)savePendingLogEntries;
-(void)deleteOldLogEntries;
-(void)dealloc;
-(id)init;
-(void)flush;
-(void)logMessage:(id)arg1 ;
-(void)setMaxAge:(double)arg1 ;
-(double)maxAge;
@end

