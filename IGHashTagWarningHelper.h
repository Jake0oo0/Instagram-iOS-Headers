/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:42 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSMutableSet, IGHashtagModel, NSURL, UIAlertView, NSDictionary, NSString;

@interface IGHashTagWarningHelper : NSObject <UIAlertViewDelegate, UIWebViewDelegate> {

	NSMutableSet* _approvedHashtags;
	IGHashtagModel* _hashtag;
	/*^block*/id _decisionBlock;
	NSURL* _warningURL;
	UIAlertView* _alertView;
	NSDictionary* _hashtagWarningInfo;

}

@property (nonatomic,retain) NSDictionary * hashtagWarningInfo;              //@synthesize hashtagWarningInfo=_hashtagWarningInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedHelper;
-(void)userDidAcceptWarning:(char)arg1 ;
-(void)showHashtagWarning:(id)arg1 forHashtag:(id)arg2 decisionBlock:(/*^block*/id)arg3 ;
-(NSDictionary *)hashtagWarningInfo;
-(void)setHashtagWarningInfo:(NSDictionary *)arg1 ;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
@end

