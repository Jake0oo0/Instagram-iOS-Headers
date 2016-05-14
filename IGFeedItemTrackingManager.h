/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:48 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IGFeedItemTrackingManager : NSObject
+(id)currentModule;
+(char)isMainFeed;
+(void)moreActionSheetForFeedItem:(id)arg1 dismissedWithButtonTitled:(id)arg2 userInfo:(id)arg3 ;
+(id)sponsoredFeedItemTracker;
+(id)trackerForFeedItem:(id)arg1 ;
+(id)trackingTokenStringTypeForPost:(id)arg1 ;
+(id)trackingTokenStringForPost:(id)arg1 ;
+(char)useNoLatencyLoggingForPost:(id)arg1 ;
+(void)removeFeedItem:(id)arg1 ;
+(void)hideFeedItem:(id)arg1 extraDictionary:(id)arg2 ;
+(id)websiteClickLinkForFeedItem:(id)arg1 ;
+(char)isAdRatingFeed;
+(char)isCTAAdvertiserProfile;
+(char)isSingleMediaAdSharing;
+(char)allowSponsoredPostForFeedItem:(id)arg1 ;
+(char)allowOrganicTrackingForFeedItem:(id)arg1 ;
+(id)organicFeedItemTracker;
+(char)allowExploreTrackingForFeedItem:(id)arg1 ;
+(id)exploreFeedItemTracker;
+(char)isCommentingFromMainFeed;
-(void)commentButtonTapped:(id)arg1 ;
-(void)surveyWillAppear:(id)arg1 ;
-(void)surveyAnswered:(id)arg1 ;
-(void)surveyPrimerViewDidDismiss:(id)arg1 ;
-(void)brandLiftSurveyWillAppear:(id)arg1 ;
-(void)brandLiftQuestionAnswered:(id)arg1 ;
-(void)brandLiftSurveyPrimerViewDidDismiss:(id)arg1 ;
-(void)brandLiftQuestionDidDismiss:(id)arg1 ;
-(void)didFinishBrowsingWebview:(id)arg1 ;
-(void)feedItemHideReasonSelected:(id)arg1 ;
-(void)commentPosted:(id)arg1 ;
-(void)feedItemLiked:(id)arg1 ;
-(void)feedItemUnliked:(id)arg1 ;
-(void)feedItemDidAppear:(id)arg1 ;
-(void)feedItemDidStartViewing:(id)arg1 ;
-(void)feedItemDidDisappear:(id)arg1 ;
-(void)feedItemDidScrollOffScreen:(id)arg1 ;
-(void)feedItemUserTapped:(id)arg1 ;
-(void)feedItemLocationTapped:(id)arg1 ;
-(void)feedItemURLTapped:(id)arg1 ;
-(void)headerLabelTapped:(id)arg1 ;
-(void)moreButtonTapped:(id)arg1 ;
-(void)feedItemsDidUpdate:(id)arg1 ;
-(void)videoCompleted:(id)arg1 ;
-(void)feedItemReportInappropriate:(id)arg1 ;
-(void)feedItemHideSpam:(id)arg1 ;
-(void)feedItemMediaDidAppearInFull:(id)arg1 ;
-(void)didTakeDirectResponseOverlayAction:(id)arg1 ;
-(void)didTakeDirectResponseAction:(id)arg1 ;
-(void)directResponseActionFailed:(id)arg1 ;
-(void)didTapHeaderTitle:(id)arg1 ;
-(void)didTapHeaderImage:(id)arg1 ;
-(void)didTapMedia:(id)arg1 ;
-(void)videoShouldStartPlaying:(id)arg1 ;
-(void)videoStarted:(id)arg1 ;
-(void)videoDisplayed:(id)arg1 ;
-(void)videoUnpaused:(id)arg1 ;
-(void)videoTapped:(id)arg1 ;
-(void)videoPaused:(id)arg1 ;
-(void)videoDidToggleAudio:(id)arg1 ;
-(void)analyticsNoLatencyUploadSuccess:(id)arg1 ;
-(void)includeVideoMetadataFromNotification:(id)arg1 intoEvent:(id)arg2 ;
-(id)stringForAudioToggleReason:(int)arg1 ;
-(id)stringForVideoPlaybackReason:(int)arg1 ;
-(id)stringForVideoStopReason:(int)arg1 ;
-(void)dealloc;
-(id)init;
@end

