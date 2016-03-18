

@interface IGURLHelper : NSObject
+(void)openExternalURL:(id)arg1 withWebViewController:(id)arg2 fromViewController:(id)arg3 displaysModally:(char)arg4 ;
+(void)openURL:(id)arg1 controller:(id)arg2 ;
+(void)openExternalURL:(id)arg1 controller:(id)arg2 modal:(char)arg3 controls:(char)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)openExternalURL:(id)arg1 controller:(id)arg2 modal:(char)arg3 controls:(char)arg4 title:(id)arg5 completionHandler:(/*^block*/id)arg6 cancelModalDismissHandler:(/*^block*/id)arg7 ;
+(id)actionForURL:(id)arg1 ;
+(void)openInternalURL:(id)arg1 controller:(id)arg2 animated:(char)arg3 ;
+(void)openExternalURL:(id)arg1 controller:(id)arg2 modal:(char)arg3 title:(id)arg4 ;
+(void)openExternalURL:(id)arg1 controller:(id)arg2 modal:(char)arg3 controls:(char)arg4 ;
+(void)openShortlinkURL:(id)arg1 linkTarget:(id)arg2 controller:(id)arg3 ;
+(void)openInstagramURLInSignInTab:(id)arg1 ;
+(void)openInstagramURLInTimelineTab:(id)arg1 ;
+(void)openInternalURL:(id)arg1 controller:(id)arg2 animated:(char)arg3 sourceURL:(id)arg4 ;
+(void)pushViewControllerForAction:(id)arg1 params:(id)arg2 usingNavigationController:(id)arg3 animated:(char)arg4 sourceURL:(id)arg5 ;
+(char)handleITunesURLForURL:(id)arg1 ;
+(void)confirmBeforeOpeningURL:(id)arg1 ;
+(void)handleDirectToExploreWithNavigationController:(id)arg1 ;
+(id)viewControllerForLocationID:(id)arg1 ;
+(id)viewControllerForMediaID:(id)arg1 ;
+(void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
+(void)openURL:(id)arg1 ;
+(id)infoForURL:(id)arg1 ;
@end

