
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGDirectContent.h>
#import <Instagram/IGDirectCommentable.h>
#import <Instagram/IGDirectContentFirstAppearance.h>
#import <Instagram/IGDirectContentMediaUploadable.h>
#import <Instagram/IGDirectContentReactable.h>
#import <Instagram/IGDirectMediaContent.h>
#import <Instagram/IGImageURLProvider.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGDirectMediaViewerProducer.h>

@class IGDirectContentUploadInfo, NSString, IGUploadModel, NSData, NSArray, IGDirectItemIdBasedImageURLProcessor, IGVideo, NSValue, IGVideoComposition, IGPhoto, NSURL;

@interface IGDirectVideo : IGDirectContent <IGDirectCommentable, IGDirectContentFirstAppearance, IGDirectContentMediaUploadable, IGDirectContentReactable, IGDirectMediaContent, IGImageURLProvider, NSCoding, IGDirectMediaViewerProducer> {

	char _isFirstAppearance;
	char _reactionsNeedsReRender;
	char _useMainCameraUploadFlow;
	IGDirectContentUploadInfo* _uploadInfo;
	NSString* _uploadComment;
	IGUploadModel* _uploadModel;
	NSData* _imageData;
	NSArray* _reactions;
	unsigned _likeCount;
	unsigned _lastReactionType;
	IGDirectItemIdBasedImageURLProcessor* _previewImageURLProcessor;
	IGVideo* _video;
	NSData* _videoData;
	NSData* _renderedVideoData;
	NSValue* _renderedVideoSizeValue;
	IGVideoComposition* _videoComposition;
	NSString* _videoResult;
	int _numberOfFailedUploads;
	IGPhoto* _photo;
	CGSize _aspectRatio;
	CGRect _cropRect;

}

@property (nonatomic,retain) IGVideo * video;                                                                //@synthesize video=_video - In the implementation block
@property (nonatomic,retain) IGPhoto * photo;                                                                //@synthesize photo=_photo - In the implementation block
@property (assign,nonatomic) char useMainCameraUploadFlow;                                                   //@synthesize useMainCameraUploadFlow=_useMainCameraUploadFlow - In the implementation block
@property (nonatomic,retain) NSData * videoData;                                                             //@synthesize videoData=_videoData - In the implementation block
@property (nonatomic,retain) NSData * renderedVideoData;                                                     //@synthesize renderedVideoData=_renderedVideoData - In the implementation block
@property (nonatomic,retain) NSValue * renderedVideoSizeValue;                                               //@synthesize renderedVideoSizeValue=_renderedVideoSizeValue - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                                                                //@synthesize cropRect=_cropRect - In the implementation block
@property (nonatomic,retain) IGVideoComposition * videoComposition;                                          //@synthesize videoComposition=_videoComposition - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoResult;                                                  //@synthesize videoResult=_videoResult - In the implementation block
@property (assign,nonatomic) int numberOfFailedUploads;                                                      //@synthesize numberOfFailedUploads=_numberOfFailedUploads - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * uploadComment;                                                       //@synthesize uploadComment=_uploadComment - In the implementation block
@property (assign,nonatomic) char isFirstAppearance;                                                         //@synthesize isFirstAppearance=_isFirstAppearance - In the implementation block
@property (nonatomic,copy) IGDirectContentUploadInfo * uploadInfo;                                           //@synthesize uploadInfo=_uploadInfo - In the implementation block
@property (nonatomic,readonly) char canConvertToFullMessageByAddingItemID; 
@property (nonatomic,readonly) NSURL * cacheKeyURL; 
@property (nonatomic,retain) NSData * imageData;                                                             //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) IGUploadModel * uploadModel;                                                    //@synthesize uploadModel=_uploadModel - In the implementation block
@property (assign,nonatomic) CGSize aspectRatio;                                                             //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (nonatomic,retain) NSArray * reactions;                                                            //@synthesize reactions=_reactions - In the implementation block
@property (assign,nonatomic) unsigned likeCount;                                                             //@synthesize likeCount=_likeCount - In the implementation block
@property (assign,nonatomic) char reactionsNeedsReRender;                                                    //@synthesize reactionsNeedsReRender=_reactionsNeedsReRender - In the implementation block
@property (assign,nonatomic) unsigned lastReactionType;                                                      //@synthesize lastReactionType=_lastReactionType - In the implementation block
@property (nonatomic,readonly) IGDirectItemIdBasedImageURLProcessor * previewImageURLProcessor;              //@synthesize previewImageURLProcessor=_previewImageURLProcessor - In the implementation block
-(id)imageURLForWidth:(float)arg1 ;
-(id)imageURLForWidth:(float)arg1 option:(int)arg2 ;
-(id)imageURLForWidth:(float)arg1 option:(int)arg2 scale:(float)arg3 ;
-(id)imageURLOfAtLeastWidth:(float)arg1 scale:(float)arg2 ;
-(id)thumbnailURLForAspectFillSize:(CGSize)arg1 option:(int)arg2 ;
-(IGDirectContentUploadInfo *)uploadInfo;
-(NSURL *)cacheKeyURL;
-(char)useMainCameraUploadFlow;
-(IGUploadModel *)uploadModel;
-(void)setUploadModel:(IGUploadModel *)arg1 ;
-(NSString *)uploadComment;
-(NSArray *)reactions;
-(void)setReactions:(NSArray *)arg1 ;
-(void)setReactionsNeedsReRender:(char)arg1 ;
-(void)setLastReactionType:(unsigned)arg1 ;
-(id)contentTypeString;
-(void)setUploadInfo:(IGDirectContentUploadInfo *)arg1 ;
-(void)setUploadComment:(NSString *)arg1 ;
-(id)copyOfContentWithReactionFilter:(id)arg1 ;
-(char)reactionsNeedsReRender;
-(unsigned)lastReactionType;
-(char)canConvertToFullMessageByAddingItemID;
-(id)reactionItemKey;
-(NSData *)renderedVideoData;
-(NSValue *)renderedVideoSizeValue;
-(int)numberOfFailedUploads;
-(void)setRenderedVideoData:(NSData *)arg1 ;
-(void)setRenderedVideoSizeValue:(NSValue *)arg1 ;
-(void)setUseMainCameraUploadFlow:(char)arg1 ;
-(void)setNumberOfFailedUploads:(int)arg1 ;
-(IGDirectItemIdBasedImageURLProcessor *)previewImageURLProcessor;
-(char)isFirstAppearance;
-(void)setIsFirstAppearance:(char)arg1 ;
-(id)mediaViewerWithPreviewImage:(id)arg1 ;
-(id)initAsUploadWithComment:(id)arg1 recipient:(id)arg2 aspectRatio:(CGSize)arg3 useMainCameraUploadFlow:(char)arg4 ;
-(IGVideoComposition *)videoComposition;
-(void)setVideoComposition:(IGVideoComposition *)arg1 ;
-(char)isUploading;
-(unsigned)likeCount;
-(IGPhoto *)photo;
-(NSData *)imageData;
-(CGSize)aspectRatio;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(void)setVideoData:(NSData *)arg1 ;
-(NSData *)videoData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(id)digestDescription;
-(void)setLikeCount:(unsigned)arg1 ;
-(void)setPhoto:(IGPhoto *)arg1 ;
-(IGVideo *)video;
-(void)setVideo:(IGVideo *)arg1 ;
-(NSString *)videoResult;
-(id)preloadedImage;
-(void)setAspectRatio:(CGSize)arg1 ;
@end

