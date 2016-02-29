/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:42 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGUnifiedWebViewControllerWebViewLogger.h>

@class NSString, NSMutableSet, NSMutableDictionary;

@interface IGUnifiedWebViewControllerStandardWebViewLogger : NSObject <IGUnifiedWebViewControllerWebViewLogger> {

	NSString* _currentMainDocumentURLString;
	NSMutableSet* _completedMainDocumentURLStrings;
	NSMutableDictionary* _requestURLStringToStartTime;

}

@property (nonatomic,retain) NSString * currentMainDocumentURLString;                        //@synthesize currentMainDocumentURLString=_currentMainDocumentURLString - In the implementation block
@property (nonatomic,retain) NSMutableSet * completedMainDocumentURLStrings;                 //@synthesize completedMainDocumentURLStrings=_completedMainDocumentURLStrings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestURLStringToStartTime;              //@synthesize requestURLStringToStartTime=_requestURLStringToStartTime - In the implementation block
-(void)webView:(id)arg1 willStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidGoBack:(id)arg1 ;
-(void)webViewDidGoForward:(id)arg1 ;
-(NSString *)currentMainDocumentURLString;
-(void)logFinishLoadForAllCurrentURLs;
-(void)setCurrentMainDocumentURLString:(NSString *)arg1 ;
-(NSMutableSet *)completedMainDocumentURLStrings;
-(NSMutableDictionary *)requestURLStringToStartTime;
-(void)logFinishLoadForURL:(id)arg1 ;
-(void)setCompletedMainDocumentURLStrings:(NSMutableSet *)arg1 ;
-(void)setRequestURLStringToStartTime:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
@end

