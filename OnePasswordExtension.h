/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:40 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OnePasswordExtension : NSObject
+(id)systemAppExtensionAPINotAvailableError;
+(id)failedToContactExtensionErrorWithActivityError:(id)arg1 ;
+(id)extensionCancelledByUserError;
+(id)failedToObtainURLStringFromWebViewError;
+(id)failedToFillFieldsErrorWithLocalizedErrorMessage:(id)arg1 underlyingError:(id)arg2 ;
+(id)failedToLoadItemProviderDataErrorWithUnderlyingError:(id)arg1 ;
+(id)sharedExtension;
+(id)failedToCollectFieldsErrorWithUnderlyingError:(id)arg1 ;
-(char)isSystemAppExtensionAPIAvailable;
-(id)activityViewControllerForItem:(id)arg1 viewController:(id)arg2 sender:(id)arg3 typeIdentifier:(id)arg4 ;
-(void)processExtensionItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fillItemIntoUIWebView:(id)arg1 webViewController:(id)arg2 sender:(id)arg3 showOnlyLogins:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)createExtensionItemForURLString:(id)arg1 webPageDetails:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)executeFillScript:(id)arg1 inWebView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)findLoginIn1PasswordWithURLString:(id)arg1 collectedPageDetails:(id)arg2 forWebViewController:(id)arg3 sender:(id)arg4 withWebView:(id)arg5 showOnlyLogins:(char)arg6 completion:(/*^block*/id)arg7 ;
-(void)fillItemIntoWebView:(id)arg1 forViewController:(id)arg2 sender:(id)arg3 showOnlyLogins:(char)arg4 completion:(/*^block*/id)arg5 ;
-(char)isAppExtensionAvailable;
-(void)findLoginForURLString:(id)arg1 forViewController:(id)arg2 sender:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)storeLoginForURLString:(id)arg1 loginDetails:(id)arg2 passwordGenerationOptions:(id)arg3 forViewController:(id)arg4 sender:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)changePasswordForLoginForURLString:(id)arg1 loginDetails:(id)arg2 passwordGenerationOptions:(id)arg3 forViewController:(id)arg4 sender:(id)arg5 completion:(/*^block*/id)arg6 ;
-(char)isOnePasswordExtensionActivityType:(id)arg1 ;
-(void)createExtensionItemForWebView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fillReturnedItems:(id)arg1 intoWebView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fillLoginIntoWebView:(id)arg1 forViewController:(id)arg2 sender:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

