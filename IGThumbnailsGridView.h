
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGImageViewDelegate.h>

@protocol IGThumbnailsGridViewDelegate;
@class NSArray, UIView, NSIndexSet, NSString;

@interface IGThumbnailsGridView : UIView <IGImageViewDelegate> {

	char _isRestricted;
	char _showPlaceHolder;
	NSArray* _thumbnailViews;
	UIView* _thumbnailOverlayView;
	id<IGThumbnailsGridViewDelegate> _delegate;
	NSArray* _thumbnailURLs;
	NSIndexSet* _thumbnailVideoIndexes;
	unsigned _thumbnailCount;
	unsigned _thumbnailsPerRow;
	unsigned _thumbnailLoadedCount;

}

@property (nonatomic,retain) NSArray * thumbnailViews;                                      //@synthesize thumbnailViews=_thumbnailViews - In the implementation block
@property (nonatomic,copy) NSArray * thumbnailURLs;                                         //@synthesize thumbnailURLs=_thumbnailURLs - In the implementation block
@property (assign,nonatomic) char isRestricted;                                             //@synthesize isRestricted=_isRestricted - In the implementation block
@property (nonatomic,retain) NSIndexSet * thumbnailVideoIndexes;                            //@synthesize thumbnailVideoIndexes=_thumbnailVideoIndexes - In the implementation block
@property (assign,nonatomic) unsigned thumbnailCount;                                       //@synthesize thumbnailCount=_thumbnailCount - In the implementation block
@property (assign,nonatomic) unsigned thumbnailsPerRow;                                     //@synthesize thumbnailsPerRow=_thumbnailsPerRow - In the implementation block
@property (assign,nonatomic) char showPlaceHolder;                                          //@synthesize showPlaceHolder=_showPlaceHolder - In the implementation block
@property (assign,nonatomic) unsigned thumbnailLoadedCount;                                 //@synthesize thumbnailLoadedCount=_thumbnailLoadedCount - In the implementation block
@property (nonatomic,readonly) UIView * thumbnailOverlayView;                               //@synthesize thumbnailOverlayView=_thumbnailOverlayView - In the implementation block
@property (assign,nonatomic,__weak) id<IGThumbnailsGridViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)thumbnailHeightForWidth:(float)arg1 thumbnailsPerRow:(unsigned)arg2 ;
+(float)heightWithConstrainedWidth:(float)arg1 thumbnailCount:(unsigned)arg2 thumbnailsPerRow:(unsigned)arg3 ;
+(CGSize)thumbnailSizeForWidth:(float)arg1 thumbnailsPerRow:(unsigned)arg2 ;
-(NSArray *)thumbnailViews;
-(void)setThumbnailViews:(NSArray *)arg1 ;
-(void)cancelThumbnailLoading;
-(void)onTapThumbnail:(id)arg1 ;
-(void)prepareForThumbnailLoading;
-(unsigned)thumbnailsPerRow;
-(UIView *)thumbnailOverlayView;
-(void)setThumbnailLoadedCount:(unsigned)arg1 ;
-(unsigned)thumbnailLoadedCount;
-(unsigned)thumbnailCount;
-(void)setThumbnailURLs:(id)arg1 isRestricted:(char)arg2 thumbnailVideoIndexes:(id)arg3 maxThumbnails:(int)arg4 thumbnailsPerRow:(unsigned)arg5 showPlaceHolder:(char)arg6 ;
-(NSArray *)thumbnailURLs;
-(void)setThumbnailURLs:(NSArray *)arg1 ;
-(void)setIsRestricted:(char)arg1 ;
-(NSIndexSet *)thumbnailVideoIndexes;
-(void)setThumbnailVideoIndexes:(NSIndexSet *)arg1 ;
-(void)setThumbnailCount:(unsigned)arg1 ;
-(void)setThumbnailsPerRow:(unsigned)arg1 ;
-(char)showPlaceHolder;
-(void)setShowPlaceHolder:(char)arg1 ;
-(void)imageViewLoadedImage:(id)arg1 ;
-(void)setDelegate:(id<IGThumbnailsGridViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGThumbnailsGridViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(char)isRestricted;
@end

