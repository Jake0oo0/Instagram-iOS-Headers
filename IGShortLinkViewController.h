/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:55 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGViewController.h>

@class NSURL, IGTableViewInsetInfoView;

@interface IGShortLinkViewController : IGViewController {

	int _linkTarget;
	NSURL* _shortLinkURL;
	IGTableViewInsetInfoView* _infoView;

}

@property (assign,nonatomic) int linkTarget;                                   //@synthesize linkTarget=_linkTarget - In the implementation block
@property (nonatomic,retain) NSURL * shortLinkURL;                             //@synthesize shortLinkURL=_shortLinkURL - In the implementation block
@property (nonatomic,retain) IGTableViewInsetInfoView * infoView;              //@synthesize infoView=_infoView - In the implementation block
-(id)initWithShortLinkURL:(id)arg1 linkTarget:(int)arg2 ;
-(void)setShortLinkURL:(NSURL *)arg1 ;
-(void)infoViewDidTap;
-(NSURL *)shortLinkURL;
-(void)fetchShortLinkURL:(id)arg1 ;
-(void)handleFetchFailureWithError:(id)arg1 ;
-(void)handleFetchSuccessWithMediaViewable:(id)arg1 userID:(id)arg2 username:(id)arg3 mediaID:(id)arg4 ;
-(IGTableViewInsetInfoView *)infoView;
-(void)setInfoView:(IGTableViewInsetInfoView *)arg1 ;
-(void)viewDidLoad;
-(int)linkTarget;
-(void)setLinkTarget:(int)arg1 ;
@end

