

@class IGHeartView, UICollectionView;

@interface IGFeedHeartAnimator : NSObject {

	char _usesLegacyAnimation;
	IGHeartView* _heartImageView;
	id _heartLikeFeedItem;
	UICollectionView* _collectionView;

}

@property (nonatomic,readonly) IGHeartView * heartImageView;                   //@synthesize heartImageView=_heartImageView - In the implementation block
@property (nonatomic,retain) id heartLikeFeedItem;                             //@synthesize heartLikeFeedItem=_heartLikeFeedItem - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) char usesLegacyAnimation;                       //@synthesize usesLegacyAnimation=_usesLegacyAnimation - In the implementation block
-(IGHeartView *)heartImageView;
-(id)initWithCollectionView:(id)arg1 usesLegacyAnimation:(char)arg2 ;
-(void)animateHeartLikeForCell:(id)arg1 ;
-(char)usesLegacyAnimation;
-(void)setHeartLikeFeedItem:(id)arg1 ;
-(void)animateHeartLikeForCell:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)heartLikeFeedItem;
-(void)animateHeartLikeForItem:(id)arg1 atIndex:(int)arg2 ;
-(void)updateHeartImageViewLocationToSection:(unsigned)arg1 ;
-(UICollectionView *)collectionView;
@end

