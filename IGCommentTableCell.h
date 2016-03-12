
#import <UIKit/UITableViewCell.h>
#import <Instagram/IGCellSwipeActionManagerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGCommentActionViewDelegate.h>
#import <Instagram/IGCommentContentViewDelegate.h>

@protocol IGCommentTableCellDelegate;
@class IGCommentActionView, UIView, IGCommentModel, IGCommentContentView, UINavigationController, UIPanGestureRecognizer, UITapGestureRecognizer, IGCellSwipeActionManager, UIButton, CALayer, NSString;

@interface IGCommentTableCell : UITableViewCell <IGCellSwipeActionManagerDelegate, UIGestureRecognizerDelegate, IGCommentActionViewDelegate, IGCommentContentViewDelegate> {

	IGCommentActionView* _actionsView;
	float _beginningX;
	char _showActions;
	int _maxActionBarWidth;
	UIView* _separatorView;
	UIView* _containerView;
	char _enableSwipeToDelete;
	IGCommentModel* _comment;
	id<IGCommentTableCellDelegate> _delegate;
	IGCommentContentView* _commentView;
	UINavigationController* _navigationController;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	IGCellSwipeActionManager* _cellSwipeActionManager;
	UIButton* _replyButton;
	UIButton* _deleteButton;
	UIButton* _reportButton;
	CALayer* _reportButtonSeparatorLayer;

}

@property (nonatomic,retain) IGCommentModel * comment;                                          //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic,__weak) id<IGCommentTableCellDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGCommentContentView * commentView;                                //@synthesize commentView=_commentView - In the implementation block
@property (nonatomic,readonly) char isShowingEditActions; 
@property (assign,nonatomic) char enableSwipeToDelete;                                          //@synthesize enableSwipeToDelete=_enableSwipeToDelete - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                     //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                     //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) IGCellSwipeActionManager * cellSwipeActionManager;                 //@synthesize cellSwipeActionManager=_cellSwipeActionManager - In the implementation block
@property (nonatomic,retain) UIButton * replyButton;                                            //@synthesize replyButton=_replyButton - In the implementation block
@property (nonatomic,retain) UIButton * deleteButton;                                           //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) UIButton * reportButton;                                           //@synthesize reportButton=_reportButton - In the implementation block
@property (nonatomic,retain) CALayer * reportButtonSeparatorLayer;                              //@synthesize reportButtonSeparatorLayer=_reportButtonSeparatorLayer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGCommentContentView *)commentView;
-(void)showActions:(char)arg1 animated:(char)arg2 ;
-(UIButton *)reportButton;
-(UIButton *)replyButton;
-(void)setCellSwipeActionManager:(IGCellSwipeActionManager *)arg1 ;
-(void)showActions:(char)arg1 duration:(float)arg2 ;
-(IGCellSwipeActionManager *)cellSwipeActionManager;
-(void)toggleActions;
-(char)isShowingEditActions;
-(void)cellSwipeActionManagerDidStartPanGestureRecognition:(id)arg1 ;
-(void)cellSwipeActionManagerDidShowActions:(id)arg1 ;
-(void)cellSwipeActionManagerDidHideActions:(id)arg1 ;
-(void)cellSwipeActionManager:(id)arg1 willCompleteSwipeActionForButton:(id)arg2 ;
-(void)cellSwipeActionManager:(id)arg1 didCompleteSwipeActionForButton:(id)arg2 ;
-(char)cellSwipeActionManagerShouldShowActions:(id)arg1 ;
-(void)peekActions;
-(CALayer *)reportButtonSeparatorLayer;
-(void)contentView:(id)arg1 didTapText:(id)arg2 withURL:(id)arg3 ;
-(void)contentView:(id)arg1 didTapUser:(id)arg2 ;
-(void)contentView:(id)arg1 didLongTapUser:(id)arg2 ;
-(void)commentActionReplyButtonTapped;
-(void)commentActionDeleteButtonTapped;
-(void)setReplyButton:(UIButton *)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 width:(float)arg3 ;
-(void)setupLegacyGestureRecognizers;
-(void)removeLegacyGestureRecognizers;
-(char)enableSwipeToDelete;
-(id)cellActionButtonsForComment:(id)arg1 ;
-(void)setupLegacyPanGestureRecognizer;
-(void)setupDoubleTapToToggleActionsGestureRecognizer;
-(void)removeLegacyPanGestureRecognizer;
-(void)removeDoubleTapToToggleActionsGestureRecognizer;
-(void)cellPanned:(id)arg1 ;
-(void)showActions:(char)arg1 velocity:(float)arg2 ;
-(void)commentActionReportButtonTapped;
-(void)setEnableSwipeToDelete:(char)arg1 ;
-(void)setCommentView:(IGCommentContentView *)arg1 ;
-(void)setReportButton:(UIButton *)arg1 ;
-(void)setReportButtonSeparatorLayer:(CALayer *)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(void)setComment:(IGCommentModel *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<IGCommentTableCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<IGCommentTableCellDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)prepareForReuse;
-(UINavigationController *)navigationController;
-(char)isAccessibilityElement;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(UIButton *)deleteButton;
-(void)setDeleteButton:(UIButton *)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(IGCommentModel *)comment;
@end

