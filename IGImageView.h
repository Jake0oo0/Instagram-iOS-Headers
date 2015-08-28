/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:33 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIImageView.h>
#import <Instagram/IGMediaRequestDelegate.h>

@protocol IGImageViewDelegate;
@class NSURL, UIImage, NSString;

@interface IGImageView : UIImageView <IGMediaRequestDelegate> {

	char _shouldDecodeAsynchronously;
	char _delegateNeedsImageNow;
	NSURL* _imageURL;
	UIImage* _placeholderImage;
	id<IGImageViewDelegate> _delegate;
	unsigned _dataLengthForDebug;
	int _imagePriority;

}

@property (nonatomic,retain) NSURL * imageURL;                                     //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                           //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic,__weak) id<IGImageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned dataLengthForDebug;                          //@synthesize dataLengthForDebug=_dataLengthForDebug - In the implementation block
@property (assign,nonatomic) int imagePriority;                                    //@synthesize imagePriority=_imagePriority - In the implementation block
@property (assign,nonatomic) char shouldDecodeAsynchronously;                      //@synthesize shouldDecodeAsynchronously=_shouldDecodeAsynchronously - In the implementation block
@property (assign,nonatomic) char delegateNeedsImageNow;                           //@synthesize delegateNeedsImageNow=_delegateNeedsImageNow - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegateNeedsImageNow:(char)arg1 ;
-(void)cancelImageLoad;
-(void)setShouldDecodeAsynchronously:(char)arg1 ;
-(char)delegateNeedsImageNow;
-(void)setImagePriority:(int)arg1 ;
-(void)notifyDelegateOfSuccess;
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(void)mediaRequest:(id)arg1 didFailWithError:(id)arg2 forURL:(id)arg3 ;
-(void)mediaRequest:(id)arg1 didReceiveDownloadBytesRead:(unsigned)arg2 totalBytesRead:(long long)arg3 totalBytesExpectedToRead:(long long)arg4 forURL:(id)arg5 ;
-(unsigned)dataLengthForDebug;
-(char)shouldDecodeAsynchronously;
-(void)setDataLengthForDebug:(unsigned)arg1 ;
-(void)stopListeningForImageLoadNotification;
-(void)setImageWithData:(id)arg1 ;
-(int)imagePriority;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)setDelegate:(id<IGImageViewDelegate>)arg1 ;
-(id<IGImageViewDelegate>)delegate;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

