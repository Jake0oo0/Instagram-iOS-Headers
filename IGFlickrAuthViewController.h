/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:22 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
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

