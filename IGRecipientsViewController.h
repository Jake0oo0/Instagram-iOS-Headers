/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:37 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Instagram/IGDynamicCollectionViewDatasource.h>
#import <Instagram/IGDynamicCollectionViewDelegate.h>

@class IGDirectedPost, IGDynamicCollectionView, UIView, NSMapTable, NSArray, NSString;

@interface IGRecipientsViewController : UIViewController <IGDynamicCollectionViewDatasource, IGDynamicCollectionViewDelegate> {

	IGDirectedPost* _post;
	IGDynamicCollectionView* _collectionView;
	UIView* _lineView;
	NSMapTable* _recipientToViewMap;
	NSArray* _observedRecipients;
	UIView* _toViewContainer;

}

@property (nonatomic,retain) IGDirectedPost * post;                                 //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) IGDynamicCollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                     //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) NSMapTable * recipientToViewMap;                       //@synthesize recipientToViewMap=_recipientToViewMap - In the implementation block
@property (nonatomic,retain) NSArray * observedRecipients;                          //@synthesize observedRecipients=_observedRecipients - In the implementation block
@property (nonatomic,retain) UIView * toViewContainer;                              //@synthesize toViewContainer=_toViewContainer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onPostUpdated:(id)arg1 ;
-(void)setLineView:(UIView *)arg1 ;
-(UIView *)lineView;
-(int)numberOfViewsForCollectionView:(id)arg1 ;
-(id)viewForCollectionView:(id)arg1 atIndex:(int)arg2 ;
-(void)collectionView:(id)arg1 didTapItemAtIndex:(int)arg2 ;
-(NSMapTable *)recipientToViewMap;
-(void)setSeenStateForView:(id)arg1 withRecipient:(id)arg2 ;
-(void)sortRecipients;
-(NSArray *)observedRecipients;
-(void)setObservedRecipients:(NSArray *)arg1 ;
-(void)resetObservationsForCurrentPost;
-(UIView *)toViewContainer;
-(void)setToViewContainer:(UIView *)arg1 ;
-(void)collectionViewWillBeginMovingView:(id)arg1 ;
-(void)collectionViewDidEndMovingView:(id)arg1 ;
-(void)setRecipientToViewMap:(NSMapTable *)arg1 ;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(IGDynamicCollectionView *)collectionView;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCollectionView:(IGDynamicCollectionView *)arg1 ;
-(IGDirectedPost *)post;
-(void)setPost:(IGDirectedPost *)arg1 ;
@end

