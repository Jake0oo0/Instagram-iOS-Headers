/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:57 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IGTwitterUtil : NSObject
+(char)hasSystemTwitterAccount;
+(void)tweetWithSystemTwitterAccountPhotoLink:(id)arg1 username:(id)arg2 mediaType:(int)arg3 viewController:(id)arg4 ;
+(void)loadProfilePictureForACAccount:(id)arg1 delegate:(id)arg2 ;
+(void)loadProfilePictureFromOAuthViaSystem:(id)arg1 ;
+(char)canLoadProfilePicture;
+(void)loadProfilePictureWithDelegate:(id)arg1 ;
+(void)loadProfilePictureWithPlainOAuth:(id)arg1 ;
+(id)accountStore;
+(void)removeHandler:(id)arg1 ;
@end

