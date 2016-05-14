/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, IGAdPaymentInfo, UIColor;

@interface IGAdViewModel : NSObject {

	unsigned _type;
	NSString* _mediaId;
	NSString* _organicMediaId;
	NSURL* _thumbnailURL;
	NSString* _callToAction;
	NSString* _facebookID;
	NSURL* _callToActionURL;
	NSString* _audienceName;
	NSString* _totalBudget;
	NSString* _totalDuration;
	NSString* _timeLeft;
	NSString* _numberOfClicks;
	NSString* _pendingStatus;
	NSString* _endDate;
	IGAdPaymentInfo* _paymentInfo;

}

@property (readonly) NSString * headerTitle; 
@property (readonly) NSString * headerSubtitle; 
@property (readonly) NSString * errorStatus; 
@property (readonly) NSString * deleteString; 
@property (readonly) NSString * adsManagerCellTitle; 
@property (readonly) NSString * adsManagerCellSubtitle; 
@property (readonly) UIColor * adsManagerCellColorForSubtitle; 
@property (readonly) NSString * loggingStatus; 
@property (nonatomic,readonly) unsigned type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaId;                     //@synthesize mediaId=_mediaId - In the implementation block
@property (nonatomic,copy,readonly) NSString * organicMediaId;              //@synthesize organicMediaId=_organicMediaId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * thumbnailURL;                   //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * callToAction;                //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,copy,readonly) NSString * facebookID;                  //@synthesize facebookID=_facebookID - In the implementation block
@property (nonatomic,copy,readonly) NSURL * callToActionURL;                //@synthesize callToActionURL=_callToActionURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * audienceName;                //@synthesize audienceName=_audienceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * totalBudget;                 //@synthesize totalBudget=_totalBudget - In the implementation block
@property (nonatomic,copy,readonly) NSString * totalDuration;               //@synthesize totalDuration=_totalDuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * timeLeft;                    //@synthesize timeLeft=_timeLeft - In the implementation block
@property (nonatomic,copy,readonly) NSString * numberOfClicks;              //@synthesize numberOfClicks=_numberOfClicks - In the implementation block
@property (nonatomic,copy,readonly) NSString * pendingStatus;               //@synthesize pendingStatus=_pendingStatus - In the implementation block
@property (nonatomic,copy,readonly) NSString * endDate;                     //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) IGAdPaymentInfo * paymentInfo;               //@synthesize paymentInfo=_paymentInfo - In the implementation block
-(NSString *)facebookID;
-(NSString *)callToAction;
-(NSURL *)callToActionURL;
-(NSString *)headerSubtitle;
-(NSString *)deleteString;
-(NSString *)audienceName;
-(NSString *)adsManagerCellTitle;
-(NSString *)adsManagerCellSubtitle;
-(UIColor *)adsManagerCellColorForSubtitle;
-(NSString *)mediaId;
-(NSString *)loggingStatus;
-(id)initActiveAdWithType:(unsigned)arg1 facebookID:(id)arg2 organicMediaId:(id)arg3 thumbnailURL:(id)arg4 mediaId:(id)arg5 callToAction:(id)arg6 callToActionURL:(id)arg7 audienceName:(id)arg8 totalBudget:(id)arg9 totalDuration:(id)arg10 timeLeft:(id)arg11 numberOfClicks:(id)arg12 pendingStatus:(id)arg13 endDate:(id)arg14 paymentsInfo:(id)arg15 ;
-(NSString *)timeLeft;
-(NSString *)numberOfClicks;
-(IGAdPaymentInfo *)paymentInfo;
-(NSString *)organicMediaId;
-(NSString *)pendingStatus;
-(NSString *)endDate;
-(unsigned)type;
-(NSString *)headerTitle;
-(NSString *)totalBudget;
-(NSString *)errorStatus;
-(NSString *)totalDuration;
-(NSURL *)thumbnailURL;
@end

