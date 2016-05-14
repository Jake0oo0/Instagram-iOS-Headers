/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:48 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGLegacyCollectionViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Instagram/IGCaptionCellDelegate.h>
#import <Instagram/IGShareListManagerDelegate.h>
#import <Instagram/MFMailComposeViewControllerDelegate.h>

@class IGFeedItem, IGCaptionCell, IGShareListManager, NSString;

@interface IGShareLaterViewController : IGLegacyCollectionViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGCaptionCellDelegate, IGShareListManagerDelegate, MFMailComposeViewControllerDelegate> {

	IGFeedItem* _feedItem;
	IGCaptionCell* _captionCell;
	IGShareListManager* _shareListManager;
	NSString* _currentCaptionText;

}

@property (nonatomic,retain) IGCaptionCell * captionCell;                        //@synthesize captionCell=_captionCell - In the implementation block
@property (nonatomic,retain) IGShareListManager * shareListManager;              //@synthesize shareListManager=_shareListManager - In the implementation block
@property (nonatomic,copy) NSString * currentCaptionText;                        //@synthesize currentCaptionText=_currentCaptionText - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                              //@synthesize feedItem=_feedItem - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(IGFeedItem *)feedItem;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGShareListManager *)shareListManager;
-(void)setShareListManager:(IGShareListManager *)arg1 ;
-(id)initWithFeedItem:(id)arg1 ;
-(void)fetchPermalinkForFeedItem:(id)arg1 withSuccessHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(char)captionCellMediaOverlayViewTapEnabled;
-(void)captionCellMediaOverlayViewTapped;
-(void)captionTextViewDidChange:(id)arg1 ;
-(void)captionTextViewWillBeginEditing:(id)arg1 ;
-(void)captionTextViewDidBeginEditing:(id)arg1 ;
-(void)captionTextViewDidEndEditing:(id)arg1 text:(id)arg2 ;
-(char)captionTextView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)shareListNeedsFullReload;
-(void)shareListNeedsReloadForServiceAtIndex:(int)arg1 ;
-(id)viewControllerForShareConfiguration;
-(IGCaptionCell *)captionCell;
-(void)updateShareButton;
-(void)setCaptionCell:(IGCaptionCell *)arg1 ;
-(void)setCurrentCaptionText:(NSString *)arg1 ;
-(NSString *)currentCaptionText;
-(id)collectionView:(id)arg1 captionCellAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 shareServiceCellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 shareAdditionalCellForItemAtIndexPath:(id)arg2 ;
-(void)didSelectShareCellAtIndexPath:(id)arg1 ;
-(void)didSelectAdditionalShareCellAtIndex:(id)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)share;
-(id)caption;
@end

