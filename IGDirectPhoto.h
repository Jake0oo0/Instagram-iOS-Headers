
#import <Instagram/IGDirectContent.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGDirectMediaContent.h>
#import <Instagram/IGDirectContentMediaUploadable.h>
#import <Instagram/IGDirectContentFirstAppearance.h>
#import <Instagram/IGDirectCommentable.h>

@class IGPhoto, NSURL, NSData, IGUploadModel, IGDirectContentUploadInfo, NSString;

@interface IGDirectPhoto : IGDirectContent <NSCoding, IGDirectMediaContent, IGDirectContentMediaUploadable, IGDirectContentFirstAppearance, IGDirectCommentable> {

	char _isFirstAppearance;
	char _useMainCameraUploadFlow;
	IGDirectContentUploadInfo* _uploadInfo;
	NSString* _uploadComment;
	IGUploadModel* _uploadModel;
	NSData* _imageData;
	IGPhoto* _photo;

}

@property (nonatomic,retain) IGPhoto * photo;                                     //@synthesize photo=_photo - In the implementation block
@property (assign,nonatomic) char useMainCameraUploadFlow;                        //@synthesize useMainCameraUploadFlow=_useMainCameraUploadFlow - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) IGDirectContentUploadInfo * uploadInfo;              //@synthesize uploadInfo=_uploadInfo - In the implementation block
@property (nonatomic,readonly) NSURL * cacheKeyURL; 
@property (nonatomic,retain) NSData * imageData;                                  //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) IGUploadModel * uploadModel;                         //@synthesize uploadModel=_uploadModel - In the implementation block
@property (assign,nonatomic) char isFirstAppearance;                              //@synthesize isFirstAppearance=_isFirstAppearance - In the implementation block
@property (nonatomic,retain) NSString * uploadComment;                            //@synthesize uploadComment=_uploadComment - In the implementation block
-(NSURL *)cacheKeyURL;
-(char)useMainCameraUploadFlow;
-(IGUploadModel *)uploadModel;
-(void)setUploadModel:(IGUploadModel *)arg1 ;
-(IGDirectContentUploadInfo *)uploadInfo;
-(void)setUploadInfo:(IGDirectContentUploadInfo *)arg1 ;
-(id)contentTypeString;
-(NSString *)uploadComment;
-(void)setUploadComment:(NSString *)arg1 ;
-(char)isFirstAppearance;
-(void)setIsFirstAppearance:(char)arg1 ;
-(id)initAsUploadWithComment:(id)arg1 recipient:(id)arg2 useMainCameraUploadFlow:(char)arg3 ;
-(void)setUseMainCameraUploadFlow:(char)arg1 ;
-(char)isUploading;
-(IGPhoto *)photo;
-(NSData *)imageData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(id)digestDescription;
-(void)setPhoto:(IGPhoto *)arg1 ;
@end

