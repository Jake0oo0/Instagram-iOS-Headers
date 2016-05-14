/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <Instagram/IGPanAnimationViewDelegate.h>

@protocol IGQuickCamPhotoEditViewControllerDelegate;
@class NSArray, IGPanAnimationView, IGFilterCollectionController, IGAdjustController, IGSurface, UILabel, IGPostPipelineFilter, IGContext;

@interface IGQuickCamPhotoEditViewController : UIViewController <IGPanAnimationViewDelegate> {

	int _state;
	id<IGQuickCamPhotoEditViewControllerDelegate> _delegate;
	NSArray* _filters;
	int _selectedFilterIndex;
	IGPanAnimationView* _filterableDisplayView;
	IGFilterCollectionController* _filterTrayController;
	IGAdjustController* _adjustController;
	IGSurface* _outSurface;
	UILabel* _filterNameLabel;
	UILabel* _swipeForFilterLabel;
	IGPostPipelineFilter* _postPipelineFilter;
	IGContext* _renderingContext;

}

@property (nonatomic,retain) NSArray * filters;                                                          //@synthesize filters=_filters - In the implementation block
@property (assign,nonatomic) int selectedFilterIndex;                                                    //@synthesize selectedFilterIndex=_selectedFilterIndex - In the implementation block
@property (nonatomic,retain) IGPanAnimationView * filterableDisplayView;                                 //@synthesize filterableDisplayView=_filterableDisplayView - In the implementation block
@property (nonatomic,retain) IGFilterCollectionController * filterTrayController;                        //@synthesize filterTrayController=_filterTrayController - In the implementation block
@property (nonatomic,retain) IGAdjustController * adjustController;                                      //@synthesize adjustController=_adjustController - In the implementation block
@property (nonatomic,retain) IGSurface * outSurface;                                                     //@synthesize outSurface=_outSurface - In the implementation block
@property (nonatomic,retain) UILabel * filterNameLabel;                                                  //@synthesize filterNameLabel=_filterNameLabel - In the implementation block
@property (nonatomic,retain) UILabel * swipeForFilterLabel;                                              //@synthesize swipeForFilterLabel=_swipeForFilterLabel - In the implementation block
@property (nonatomic,retain) IGPostPipelineFilter * postPipelineFilter;                                  //@synthesize postPipelineFilter=_postPipelineFilter - In the implementation block
@property (nonatomic,retain) IGContext * renderingContext;                                               //@synthesize renderingContext=_renderingContext - In the implementation block
@property (assign,nonatomic) int state;                                                                  //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<IGQuickCamPhotoEditViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setupFilters;
-(void)setFilterableDisplayView:(IGPanAnimationView *)arg1 ;
-(IGPanAnimationView *)filterableDisplayView;
-(int)selectedFilterIndex;
-(int)filterIndexForIndexOffset:(int)arg1 ;
-(id)imageFromFilterIndex:(unsigned)arg1 ;
-(void)setPostPipelineFilter:(IGPostPipelineFilter *)arg1 ;
-(void)setRenderingContext:(IGContext *)arg1 ;
-(void)setAdjustController:(IGAdjustController *)arg1 ;
-(void)setFilterTrayController:(IGFilterCollectionController *)arg1 ;
-(IGFilterCollectionController *)filterTrayController;
-(IGPostPipelineFilter *)postPipelineFilter;
-(IGSurface *)outSurface;
-(void)setSelectedFilterIndex:(int)arg1 ;
-(void)setOutSurface:(IGSurface *)arg1 ;
-(IGAdjustController *)adjustController;
-(void)panAnimationView:(id)arg1 willFinishPanAnimationWithDuration:(float)arg2 ;
-(void)panAnimationView:(id)arg1 willCancelPanAnimationWithDuration:(float)arg2 ;
-(void)panAnimationViewDidFinishPanToRight:(id)arg1 ;
-(void)panAnimationViewDidFinishPanToLeft:(id)arg1 ;
-(void)panAnimationView:(id)arg1 didPanToRightBy:(float)arg2 ;
-(void)panAnimationView:(id)arg1 didPanToLeftBy:(float)arg2 ;
-(void)panAnimationViewDidUpdateCenterImage:(id)arg1 ;
-(char)currentImageIsFiltered;
-(void)resetFilter;
-(IGContext *)renderingContext;
-(void)createFilterTrayController;
-(void)setFilterNameLabel:(UILabel *)arg1 ;
-(UILabel *)filterNameLabel;
-(void)setSwipeForFilterLabel:(UILabel *)arg1 ;
-(UILabel *)swipeForFilterLabel;
-(id)getSurfaceFromImage:(id)arg1 withCropRect:(CGRect)arg2 ;
-(void)displayFilterNuxIfShould;
-(id)imageFromFilterIndex:(unsigned)arg1 outSurface:(id)arg2 size:(CGSize)arg3 ;
-(id)filteredImageWithSize:(CGSize)arg1 ;
-(void)easeInFilterNameWithAnimation:(/*^block*/id)arg1 duration:(float)arg2 ;
-(id)filterNameAtIndex:(unsigned)arg1 ;
-(void)updateFilterNameLabelText:(id)arg1 ;
-(void)updateFilterNameLabelAlpha:(id)arg1 translation:(float)arg2 ;
-(void)easeOutFilterNameAnimation;
-(void)setImage:(id)arg1 withCropRect:(CGRect)arg2 ;
-(id)filteredImageForImage:(id)arg1 withCropRect:(CGRect)arg2 ;
-(void)resetImage;
-(void)setDelegate:(id<IGQuickCamPhotoEditViewControllerDelegate>)arg1 ;
-(id<IGQuickCamPhotoEditViewControllerDelegate>)delegate;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
@end

