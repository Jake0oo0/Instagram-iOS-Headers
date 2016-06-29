
#import <MapKit/MKAnnotationView.h>

@protocol IGClusterAnnotationViewDelegate;
@class UILabel, UIImageView, IGClusterTileView, UIView, NSMutableArray, UIPinchGestureRecognizer, UIButton, IGButton, UITapGestureRecognizer, IGClusterAnnotationViewLayout;

@interface IGClusterAnnotationView : MKAnnotationView {

	UILabel* _counterLabel;
	UIImageView* _counterBubble;
	IGClusterTileView* _leftTile;
	IGClusterTileView* _rightTile;
	IGClusterTileView* _currentFullScreenTile;
	UIView* _blackOverlay;
	NSMutableArray* _tiles;
	UIPinchGestureRecognizer* _pinchRecognizer;
	UIButton* _infoButton;
	UIButton* _backgroundButton;
	IGButton* _showMoreButton;
	float _currentPinchScale;
	float _lastPinchScale;
	UIView* _viewToBringToFront;
	UITapGestureRecognizer* _doubleTapRecognizer;
	UITapGestureRecognizer* _singleTapRecognizer;
	char _isPinchingIn;
	IGClusterTileView* _mainTile;
	id<IGClusterAnnotationViewDelegate> _delegate;
	IGClusterTileView* _touchedTile;
	IGClusterAnnotationViewLayout* _layout;

}

@property (nonatomic,retain) IGClusterTileView * mainTile;                                     //@synthesize mainTile=_mainTile - In the implementation block
@property (assign,nonatomic,__weak) id<IGClusterAnnotationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGClusterTileView * touchedTile;                                  //@synthesize touchedTile=_touchedTile - In the implementation block
@property (nonatomic,readonly) char isPinchingIn;                                              //@synthesize isPinchingIn=_isPinchingIn - In the implementation block
@property (nonatomic,readonly) IGClusterAnnotationViewLayout * layout;                         //@synthesize layout=_layout - In the implementation block
-(void)setupMainTile;
-(void)onFinishExplosion;
-(void)setGestureRecognizersForTile:(id)arg1 ;
-(void)removeCurrentGestureRecognizers;
-(void)didCloseFullScreen;
-(void)didOpenFullScreen;
-(void)expandOrCollapseTile:(int)arg1 isRestoring:(char)arg2 animated:(char)arg3 afterPinch:(char)arg4 ;
-(void)restoreCurrentTile;
-(void)didFinishImplosionAnimation;
-(void)didFinishRestoreAnimation;
-(void)showMoreButtonTapped;
-(IGClusterTileView *)mainTile;
-(id)rightTile;
-(void)didFinishExplosionAnimation;
-(void)tileTapped:(id)arg1 ;
-(void)infoButtonTapped;
-(id)leftTile;
-(void)setMainTile:(IGClusterTileView *)arg1 ;
-(void)hideSpinnerOnMainTile;
-(void)explode:(char)arg1 ;
-(void)showSpinnerOnMainTile;
-(id)clusterAnnotation;
-(void)setTouchedTile:(IGClusterTileView *)arg1 ;
-(void)flashHighlightOnMainTile:(char)arg1 ;
-(void)collapseCurrentClusterOrImplode;
-(void)implode:(char)arg1 afterPinch:(char)arg2 ;
-(char)isInFullScreen;
-(IGClusterTileView *)touchedTile;
-(void)setTouchedTileWithIndex:(int)arg1 ;
-(char)isPinchingIn;
-(void)expandTouchedTile:(char)arg1 ;
-(void)restoreAfterPinch;
-(void)collapseCurrentTile:(char)arg1 ;
-(void)reloadTiles;
-(void)backgroundTapped;
-(void)handleDoubleTap:(id)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setNeedsDisplay;
-(void)setDelegate:(id<IGClusterAnnotationViewDelegate>)arg1 ;
-(void)dealloc;
-(id<IGClusterAnnotationViewDelegate>)delegate;
-(void)handlePinch:(id)arg1 ;
-(IGClusterAnnotationViewLayout *)layout;
-(void)handleSingleTap:(id)arg1 ;
-(void)setAnnotation:(id)arg1 ;
-(id)infoButton;
-(void)updateUI;
-(id)cluster;
@end

