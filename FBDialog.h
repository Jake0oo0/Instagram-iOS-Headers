/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:49 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol FBDialogDelegate;
@class NSMutableDictionary, NSString, NSURL, UIWebView, UIActivityIndicatorView, UIButton, FBFrictionlessRequestSettings, UIView;

@interface FBDialog : UIView <UIWebViewDelegate> {

	id<FBDialogDelegate> _delegate;
	NSMutableDictionary* _params;
	NSString* _serverURL;
	NSURL* _loadingURL;
	UIWebView* _webView;
	UIActivityIndicatorView* _spinner;
	UIButton* _closeButton;
	int _orientation;
	char _showingKeyboard;
	char _isViewInvisible;
	FBFrictionlessRequestSettings* _frictionlessSettings;
	UIView* _modalBackgroundView;
	char _everShown;

}

@property (assign,nonatomic) id<FBDialogDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * params;               //@synthesize params=_params - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addRoundedRectToPath:(CGContextRef)arg1 rect:(CGRect)arg2 radius:(float)arg3 ;
-(CGAffineTransform)transformForOrientation;
-(void)bounce2AnimationStopped;
-(void)removeObservers;
-(void)showWebView;
-(void)dialogWillDisappear;
-(void)postDismissCleanup;
-(void)drawRect:(CGRect)arg1 fill:(const float*)arg2 radius:(float)arg3 ;
-(void)strokeLines:(CGRect)arg1 stroke:(const float*)arg2 ;
-(void)bounce1AnimationStopped;
-(void)dialogWillAppear;
-(void)addObservers;
-(void)dismissWithError:(id)arg1 animated:(char)arg2 ;
-(void)dialogSuccessHandleFrictionlessResponses:(id)arg1 ;
-(void)updateWebOrientation;
-(char)shouldRotateToOrientation:(int)arg1 ;
-(void)sizeToFitOrientation:(char)arg1 ;
-(void)loadURL:(id)arg1 get:(id)arg2 ;
-(id)generateURL:(id)arg1 params:(id)arg2 ;
-(char)testBoolUrlParam:(id)arg1 param:(id)arg2 ;
-(void)setParams:(NSMutableDictionary *)arg1 ;
-(id)getStringFromUrl:(id)arg1 needle:(id)arg2 ;
-(void)dismissWithSuccess:(char)arg1 animated:(char)arg2 ;
-(void)dialogDidSucceed:(id)arg1 ;
-(id)initWithURL:(id)arg1 params:(id)arg2 isViewInvisible:(char)arg3 frictionlessSettings:(id)arg4 delegate:(id)arg5 ;
-(void)showSpinner;
-(void)deviceOrientationDidChange:(void*)arg1 ;
-(NSMutableDictionary *)params;
-(void)cancel;
-(void)show;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<FBDialogDelegate>)arg1 ;
-(id)init;
-(id<FBDialogDelegate>)delegate;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)load;
-(void)dismiss:(char)arg1 ;
-(void)hideSpinner;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)dialogDidCancel:(id)arg1 ;
@end

