

@interface IGDirectSharingHelper : NSObject
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
+(id)getCachedThreadWithID:(id)arg1 ;
+(id)seenUsersForContent:(id)arg1 thread:(id)arg2 pendingMode:(char)arg3 ;
+(char)isThreadNameValid:(id)arg1 ;
+(char)showUsernameForIndexPath:(id)arg1 contents:(id)arg2 onlyHasMessageFromOneOtherUser:(char)arg3 ;
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
+(id)previewImageURLProviderForThread:(id)arg1 ;
+(void)shareContent:(id)arg1 fromThreadId:(id)arg2 ;
+(void)handleReshareSuccessWithThreadID:(id)arg1 recipient:(id)arg2 ;
+(void)handleReshareFailureWithRecipient:(id)arg1 ;
+(id)keyboardWindow;
@end

