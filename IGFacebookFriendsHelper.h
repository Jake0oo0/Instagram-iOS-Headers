
#import <Instagram/IGFindFriendsHelperProtocol.h>

@protocol IGFindFriendsHelperDelegate;
@class NSString;

@interface IGFacebookFriendsHelper : NSObject <IGFindFriendsHelperProtocol> {

	id<IGFindFriendsHelperDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGFindFriendsHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)onFacebookAuthSuccess;
-(void)authorizeAndFetchUsers;
-(void)updateUserTotalWithCount:(int)arg1 ;
-(void)onFacebookAuthFailure;
-(void)setDelegate:(id<IGFindFriendsHelperDelegate>)arg1 ;
-(void)dealloc;
-(id<IGFindFriendsHelperDelegate>)delegate;
@end

