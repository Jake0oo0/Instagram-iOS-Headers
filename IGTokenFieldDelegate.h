/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:36 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IGTokenFieldDelegate <NSObject>
@optional
-(void)tokenFieldWillBeginEditing:(id)arg1;

@required
-(id)tokenFieldViewForTokenOverlay:(id)arg1;
-(void)tokenFieldWillFocusUser:(id)arg1;
-(void)tokenFieldDidBeginEditing:(id)arg1;
-(char)tokenFieldCanFinishEditing:(id)arg1;
-(void)tokenFieldDidRequestSearch:(id)arg1;
-(void)tokenField:(id)arg1 didChangeQuery:(id)arg2;
-(void)tokenField:(id)arg1 didDeleteToken:(id)arg2;

@end

