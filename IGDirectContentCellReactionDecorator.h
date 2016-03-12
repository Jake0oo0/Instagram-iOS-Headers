
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Instagram/IGDirectContentCellDecorator.h>

@protocol IGDirectContentReactable;
@class IGDirectThread, IGDirectContentCell, IGDirectContent, UIView, UIImageView, UIImage, UILabel, UITapGestureRecognizer, NSString;

@interface IGDirectContentCellReactionDecorator : NSObject <UIGestureRecognizerDelegate, IGDirectContentCellDecorator> {

	IGDirectThread* _thread;
	IGDirectContentCell* _cell;
	IGDirectContent*<IGDirectContentReactable> _reactableContent;
	UIView* _likesContainerView;
	UIImageView* _heartImageView;
	UIImage* _heartImage;
	UILabel* _likedThisLabel;
	UIView* _remainderBubbleView;
	UITapGestureRecognizer* _cellDoubleTapRecognizer;
	UILabel* _nuxLabel;
	UIImageView* _emptyHeartImage;

}

@property (nonatomic,retain) IGDirectThread * thread;                                                  //@synthesize thread=_thread - In the implementation block
@property (assign,nonatomic,__weak) IGDirectContentCell * cell;                                        //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) IGDirectContent*<IGDirectContentReactable> reactableContent;              //@synthesize reactableContent=_reactableContent - In the implementation block
@property (nonatomic,retain) UIView * likesContainerView;                                              //@synthesize likesContainerView=_likesContainerView - In the implementation block
@property (nonatomic,retain) UIImageView * heartImageView;                                             //@synthesize heartImageView=_heartImageView - In the implementation block
@property (nonatomic,retain) UIImage * heartImage;                                                     //@synthesize heartImage=_heartImage - In the implementation block
@property (nonatomic,retain) UILabel * likedThisLabel;                                                 //@synthesize likedThisLabel=_likedThisLabel - In the implementation block
@property (nonatomic,retain) UIView * remainderBubbleView;                                             //@synthesize remainderBubbleView=_remainderBubbleView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * cellDoubleTapRecognizer;                         //@synthesize cellDoubleTapRecognizer=_cellDoubleTapRecognizer - In the implementation block
@property (nonatomic,retain) UILabel * nuxLabel;                                                       //@synthesize nuxLabel=_nuxLabel - In the implementation block
@property (nonatomic,retain) UIImageView * emptyHeartImage;                                            //@synthesize emptyHeartImage=_emptyHeartImage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)detachGestureRecognizers;
-(void)removeSubviewsFromCell;
-(void)addSubviewsToCell;
-(void)attachGestureRecognizers;
-(void)receiveDoubleTap;
-(void)setLikesContainerView:(UIView *)arg1 ;
-(UIView *)likesContainerView;
-(IGDirectContent*<IGDirectContentReactable>)reactableContent;
-(void)layoutHeartsAndPicturesWithAnimation:(char)arg1 ;
-(void)flashLikedMessage;
-(UILabel *)likedThisLabel;
-(id)labelForString:(id)arg1 ;
-(void)setLikedThisLabel:(UILabel *)arg1 ;
-(CGPoint)originForFrameOfWidth:(float)arg1 inCell:(id)arg2 ;
-(UIImageView *)heartImageView;
-(void)layoutHeartsAndPicturesWithAnimation;
-(CGRect)viewFrameForProfilePicturesForCell:(id)arg1 ;
-(float)fullWidthForReactionCount:(unsigned)arg1 ;
-(unsigned)maxReactionCountForWidth:(float)arg1 ;
-(id)remainderLabelForCount:(unsigned)arg1 ;
-(UIView *)remainderBubbleView;
-(void)layoutNux;
-(UITapGestureRecognizer *)cellDoubleTapRecognizer;
-(CGSize)scaledHeartSize;
-(id)nuxLabelForReshare;
-(id)nuxLabelForOtherContent;
-(void)setNuxLabel:(UILabel *)arg1 ;
-(UIImageView *)emptyHeartImage;
-(id)nuxEmptyHeartImage;
-(void)setEmptyHeartImage:(UIImageView *)arg1 ;
-(UILabel *)nuxLabel;
-(void)finishLayout;
-(char)alreadyLikedContent;
-(float)cellBottomOffset;
-(void)setReactableContent:(IGDirectContent*<IGDirectContentReactable>)arg1 ;
-(void)setHeartImageView:(UIImageView *)arg1 ;
-(void)setRemainderBubbleView:(UIView *)arg1 ;
-(void)setCellDoubleTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(IGDirectContentCell *)cell;
-(void)setCell:(IGDirectContentCell *)arg1 ;
-(id)initWithCell:(id)arg1 ;
-(void)setThread:(IGDirectThread *)arg1 ;
-(IGDirectThread *)thread;
-(UIImage *)heartImage;
-(void)setHeartImage:(UIImage *)arg1 ;
-(void)setContent:(id)arg1 ;
@end

