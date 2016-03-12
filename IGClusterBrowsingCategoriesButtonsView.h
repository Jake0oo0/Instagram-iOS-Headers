
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGClusterBrowsingCategoriesButtonsViewDelegate;
@class UIButton, NSMutableDictionary, NSMutableArray;

@interface IGClusterBrowsingCategoriesButtonsView : UIView {

	id<IGClusterBrowsingCategoriesButtonsViewDelegate> _delegate;
	UIButton* _skipButton;
	NSMutableDictionary* _subcategoriesDict;
	float _currentY;
	NSMutableArray* _positions;
	NSMutableArray* _lastRowButtons;
	int _lastRowWidth;

}

@property (assign,nonatomic,__weak) id<IGClusterBrowsingCategoriesButtonsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton * skipButton;                                                           //@synthesize skipButton=_skipButton - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subcategoriesDict;                                         //@synthesize subcategoriesDict=_subcategoriesDict - In the implementation block
@property (assign,nonatomic) float currentY;                                                                  //@synthesize currentY=_currentY - In the implementation block
@property (nonatomic,retain) NSMutableArray * positions;                                                      //@synthesize positions=_positions - In the implementation block
@property (nonatomic,retain) NSMutableArray * lastRowButtons;                                                 //@synthesize lastRowButtons=_lastRowButtons - In the implementation block
@property (assign,nonatomic) int lastRowWidth;                                                                //@synthesize lastRowWidth=_lastRowWidth - In the implementation block
-(void)configureButtonsWithCategories:(id)arg1 ;
-(float)currentY;
-(NSMutableArray *)lastRowButtons;
-(void)skipButtonTapped;
-(int)lastRowWidth;
-(NSMutableDictionary *)subcategoriesDict;
-(id)buttonWithCategory:(id)arg1 ;
-(NSMutableArray *)positions;
-(id)containerViewWithButtonsInARow:(id)arg1 widthConstraint:(float)arg2 ;
-(void)setLastRowWidth:(int)arg1 ;
-(void)setLastRowButtons:(NSMutableArray *)arg1 ;
-(void)setCurrentY:(float)arg1 ;
-(void)didSelectButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 categories:(id)arg2 ;
-(void)setSubcategoriesDict:(NSMutableDictionary *)arg1 ;
-(void)setPositions:(NSMutableArray *)arg1 ;
-(void)setDelegate:(id<IGClusterBrowsingCategoriesButtonsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGClusterBrowsingCategoriesButtonsViewDelegate>)delegate;
-(void)setSkipButton:(UIButton *)arg1 ;
-(UIButton *)skipButton;
@end

