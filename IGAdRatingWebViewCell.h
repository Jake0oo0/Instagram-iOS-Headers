/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:44 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol IGAdRatingWebViewCellContinuationDelegate;
@class IGFeedItem, UIWebView, NSString;

@interface IGAdRatingWebViewCell : UICollectionViewCell <UIWebViewDelegate> {

	IGFeedItem* _webElement;
	id<IGAdRatingWebViewCellContinuationDelegate> _continuationDelegate;
	UIWebView* _webView;

}

@property (nonatomic,retain) UIWebView * webView;                                                                    //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) IGFeedItem * webElement;                                                                //@synthesize webElement=_webElement - In the implementation block
@property (assign,nonatomic,__weak) id<IGAdRatingWebViewCellContinuationDelegate> continuationDelegate;              //@synthesize continuationDelegate=_continuationDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContinuationDelegate:(id<IGAdRatingWebViewCellContinuationDelegate>)arg1 ;
-(id<IGAdRatingWebViewCellContinuationDelegate>)continuationDelegate;
-(void)setWebElement:(IGFeedItem *)arg1 ;
-(IGFeedItem *)webElement;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
@end

