

@protocol FBSDKLikeDialogDelegate;
@class NSString, UIViewController;

@interface FBSDKLikeDialog : NSObject {

	char _shouldFailOnDataError;
	id<FBSDKLikeDialogDelegate> _delegate;
	NSString* _objectID;
	unsigned _objectType;
	UIViewController* _fromViewController;

}

@property (assign,nonatomic,__weak) id<FBSDKLikeDialogDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * objectID;                                         //@synthesize objectID=_objectID - In the implementation block
@property (assign,nonatomic) unsigned objectType;                                       //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) char shouldFailOnDataError;                                //@synthesize shouldFailOnDataError=_shouldFailOnDataError - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * fromViewController;              //@synthesize fromViewController=_fromViewController - In the implementation block
+(id)likeWithObjectID:(id)arg1 objectType:(unsigned)arg2 delegate:(id)arg3 ;
+(void)initialize;
-(char)like;
-(void)_handleCompletionWithDialogResults:(id)arg1 error:(id)arg2 ;
-(char)canLike;
-(char)_canLikeNative;
-(char)shouldFailOnDataError;
-(void)setShouldFailOnDataError:(char)arg1 ;
-(char)validateWithError:(id*)arg1 ;
-(void)setFromViewController:(UIViewController *)arg1 ;
-(NSString *)objectID;
-(void)setDelegate:(id<FBSDKLikeDialogDelegate>)arg1 ;
-(id<FBSDKLikeDialogDelegate>)delegate;
-(UIViewController *)fromViewController;
-(void)setObjectType:(unsigned)arg1 ;
-(unsigned)objectType;
-(void)setObjectID:(NSString *)arg1 ;
@end

