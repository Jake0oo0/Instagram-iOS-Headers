/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:43 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IGSurveyQuestion, IGBrandLiftSurvey, NSTimer;

@interface IGSurveyManager : NSObject {

	IGSurveyQuestion* _pendingSurveyQuestion;
	IGBrandLiftSurvey* _pendingBrandLiftSurvey;
	NSTimer* _activeSurveyTimer;
	double _timeAtStartup;

}
-(void)appLaunched:(id)arg1 ;
-(void)appForegrounded:(id)arg1 ;
-(void)appBackgrounded:(id)arg1 ;
-(void)mainFeedDidAppear:(id)arg1 ;
-(void)showSurveyWhenAppropriate:(id)arg1 ;
-(void)showBrandLiftSurveyWhenAppropriate:(id)arg1 ;
-(void)feedStartedInteracting:(id)arg1 ;
-(void)mainFeedEndedInteracting:(id)arg1 ;
-(void)invalidateTimerIfActive;
-(void)scheduleSurveyDisplayIfNeeded;
-(void)showPendingSurvey;
-(void)dealloc;
-(id)init;
@end

