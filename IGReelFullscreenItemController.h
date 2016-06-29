
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListDisplayDelegate.h>
#import <Instagram/IGAlbumFullscreenViewControllerDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGReelFullscreenItemControllerDelegate;
@class IGReelSubscriptionTrayItemModel, IGAlbumFullscreenViewController, NSString;

@interface IGReelFullscreenItemController : IGListItemController <IGListDisplayDelegate, IGAlbumFullscreenViewControllerDelegate, IGListItemType> {

	id<IGReelFullscreenItemControllerDelegate> _delegate;
	IGReelSubscriptionTrayItemModel* _model;
	IGAlbumFullscreenViewController* _fullscreenViewController;

}

@property (nonatomic,retain) IGReelSubscriptionTrayItemModel * model;                                 //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) IGAlbumFullscreenViewController * fullscreenViewController;              //@synthesize fullscreenViewController=_fullscreenViewController - In the implementation block
@property (assign,nonatomic,__weak) id<IGReelFullscreenItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)displayDelegate;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 ;
-(id)supplementaryViewSource;
-(id)workingRangeDelegate;
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(void)listAdapter:(id)arg1 didScrollListItemController:(id)arg2 ;
-(void)setInteractionEnabled:(char)arg1 ;
-(IGAlbumFullscreenViewController *)fullscreenViewController;
-(void)albumFullscreenViewControllerShouldDismiss:(id)arg1 dismissReason:(unsigned)arg2 ;
-(void)setFullscreenViewController:(IGAlbumFullscreenViewController *)arg1 ;
-(void)play;
-(void)setDelegate:(id<IGReelFullscreenItemControllerDelegate>)arg1 ;
-(id<IGReelFullscreenItemControllerDelegate>)delegate;
-(IGReelSubscriptionTrayItemModel *)model;
-(unsigned)numberOfItems;
-(void)setModel:(IGReelSubscriptionTrayItemModel *)arg1 ;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(void)pause;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

