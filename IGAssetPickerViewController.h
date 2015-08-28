/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:04 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Instagram/IGScrollViewController.h>

@protocol IGAssetPickerViewControllerDelegate, IGScrollViewDelegate;
@class IGAssetGroup, IGLibraryAsset, NSURL, IGCameraRollNavigationItem, UICollectionView, UICollectionViewFlowLayout, NSArray, NSString, UIScrollView;

@interface IGAssetPickerViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGScrollViewController> {

	id<IGAssetPickerViewControllerDelegate> _pickerDelegate;
	id<IGScrollViewDelegate> _scrollDelegate;
	IGAssetGroup* _assetGroup;
	IGLibraryAsset* _chosenAsset;
	NSURL* _defaultAssetURL;
	int _assetType;
	IGCameraRollNavigationItem* _titleBar;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _layout;
	NSArray* _assetsList;

}

@property (nonatomic,readonly) float topContentOffset; 
@property (nonatomic,readonly) CGRect frameForSelectedThumbnail; 
@property (assign,nonatomic,__weak) id<IGAssetPickerViewControllerDelegate> pickerDelegate;              //@synthesize pickerDelegate=_pickerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGScrollViewDelegate> scrollDelegate;                             //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
@property (nonatomic,retain) IGAssetGroup * assetGroup;                                                  //@synthesize assetGroup=_assetGroup - In the implementation block
@property (nonatomic,retain) IGLibraryAsset * chosenAsset;                                               //@synthesize chosenAsset=_chosenAsset - In the implementation block
@property (nonatomic,retain) NSURL * defaultAssetURL;                                                    //@synthesize defaultAssetURL=_defaultAssetURL - In the implementation block
@property (assign,nonatomic) int assetType;                                                              //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,retain) IGCameraRollNavigationItem * titleBar;                                      //@synthesize titleBar=_titleBar - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                          //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * layout;                                        //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) NSArray * assetsList;                                                       //@synthesize assetsList=_assetsList - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
-(id<IGScrollViewDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id<IGScrollViewDelegate>)arg1 ;
-(IGCameraRollNavigationItem *)titleBar;
-(IGAssetGroup *)assetGroup;
-(void)updateAssetsList;
-(NSArray *)assetsList;
-(NSURL *)defaultAssetURL;
-(void)selectAsset:(id)arg1 onTap:(char)arg2 ;
-(void)onAssetsListChanged;
-(void)onBackButtonTapped;
-(IGLibraryAsset *)chosenAsset;
-(id)indexPathForAsset:(id)arg1 ;
-(void)setAssetsList:(NSArray *)arg1 ;
-(void)setChosenAsset:(IGLibraryAsset *)arg1 ;
-(void)setAssetGroup:(IGAssetGroup *)arg1 ;
-(CGRect)frameForSelectedThumbnail;
-(void)setDefaultAssetURL:(NSURL *)arg1 ;
-(void)setTitleBar:(IGCameraRollNavigationItem *)arg1 ;
-(id)assetAtIndexPath:(id)arg1 ;
-(id<IGAssetPickerViewControllerDelegate>)pickerDelegate;
-(void)setPickerDelegate:(id<IGAssetPickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3 ;
-(UICollectionViewFlowLayout *)layout;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(UIScrollView *)scrollView;
-(void)setLayout:(UICollectionViewFlowLayout *)arg1 ;
-(id)initWithAssetType:(int)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setAssetType:(int)arg1 ;
-(float)topContentOffset;
-(int)assetType;
@end

