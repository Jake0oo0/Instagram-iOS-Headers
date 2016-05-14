/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:41 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGDKDiffable.h>

@protocol NSObject;
@class NSString, IGPost, IGUser, IGDate;

@interface IGCommentModel : NSObject <NSCoding, IGDKDiffable> {

	id<NSObject> _diffIdentifier;
	char _wasMarkedAsSpam;
	char _didReportAsSpam;
	NSString* _pk;
	IGPost* _post;
	IGUser* _user;
	NSString* _text;
	int _type;
	IGDate* _createdAt;
	int _postedState;
	NSString* _idempotenceToken;
	NSString* _failureReason;

}

@property (nonatomic,retain) NSString * idempotenceToken;              //@synthesize idempotenceToken=_idempotenceToken - In the implementation block
@property (nonatomic,copy) NSString * failureReason;                   //@synthesize failureReason=_failureReason - In the implementation block
@property (nonatomic,copy) NSString * pk;                              //@synthesize pk=_pk - In the implementation block
@property (assign,nonatomic,__weak) IGPost * post;                     //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) IGUser * user;                            //@synthesize user=_user - In the implementation block
@property (nonatomic,copy) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) int type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) IGDate * createdAt;                       //@synthesize createdAt=_createdAt - In the implementation block
@property (assign,nonatomic) int postedState;                          //@synthesize postedState=_postedState - In the implementation block
@property (assign,nonatomic) char wasMarkedAsSpam;                     //@synthesize wasMarkedAsSpam=_wasMarkedAsSpam - In the implementation block
@property (assign,nonatomic) char didReportAsSpam;                     //@synthesize didReportAsSpam=_didReportAsSpam - In the implementation block
@property (nonatomic,readonly) char canDelete; 
+(id)postCommentWithText:(id)arg1 forPost:(id)arg2 ;
+(id)defaultTruncationTokenString;
+(id)moreTruncationTokenStringWithConfiguration:(id)arg1 ;
-(void)setPk:(NSString *)arg1 ;
-(NSString *)pk;
-(id)diffIdentifier;
-(IGPost *)post;
-(void)setPost:(IGPost *)arg1 ;
-(id)buildStyledStringWithNewline:(char)arg1 configuration:(id)arg2 ;
-(void)postComment;
-(int)postedState;
-(void)removeComment;
-(void)setFailureReason:(NSString *)arg1 ;
-(void)onCommentDeleted;
-(id)buildStyledStringWithNewline:(char)arg1 width:(float)arg2 maximumUntruncatedNumberOfLines:(int)arg3 truncatedToNumberOfLines:(int)arg4 truncationToken:(id)arg5 configuration:(id)arg6 ;
-(void)setDidReportAsSpam:(char)arg1 ;
-(void)reportInappropriateWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)wasMarkedAsSpam;
-(char)didReportAsSpam;
-(void)reportWithReason:(int)arg1 ;
-(void)setWasMarkedAsSpam:(char)arg1 ;
-(void)setIdempotenceToken:(NSString *)arg1 ;
-(id)stringWithCollapsedEmptyLines:(id)arg1 ;
-(id)initWithText:(id)arg1 post:(id)arg2 user:(id)arg3 ;
-(id)buildStyledStringWithNewline:(char)arg1 width:(float)arg2 numberOfLines:(int)arg3 truncationToken:(id)arg4 configuration:(id)arg5 ;
-(id)styledStringForWidth:(float)arg1 feedItem:(id)arg2 shouldCollapseCaption:(char)arg3 configuration:(id)arg4 ;
-(NSString *)idempotenceToken;
-(void)setPostedState:(int)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(char)canDelete;
-(void)setCreatedAt:(IGDate *)arg1 ;
-(NSString *)failureReason;
-(IGDate *)createdAt;
@end

