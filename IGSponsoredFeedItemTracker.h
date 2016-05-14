/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:48 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGFeedItemTracker.h>

@interface IGSponsoredFeedItemTracker : IGFeedItemTracker
-(void)trackHideReasonForTrackingToken:(id)arg1 withReason:(id)arg2 withExtraDictionary:(id)arg3 ;
-(void)addEntriesForEvent:(id)arg1 trackingToken:(id)arg2 reason:(id)arg3 extra:(id)arg4 ;
-(id)trackInvalidationForFeedItem:(id)arg1 withReason:(id)arg2 ;
-(void)trackSurveyWillAppearForSurveyQuestion:(id)arg1 ;
-(void)trackSurveyPrimerResponseForQuestion:(id)arg1 withResponse:(char)arg2 ;
-(void)trackBrandLiftSurveyPrimerResponseForSurvey:(id)arg1 withResponse:(char)arg2 ;
-(void)trackBrandLiftQuestionDidDismiss:(id)arg1 ;
-(void)trackHideReasonSelectedForSurveyQuestion:(id)arg1 withAnswer:(id)arg2 withExtraDictionary:(id)arg3 ;
-(void)trackHideReasonForFeedItem:(id)arg1 withReason:(id)arg2 withExtraDictionary:(id)arg3 ;
-(void)trackSurveyAnsweredForSurveyQuestion:(id)arg1 withAnswer:(id)arg2 ;
-(void)trackBrandLiftSurveyWillAppearForSurvey:(id)arg1 ;
-(void)trackBrandLiftQuestion:(id)arg1 withAnswers:(id)arg2 forSurvey:(id)arg3 ;
-(id)init;
@end

