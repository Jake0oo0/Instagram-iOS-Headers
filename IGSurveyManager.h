/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:57 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
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

