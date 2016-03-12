

@protocol IGEventViewerCellType, IGEventViewerMediaPauseViewDelegate;
@class IGFeedItemMediaCell, IGEventViewerMediaPauseView;

@interface IGEventViewerMediaPauseViewPresenter : NSObject {

	IGFeedItemMediaCell*<IGEventViewerCellType> _mediaCell;
	IGEventViewerMediaPauseView* _pauseView;
	id<IGEventViewerMediaPauseViewDelegate> _pauseViewDelegate;

}

@property (nonatomic,readonly) char isPauseViewPresented; 
@property (assign,nonatomic,__weak) IGFeedItemMediaCell*<IGEventViewerCellType> mediaCell;                  //@synthesize mediaCell=_mediaCell - In the implementation block
@property (assign,nonatomic,__weak) IGEventViewerMediaPauseView * pauseView;                                //@synthesize pauseView=_pauseView - In the implementation block
@property (assign,nonatomic,__weak) id<IGEventViewerMediaPauseViewDelegate> pauseViewDelegate;              //@synthesize pauseViewDelegate=_pauseViewDelegate - In the implementation block
-(IGEventViewerMediaPauseView *)pauseView;
-(char)isPauseViewPresented;
-(id<IGEventViewerMediaPauseViewDelegate>)pauseViewDelegate;
-(void)setPauseView:(IGEventViewerMediaPauseView *)arg1 ;
-(void)setMediaCell:(IGFeedItemMediaCell*<IGEventViewerCellType>)arg1 ;
-(IGFeedItemMediaCell*<IGEventViewerCellType>)mediaCell;
-(void)showInMediaCell:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPauseViewDelegate:(id<IGEventViewerMediaPauseViewDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)dismissAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
@end

