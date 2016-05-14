/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:49 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGActionSheetDelegate.h>

@protocol IGMainFeedUploadCellContentViewDelegate;
@class IGUploadModel, NSDate, UIButton, UILabel, UIImageView, UIProgressView, NSMutableArray, NSString;

@interface IGMainFeedUploadCellContentView : UIView <IGActionSheetDelegate> {

	char _hasRenderedImage;
	IGUploadModel* _activePost;
	id<IGMainFeedUploadCellContentViewDelegate> _delegate;
	NSDate* _uploadStart;
	UIButton* _retryButton;
	UIButton* _removeButton;
	UILabel* _statusLabel;
	UIImageView* _imageView;
	UIImageView* _imageOverlayView;
	UIProgressView* _progressView;
	unsigned _uploadPhase;
	NSMutableArray* _uploadPhaseProgress;

}

@property (nonatomic,retain) NSDate * uploadStart;                                                     //@synthesize uploadStart=_uploadStart - In the implementation block
@property (nonatomic,retain) UIButton * retryButton;                                                   //@synthesize retryButton=_retryButton - In the implementation block
@property (nonatomic,retain) UIButton * removeButton;                                                  //@synthesize removeButton=_removeButton - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                                                    //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * imageOverlayView;                                           //@synthesize imageOverlayView=_imageOverlayView - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                                            //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic) unsigned uploadPhase;                                                     //@synthesize uploadPhase=_uploadPhase - In the implementation block
@property (nonatomic,retain) NSMutableArray * uploadPhaseProgress;                                     //@synthesize uploadPhaseProgress=_uploadPhaseProgress - In the implementation block
@property (nonatomic,retain) IGUploadModel * activePost;                                               //@synthesize activePost=_activePost - In the implementation block
@property (assign,nonatomic,__weak) id<IGMainFeedUploadCellContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(void)setActivePost:(IGUploadModel *)arg1 ;
-(IGUploadModel *)activePost;
-(void)removeKeyValueObservationFromActivePost;
-(void)removeUpload:(id)arg1 ;
-(void)retryUpload:(id)arg1 ;
-(void)onMediaUploadCompleted:(id)arg1 ;
-(void)addKeyValueObservationToActivePost;
-(void)updateUploadPhase:(unsigned)arg1 withProgress:(float)arg2 ;
-(NSDate *)uploadStart;
-(void)setUploadStart:(NSDate *)arg1 ;
-(UIButton *)retryButton;
-(void)setRetryButton:(UIButton *)arg1 ;
-(void)setRemoveButton:(UIButton *)arg1 ;
-(UIImageView *)imageOverlayView;
-(void)setImageOverlayView:(UIImageView *)arg1 ;
-(unsigned)uploadPhase;
-(void)setUploadPhase:(unsigned)arg1 ;
-(NSMutableArray *)uploadPhaseProgress;
-(void)setUploadPhaseProgress:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGMainFeedUploadCellContentViewDelegate>)arg1 ;
-(void)dealloc;
-(id<IGMainFeedUploadCellContentViewDelegate>)delegate;
-(UIImageView *)imageView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(UIProgressView *)progressView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(void)updateContent;
-(UIButton *)removeButton;
-(void)updateProgressView;
@end

