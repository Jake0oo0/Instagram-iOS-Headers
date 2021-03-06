
#import <Instagram/FBSDKLikeDialogDelegate.h>
#import <libobjc.A.dylib/NSDiscardableContent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class FBSDKAccessToken, NSMapTable, NSString, NSDate;

@interface FBSDKLikeActionController : NSObject <FBSDKLikeDialogDelegate, NSDiscardableContent, NSSecureCoding> {

	FBSDKAccessToken* _accessToken;
	unsigned _contentAccessCount;
	char _contentDiscarded;
	NSMapTable* _dialogToAnalyticsParametersMap;
	NSMapTable* _dialogToUpdateBlockMap;
	NSString* _likeCountStringWithLike;
	NSString* _likeCountStringWithoutLike;
	char _objectIsLikedIsPending;
	char _objectIsLikedOnServer;
	char _objectIsPage;
	unsigned _refreshState;
	NSString* _socialSentenceWithLike;
	NSString* _socialSentenceWithoutLike;
	NSString* _unlikeToken;
	NSString* _verifiedObjectID;
	char _objectIsLiked;
	NSDate* _lastUpdateTime;
	NSString* _objectID;
	unsigned _objectType;

}

@property (nonatomic,copy,readonly) NSDate * lastUpdateTime;                 //@synthesize lastUpdateTime=_lastUpdateTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * likeCountString; 
@property (nonatomic,copy,readonly) NSString * objectID;                     //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) unsigned objectType;                          //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,readonly) char objectIsLiked;                           //@synthesize objectIsLiked=_objectIsLiked - In the implementation block
@property (nonatomic,copy,readonly) NSString * socialSentence; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_cacheFileURL;
+(void)_accessTokenDidChangeNotification:(id)arg1 ;
+(id)likeActionControllerForObjectID:(id)arg1 objectType:(unsigned)arg2 ;
+(char)supportsSecureCoding;
+(void)initialize;
+(void)_applicationWillResignActiveNotification:(id)arg1 ;
+(char)isDisabled;
-(NSString *)likeCountString;
-(NSString *)socialSentence;
-(id)initWithObjectID:(id)arg1 objectType:(unsigned)arg2 accessToken:(id)arg3 ;
-(void)_refreshWithMode:(unsigned)arg1 ;
-(void)_setExecuting:(char)arg1 forKey:(id)arg2 ;
-(char)_useOGLike;
-(void)_updateWithObjectIsLiked:(int)arg1 likeCountStringWithLike:(id)arg2 likeCountStringWithoutLike:(id)arg3 socialSentenceWithLike:(id)arg4 socialSentenceWithoutLike:(id)arg5 unlikeToken:(id)arg6 soundEnabled:(char)arg7 animated:(char)arg8 deferred:(char)arg9 ;
-(void)_publishLikeWithUpdateBlock:(/*^block*/id)arg1 analyticsParameters:(id)arg2 fromViewController:(id)arg3 ;
-(void)_presentLikeDialogWithUpdateBlock:(/*^block*/id)arg1 analyticsParameters:(id)arg2 fromViewController:(id)arg3 ;
-(void)_publishUnlikeWithUpdateBlock:(/*^block*/id)arg1 analyticsParameters:(id)arg2 fromViewController:(id)arg3 ;
-(char)objectIsLiked;
-(void)_publishIfNeededWithUpdateBlock:(/*^block*/id)arg1 analyticsParameters:(id)arg2 fromViewController:(id)arg3 ;
-(void)_ensureVerifiedObjectID:(/*^block*/id)arg1 ;
-(void)toggleLikeWithSoundEnabled:(char)arg1 analyticsParameters:(id)arg2 fromViewController:(id)arg3 ;
-(void)likeDialog:(id)arg1 didFailWithError:(id)arg2 ;
-(void)likeDialog:(id)arg1 didCompleteWithResults:(id)arg2 ;
-(NSString *)objectID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(char)isContentDiscarded;
-(void)_configure;
-(NSDate *)lastUpdateTime;
-(unsigned)objectType;
-(void)refresh;
@end

