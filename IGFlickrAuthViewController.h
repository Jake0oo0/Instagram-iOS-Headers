/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:48 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGViewController.h>
#import <Instagram/IGFlickrAuthDelegate.h>

@class UIWebView, IGFlickrAuthHelper, NSString;

@interface IGFlickrAuthViewController : IGViewController <IGFlickrAuthDelegate> {

	UIWebView* _webView;
	IGFlickrAuthHelper* _authHelper;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)flickrDidAuthorize:(id)arg1 ;
-(void)flickrDidNotAuthorize:(id)arg1 ;
-(void)flickrWebViewLoadInProgress:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
@end

