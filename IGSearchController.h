
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGSearchBarDelegate.h>

@protocol IGSearchControllerDelegate;
@class NSDate, IGViewController, UIView, IGSearchBar, IGKVOHandle, NSString;

@interface IGSearchController : NSObject <IGSearchBarDelegate> {

	char _isActive;
	id<IGSearchControllerDelegate> _delegate;
	NSDate* _lastSearch;
	IGViewController* _contentsController;
	UIView* _searchBarSuperview;
	float _originalSearchBarY;
	float _originalContainingScrollViewY;
	IGSearchBar* _searchBar;
	IGKVOHandle* _contentOffsetObserver;
	CGPoint _originalContainingScrollViewContentOffset;

}

@property (nonatomic,retain) IGViewController * contentsController;                          //@synthesize contentsController=_contentsController - In the implementation block
@property (nonatomic,retain) UIView * searchBarSuperview;                                    //@synthesize searchBarSuperview=_searchBarSuperview - In the implementation block
@property (assign,nonatomic) float originalSearchBarY;                                       //@synthesize originalSearchBarY=_originalSearchBarY - In the implementation block
@property (assign,nonatomic) float originalContainingScrollViewY;                            //@synthesize originalContainingScrollViewY=_originalContainingScrollViewY - In the implementation block
@property (assign,nonatomic) CGPoint originalContainingScrollViewContentOffset;              //@synthesize originalContainingScrollViewContentOffset=_originalContainingScrollViewContentOffset - In the implementation block
@property (nonatomic,retain) IGSearchBar * searchBar;                                        //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) NSDate * lastSearch;                                            //@synthesize lastSearch=_lastSearch - In the implementation block
@property (nonatomic,retain) IGKVOHandle * contentOffsetObserver;                            //@synthesize contentOffsetObserver=_contentOffsetObserver - In the implementation block
@property (assign,nonatomic,__weak) id<IGSearchControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char isActive;                                                //@synthesize isActive=_isActive - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)preferredStatusBarStyle;
-(IGKVOHandle *)contentOffsetObserver;
-(void)setContentsController:(IGViewController *)arg1 ;
-(void)setLastSearch:(NSDate *)arg1 ;
-(NSDate *)lastSearch;
-(UIView *)searchBarSuperview;
-(void)setSearchBarSuperview:(UIView *)arg1 ;
-(float)originalSearchBarY;
-(void)setOriginalSearchBarY:(float)arg1 ;
-(float)originalContainingScrollViewY;
-(void)setOriginalContainingScrollViewY:(float)arg1 ;
-(CGPoint)originalContainingScrollViewContentOffset;
-(void)setOriginalContainingScrollViewContentOffset:(CGPoint)arg1 ;
-(void)setContentOffsetObserver:(IGKVOHandle *)arg1 ;
-(void)setDelegate:(id<IGSearchControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<IGSearchControllerDelegate>)delegate;
-(char)isActive;
-(IGSearchBar *)searchBar;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(char)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(char)searchBar:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(id)initWithSearchBar:(id)arg1 contentsController:(id)arg2 ;
-(void)setActive:(char)arg1 animated:(char)arg2 ;
-(void)setSearchBar:(IGSearchBar *)arg1 ;
-(IGViewController *)contentsController;
@end

