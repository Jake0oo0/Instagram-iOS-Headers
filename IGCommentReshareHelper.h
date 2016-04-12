/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:38 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IGCommentReshareHelperDelegate;
@class NSString, NSArray, IGFeedItem;

@interface IGCommentReshareHelper : NSObject {

	char _allUsernamesAreLeading;
	char _didTapReplyToUser;
	char _containsOnlyAtSign;
	char _isUserAlsoThePoster;
	id<IGCommentReshareHelperDelegate> _delegate;
	NSString* _text;
	int _userPreference;
	NSArray* _usernames;
	IGFeedItem* _feedItem;
	NSString* _textToSend;
	float _ratio;
	int _minActionCount;

}

@property (assign,nonatomic,__weak) id<IGCommentReshareHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char didTapReplyToUser;                                          //@synthesize didTapReplyToUser=_didTapReplyToUser - In the implementation block
@property (nonatomic,copy) NSString * text;                                                   //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) int userPreference;                                              //@synthesize userPreference=_userPreference - In the implementation block
@property (nonatomic,copy) NSArray * usernames;                                               //@synthesize usernames=_usernames - In the implementation block
@property (nonatomic,readonly) int status; 
@property (nonatomic,readonly) IGFeedItem * feedItem;                                         //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,copy) NSString * textToSend;                                             //@synthesize textToSend=_textToSend - In the implementation block
@property (assign,nonatomic) char containsOnlyAtSign;                                         //@synthesize containsOnlyAtSign=_containsOnlyAtSign - In the implementation block
@property (nonatomic,readonly) char isUserAlsoThePoster;                                      //@synthesize isUserAlsoThePoster=_isUserAlsoThePoster - In the implementation block
@property (nonatomic,readonly) float ratio;                                                   //@synthesize ratio=_ratio - In the implementation block
@property (nonatomic,readonly) int minActionCount;                                            //@synthesize minActionCount=_minActionCount - In the implementation block
+(id)recipientFromUsernames:(id)arg1 ;
+(id)usernamesFromText:(id)arg1 ;
+(id)textByTrimmingLeadingUsernames:(id)arg1 text:(id)arg2 allUsernamesAreLeading:(char*)arg3 ;
+(char)isActiveDismisserForDismissCount:(int)arg1 sendCount:(int)arg2 definedRatio:(float)arg3 minActionCount:(int)arg4 ;
+(id)usernamesRegex;
-(IGFeedItem *)feedItem;
-(NSArray *)usernames;
-(id)initWithFeedItem:(id)arg1 currentUser:(id)arg2 ;
-(void)reshareWithCompletion:(/*^block*/id)arg1 ;
-(void)setUserPreference:(int)arg1 ;
-(id)updatedTextForReshareModeWithOriginalText:(id)arg1 ;
-(NSString *)textToSend;
-(void)setContainsOnlyAtSign:(char)arg1 ;
-(void)setUsernames:(NSArray *)arg1 ;
-(void)setTextToSend:(NSString *)arg1 ;
-(void)notifyStatusChangeIfNeededFromOldStatus:(int)arg1 ;
-(int)userPreference;
-(char)isUserAlsoThePoster;
-(char)didTapReplyToUser;
-(int)minActionCount;
-(char)containsOnlyAtSign;
-(char)isAnyUsernameOnCommentOnlyList;
-(void)setDidTapReplyToUser:(char)arg1 ;
-(float)ratio;
-(void)setDelegate:(id<IGCommentReshareHelperDelegate>)arg1 ;
-(id<IGCommentReshareHelperDelegate>)delegate;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(int)status;
@end

