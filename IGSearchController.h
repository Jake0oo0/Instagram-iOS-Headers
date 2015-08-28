/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:22 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGSearchBarDelegate.h>

@protocol IGSearchControllerDelegate;
@class NSDate, IGViewController, UIView, IGSearchBar, IGSegmentedControl, IGKVOHandle, NSString;

@interface IGSearchController : NSObject <IGSearchBarDelegate> {

	char _isActive;
	id<IGSearchControllerDelegate> _delegate;
	NSDate* _lastSearch;
	IGViewController* _contentsController;
	UIView* _searchBarSuperview;
	float _originalSearchBarY;
	float _originalContainingScrollViewY;
	UIView* _searchView;
	IGSearchBar* _searchBar;
	IGSegmentedControl* _segmentedControl;
	UIView* _contentView;
	IGKVOHandle* _contentOffsetObserver;
	CGPoint _originalContainingScrollViewContentOffset;

}

@property (assign,nonatomic,__weak) id<IGSearchControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char isActive;                                                //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,retain) NSDate * lastSearch;                                            //@synthesize lastSearch=_lastSearch - In the implementation block
@property (nonatomic,retain) IGViewController * contentsController;                          //@synthesize contentsController=_contentsController - In the implementation block
@property (nonatomic,retain) UIView * searchBarSuperview;                                    //@synthesize searchBarSuperview=_searchBarSuperview - In the implementation block
@property (assign,nonatomic) float originalSearchBarY;                                       //@synthesize originalSearchBarY=_originalSearchBarY - In the implementation block
@property (assign,nonatomic) float originalContainingScrollViewY;                            //@synthesize originalContainingScrollViewY=_originalContainingScrollViewY - In the implementation block
@property (assign,nonatomic) CGPoint originalContainingScrollViewContentOffset;              //@synthesize originalContainingScrollViewContentOffset=_originalContainingScrollViewContentOffset - In the implementation block
@property (nonatomic,retain) UIView * searchView;                                            //@synthesize searchView=_searchView - In the implementation block
@property (nonatomic,retain) IGSearchBar * searchBar;                                        //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) IGSegmentedControl * segmentedControl;                          //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                           //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) IGKVOHandle * contentOffsetObserver;                            //@synthesize contentOffsetObserver=_contentOffsetObserver - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)preferredStatusBarStyle;
-(IGKVOHandle *)contentOffsetObserver;
-(id)initWithSearchBar:(id)arg1 segmentedControl:(id)arg2 contentsController:(id)arg3 ;
-(void)setContentOffsetObserver:(IGKVOHandle *)arg1 ;
-(NSDate *)lastSearch;
-(void)setContentsController:(IGViewController *)arg1 ;
-(void)setLastSearch:(NSDate *)arg1 ;
-(int)searchViewHeight;
-(UIView *)searchView;
-(UIView *)searchBarSuperview;
-(void)setSearchBarSuperview:(UIView *)arg1 ;
-(float)originalSearchBarY;
-(void)setOriginalSearchBarY:(float)arg1 ;
-(float)originalContainingScrollViewY;
-(void)setOriginalContainingScrollViewY:(float)arg1 ;
-(CGPoint)originalContainingScrollViewContentOffset;
-(void)setOriginalContainingScrollViewContentOffset:(CGPoint)arg1 ;
-(void)setSearchView:(UIView *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGSearchControllerDelegate>)arg1 ;
-(id<IGSearchControllerDelegate>)delegate;
-(char)isActive;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(IGSearchBar *)searchBar;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(char)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(char)searchBar:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)setActive:(char)arg1 animated:(char)arg2 ;
-(void)setSearchBar:(IGSearchBar *)arg1 ;
-(IGSegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(IGSegmentedControl *)arg1 ;
-(IGViewController *)contentsController;
@end

