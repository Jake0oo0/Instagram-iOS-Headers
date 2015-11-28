
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGThumbnailsGridViewDelegate;
@class NSArray, UIView, NSIndexSet;

@interface IGThumbnailsGridView : UIView {

	char _isRestricted;
	NSArray* _thumbnailViews;
	UIView* _thumbnailOverlayView;
	id<IGThumbnailsGridViewDelegate> _delegate;
	NSArray* _thumbnailURLs;
	NSIndexSet* _thumbnailVideoIndexes;
	unsigned _thumbnailCount;

}

@property (nonatomic,retain) NSArray * thumbnailViews;                                      //@synthesize thumbnailViews=_thumbnailViews - In the implementation block
@property (nonatomic,readonly) UIView * thumbnailOverlayView;                               //@synthesize thumbnailOverlayView=_thumbnailOverlayView - In the implementation block
@property (assign,nonatomic,__weak) id<IGThumbnailsGridViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * thumbnailURLs;                                         //@synthesize thumbnailURLs=_thumbnailURLs - In the implementation block
@property (assign,nonatomic) char isRestricted;                                             //@synthesize isRestricted=_isRestricted - In the implementation block
@property (nonatomic,retain) NSIndexSet * thumbnailVideoIndexes;                            //@synthesize thumbnailVideoIndexes=_thumbnailVideoIndexes - In the implementation block
@property (assign,nonatomic) unsigned thumbnailCount;                                       //@synthesize thumbnailCount=_thumbnailCount - In the implementation block
+(float)heightWithConstrainedWidth:(float)arg1 thumbnailCount:(unsigned)arg2 ;
+(float)thumbnailHeightForWidth:(float)arg1 ;
+(CGSize)thumbnailSizeForWidth:(float)arg1 ;
-(NSArray *)thumbnailViews;
-(void)setThumbnailViews:(NSArray *)arg1 ;
-(NSArray *)thumbnailURLs;
-(NSIndexSet *)thumbnailVideoIndexes;
-(void)setThumbnailURLs:(id)arg1 isRestricted:(char)arg2 thumbnailVideoIndexes:(id)arg3 maxThumbnails:(int)arg4 ;
-(UIView *)thumbnailOverlayView;
-(void)setThumbnailURLs:(NSArray *)arg1 ;
-(void)setThumbnailVideoIndexes:(NSIndexSet *)arg1 ;
-(void)onTapThumbnail:(id)arg1 ;
-(void)setIsRestricted:(char)arg1 ;
-(unsigned)thumbnailCount;
-(void)setThumbnailCount:(unsigned)arg1 ;
-(void)setDelegate:(id<IGThumbnailsGridViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGThumbnailsGridViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(char)isRestricted;
@end
