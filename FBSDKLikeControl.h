
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIControl.h>
#import <Instagram/FBSDKLiking.h>

@class FBSDKLikeBoxView, FBSDKLikeButton, UIView, UILabel, UIColor, NSString;

@interface FBSDKLikeControl : UIControl <FBSDKLiking> {

	char _isExplicitlyDisabled;
	FBSDKLikeBoxView* _likeBoxView;
	FBSDKLikeButton* _likeButton;
	UIView* _likeButtonContainer;
	UILabel* _socialSentenceLabel;
	UIColor* _foregroundColor;
	unsigned _likeControlAuxiliaryPosition;
	unsigned _likeControlHorizontalAlignment;
	unsigned _likeControlStyle;
	float _preferredMaxLayoutWidth;

}

@property (nonatomic,retain) UIColor * foregroundColor;                            //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (assign,nonatomic) unsigned likeControlAuxiliaryPosition;                //@synthesize likeControlAuxiliaryPosition=_likeControlAuxiliaryPosition - In the implementation block
@property (assign,nonatomic) unsigned likeControlHorizontalAlignment;              //@synthesize likeControlHorizontalAlignment=_likeControlHorizontalAlignment - In the implementation block
@property (assign,nonatomic) unsigned likeControlStyle;                            //@synthesize likeControlStyle=_likeControlStyle - In the implementation block
@property (assign,nonatomic) float preferredMaxLayoutWidth;                        //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
@property (assign,getter=isSoundEnabled,nonatomic) char soundEnabled; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * objectID; 
@property (assign,nonatomic) unsigned objectType; 
+(void)initialize;
-(void)_initializeContent;
-(void)_updateLikeBoxCaretPosition;
-(char)isSoundEnabled;
-(void)setSoundEnabled:(char)arg1 ;
-(FBSDKLikeControlLayout)_layoutWithBounds:(CGRect)arg1 subviewSizingBlock:(/*^block*/id)arg2 ;
-(id)analyticsParameters;
-(void)_ensureLikeActionController;
-(id)_auxiliaryView;
-(unsigned)likeControlAuxiliaryPosition;
-(unsigned)likeControlHorizontalAlignment;
-(unsigned)likeControlStyle;
-(void)_handleLikeButtonTap:(id)arg1 ;
-(void)_likeActionControllerDidDisableNotification:(id)arg1 ;
-(void)_likeActionControllerDidUpdateNotification:(id)arg1 ;
-(void)_likeActionControllerDidUpdateWithAnimated:(char)arg1 ;
-(float)_auxiliaryViewPadding;
-(void)setLikeControlAuxiliaryPosition:(unsigned)arg1 ;
-(void)setLikeControlHorizontalAlignment:(unsigned)arg1 ;
-(void)setLikeControlStyle:(unsigned)arg1 ;
-(void)_updateEnabled;
-(NSString *)objectID;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOpaque:(char)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setPreferredMaxLayoutWidth:(float)arg1 ;
-(float)preferredMaxLayoutWidth;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIColor *)foregroundColor;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(void)setObjectType:(unsigned)arg1 ;
-(unsigned)objectType;
-(void)setObjectID:(NSString *)arg1 ;
@end

