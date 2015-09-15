/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:42 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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
-(void)flickrDidNotAuthorize:(id)arg1 ;
-(void)flickrDidAuthorize:(id)arg1 ;
-(void)flickrWebViewLoadInProgress:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
@end

