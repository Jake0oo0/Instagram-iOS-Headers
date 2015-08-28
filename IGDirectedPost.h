/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:21 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGPost.h>
#import <Instagram/IGStoredObject.h>

@class NSOrderedSet, NSString;

@interface IGDirectedPost : IGPost <IGStoredObject> {

	char _hasNewComments;
	char _isRead;
	char _isSender;
	char _isDeleted;
	char _hasOutstandingReadRequest;
	char _hasPendingReadRequest;
	NSOrderedSet* _recipients;

}

@property (readonly) NSOrderedSet * recipients;                     //@synthesize recipients=_recipients - In the implementation block
@property (readonly) char hasNewComments;                           //@synthesize hasNewComments=_hasNewComments - In the implementation block
@property (readonly) char isRead;                                   //@synthesize isRead=_isRead - In the implementation block
@property (readonly) char isSender;                                 //@synthesize isSender=_isSender - In the implementation block
@property (readonly) char isDeleted;                                //@synthesize isDeleted=_isDeleted - In the implementation block
@property (assign) char hasOutstandingReadRequest;                  //@synthesize hasOutstandingReadRequest=_hasOutstandingReadRequest - In the implementation block
@property (assign) char hasPendingReadRequest;                      //@synthesize hasPendingReadRequest=_hasPendingReadRequest - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)centralizedStore;
-(id)urlToPostComment;
-(id)urlToDeleteComment:(id)arg1 ;
-(id)urlToFlagComment:(id)arg1 ;
-(void)handleRealtimeOperation:(id)arg1 ;
-(char)hasNewComments;
-(void)performDeleteWithCompletion:(/*^block*/id)arg1 ;
-(void)performHideForPostWithCompletion:(/*^block*/id)arg1 ;
-(char)isSender;
-(void)performHideAndIgnoreSenderForPostWithCompletion:(/*^block*/id)arg1 ;
-(void)performRead;
-(void)setHasCommented:(char)arg1 ;
-(void)performLike:(char)arg1 withUser:(id)arg2 userDidDoubleTap:(char)arg3 index:(int)arg4 analyticsMetadata:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)recipientSelf;
-(void)setRecipientsInfoFromDict:(id)arg1 ;
-(void)updateLocalLikeStatus:(char)arg1 withUser:(id)arg2 ;
-(char)hasOutstandingReadRequest;
-(void)setHasPendingReadRequest:(char)arg1 ;
-(void)setHasOutstandingReadRequest:(char)arg1 ;
-(char)hasPendingReadRequest;
-(void)performReadWithRetryAttemptCount:(unsigned)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)setHasNewComments:(char)arg1 ;
-(void)setIsSender:(char)arg1 ;
-(NSOrderedSet *)recipients;
-(void)setRecipients:(NSOrderedSet *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIsDeleted:(char)arg1 ;
-(char)isRead;
-(void)setIsRead:(char)arg1 ;
-(void)setRead:(char)arg1 ;
-(char)isDeleted;
-(char)updateWithDictionary:(id)arg1 ;
@end

