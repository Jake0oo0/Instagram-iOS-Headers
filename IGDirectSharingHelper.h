/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:41 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IGDirectSharingHelper : NSObject
+(void)handleReshareSuccessfulResponse:(id)arg1 recipient:(id)arg2 threadID:(id*)arg3 ;
+(void)handleReshareFailureWithRecipient:(id)arg1 ;
+(char)isThreadNameTooLong:(id)arg1 ;
+(char)isBlankString:(id)arg1 ;
+(char)showTimestampHeaderForIndexPath:(id)arg1 withContents:(id)arg2 ;
+(int)lastVisibleContentIdx:(id)arg1 ;
+(id)keysForUsers:(id)arg1 ;
+(id)bfsFindSubviewOfClass:(Class)arg1 root:(id)arg2 maxLevel:(unsigned)arg3 ;
+(id)likedItemKeyForContent:(id)arg1 ;
+(char)hasShownDoubleTapNuxForContent:(id)arg1 ;
+(char)isContentDateEligibleForLikes:(id)arg1 ;
+(char)isReactable:(id)arg1 ;
+(id)firstEligibleDateForLikes;
+(id)getThreadFromResponse:(id)arg1 threadID:(id*)arg2 ;
+(char)isPublicThreadFromResponse:(id)arg1 ;
+(id)seenUsersForContent:(id)arg1 thread:(id)arg2 pendingMode:(char)arg3 ;
+(char)isThreadNameValid:(id)arg1 ;
+(char)showUsernameForIndexPath:(id)arg1 withContents:(id)arg2 ;
+(id)shortTimestampTextFromThread:(id)arg1 ;
+(id)timestampTextFromThread:(id)arg1 ;
+(char)showSeenstampFooterForIndexPath:(id)arg1 withContents:(id)arg2 ;
+(char)showViewCountFooterForIndexPath:(id)arg1 withContents:(id)arg2 ;
+(id)serializedStringFromDictionary:(id)arg1 ;
+(id)userKeyForUsers:(id)arg1 ;
+(id)findKeyboardViewForTextView:(id)arg1 ;
+(char)isDirectMediaUpload:(id)arg1 ;
+(char)reactableIsLikedByCurrentUser:(id)arg1 ;
+(void)updateUserDefaultsAfterLikeForContent:(id)arg1 ;
+(char)showDoubleTapToLikeNuxForContent:(id)arg1 ;
+(id)igSequence2Date:(id)arg1 ;
+(id)postsInContentArray:(id)arg1 ;
+(id)suppressedContentAfterContent:(id)arg1 allContent:(id)arg2 ;
+(void)getOrFetchThreadFromResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)keyboardWindow;
@end

