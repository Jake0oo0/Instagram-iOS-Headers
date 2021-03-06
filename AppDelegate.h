
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, IGSurveyManager, IGAnalyticsManager, IGFeedItemTrackingManager, IGNavigationEventManager, IGLocalNotificationManager, IGLoggedOutSessionManager, IGTypicalMetricsManager, IGReactModuleManager, NSMutableSet, NSTimer, IGShortcutHandler, NSString;

@interface AppDelegate : NSObject <UIApplicationDelegate> {

	char _handledOpenWithURLInDidFinishLaunching;
	char _handledPushNoteInDidFinishLaunching;
	char _hasSetupLogging;
	UIWindow* _window;
	IGSurveyManager* _surveyManager;
	IGAnalyticsManager* _analyticsManager;
	IGFeedItemTrackingManager* _feedItemTrackingManager;
	IGNavigationEventManager* _navigationEventManager;
	IGLocalNotificationManager* _localNotificationManager;
	IGLoggedOutSessionManager* _loggedOutSessionManager;
	IGTypicalMetricsManager* _typicalMetricsManager;
	IGReactModuleManager* _reactModuleManager;
	NSMutableSet* _seenErrorURLs;
	NSTimer* _memoryWarningTimer;
	IGShortcutHandler* _shortcutHandler;

}

@property (nonatomic,retain) IGSurveyManager * surveyManager;                                    //@synthesize surveyManager=_surveyManager - In the implementation block
@property (nonatomic,retain) IGAnalyticsManager * analyticsManager;                              //@synthesize analyticsManager=_analyticsManager - In the implementation block
@property (nonatomic,retain) IGFeedItemTrackingManager * feedItemTrackingManager;                //@synthesize feedItemTrackingManager=_feedItemTrackingManager - In the implementation block
@property (nonatomic,retain) IGNavigationEventManager * navigationEventManager;                  //@synthesize navigationEventManager=_navigationEventManager - In the implementation block
@property (nonatomic,retain) IGLocalNotificationManager * localNotificationManager;              //@synthesize localNotificationManager=_localNotificationManager - In the implementation block
@property (nonatomic,retain) IGLoggedOutSessionManager * loggedOutSessionManager;                //@synthesize loggedOutSessionManager=_loggedOutSessionManager - In the implementation block
@property (nonatomic,retain) IGTypicalMetricsManager * typicalMetricsManager;                    //@synthesize typicalMetricsManager=_typicalMetricsManager - In the implementation block
@property (nonatomic,retain) IGReactModuleManager * reactModuleManager;                          //@synthesize reactModuleManager=_reactModuleManager - In the implementation block
@property (assign,nonatomic) char handledOpenWithURLInDidFinishLaunching;                        //@synthesize handledOpenWithURLInDidFinishLaunching=_handledOpenWithURLInDidFinishLaunching - In the implementation block
@property (assign,nonatomic) char handledPushNoteInDidFinishLaunching;                           //@synthesize handledPushNoteInDidFinishLaunching=_handledPushNoteInDidFinishLaunching - In the implementation block
@property (nonatomic,retain) NSMutableSet * seenErrorURLs;                                       //@synthesize seenErrorURLs=_seenErrorURLs - In the implementation block
@property (assign,nonatomic) char hasSetupLogging;                                               //@synthesize hasSetupLogging=_hasSetupLogging - In the implementation block
@property (nonatomic,retain) NSTimer * memoryWarningTimer;                                       //@synthesize memoryWarningTimer=_memoryWarningTimer - In the implementation block
@property (nonatomic,readonly) IGShortcutHandler * shortcutHandler;                              //@synthesize shortcutHandler=_shortcutHandler - In the implementation block
@property (nonatomic,retain) UIWindow * window;                                                  //@synthesize window=_window - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeedItemTrackingManager:(IGFeedItemTrackingManager *)arg1 ;
-(void)setAnalyticsManager:(IGAnalyticsManager *)arg1 ;
-(void)setSurveyManager:(IGSurveyManager *)arg1 ;
-(void)setNavigationEventManager:(IGNavigationEventManager *)arg1 ;
-(void)setLocalNotificationManager:(IGLocalNotificationManager *)arg1 ;
-(void)setLoggedOutSessionManager:(IGLoggedOutSessionManager *)arg1 ;
-(void)setTypicalMetricsManager:(IGTypicalMetricsManager *)arg1 ;
-(void)setReactModuleManager:(IGReactModuleManager *)arg1 ;
-(char)hasSetupLogging;
-(void)setHasSetupLogging:(char)arg1 ;
-(void)logMemoryCrashAndPromptToRestartIfNeeded;
-(void)setUpInstagramNotifications;
-(IGShortcutHandler *)shortcutHandler;
-(void)setUpDefaults;
-(void)logVoiceOverEnabledAtLaunch;
-(void)startMainAppAnimated:(char)arg1 ;
-(void)setHandledPushNoteInDidFinishLaunching:(char)arg1 ;
-(void)toggleMemoryProfiler;
-(void)configureFLEX;
-(void)exitIfSafe;
-(void)applicationLifecycleChange:(id)arg1 ;
-(void)userLoginCompleted:(id)arg1 ;
-(void)userLogout:(id)arg1 ;
-(void)networkRequestDidFail:(id)arg1 ;
-(void)voiceOverStatusDidChange:(id)arg1 ;
-(void)logPreferredTextSizeAtLogin:(id)arg1 ;
-(void)preferredContentSizeDidChange:(id)arg1 ;
-(void)registerForPush;
-(char)handledPushNoteInDidFinishLaunching;
-(NSTimer *)memoryWarningTimer;
-(void)fireMemoryWarning;
-(void)setMemoryWarningTimer:(NSTimer *)arg1 ;
-(NSMutableSet *)seenErrorURLs;
-(void)setSeenErrorURLs:(NSMutableSet *)arg1 ;
-(void)toggleMemoryWarnings:(char)arg1 ;
-(IGSurveyManager *)surveyManager;
-(IGAnalyticsManager *)analyticsManager;
-(IGFeedItemTrackingManager *)feedItemTrackingManager;
-(IGNavigationEventManager *)navigationEventManager;
-(IGLocalNotificationManager *)localNotificationManager;
-(IGLoggedOutSessionManager *)loggedOutSessionManager;
-(IGTypicalMetricsManager *)typicalMetricsManager;
-(IGReactModuleManager *)reactModuleManager;
-(char)handledOpenWithURLInDidFinishLaunching;
-(void)setHandledOpenWithURLInDidFinishLaunching:(char)arg1 ;
-(void)dealloc;
-(UIWindow *)window;
-(id)init;
-(char)application:(id)arg1 handleOpenURL:(id)arg2 ;
-(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)application:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(/*^block*/id)arg3 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(/*^block*/id)arg3 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 ;
-(void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)application:(id)arg1 didReceiveLocalNotification:(id)arg2 ;
-(void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3 ;
-(char)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2 ;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 ;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 ;
-(void)handleMemoryWarningNotification:(id)arg1 ;
@end

