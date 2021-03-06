
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol ToolControllerDelegate;
@class NSArray, ToolControllerConfig, NSObject, UICollectionView, NSString;

@interface ToolController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	NSArray* _tools;
	ToolControllerConfig* _config;
	NSObject*<ToolControllerDelegate> _delegate;
	UICollectionView* _collectionView;
	int _currentToolIndex;

}

@property (nonatomic,retain) UICollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) int currentToolIndex;                                           //@synthesize currentToolIndex=_currentToolIndex - In the implementation block
@property (nonatomic,retain) NSArray * tools;                                                //@synthesize tools=_tools - In the implementation block
@property (assign,nonatomic) ToolControllerConfig * config;                                  //@synthesize config=_config - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<ToolControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)tools;
-(void)setCurrentToolIndex:(int)arg1 ;
-(void)setTools:(NSArray *)arg1 ;
-(id)toolCellWithToolTile:(id)arg1 ;
-(int)currentToolIndex;
-(void)_updateLayout;
-(void)setDelegate:(NSObject*<ToolControllerDelegate>)arg1 ;
-(NSObject*<ToolControllerDelegate>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(UICollectionView *)collectionView;
-(float)height;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(ToolControllerConfig *)config;
-(void)setConfig:(ToolControllerConfig *)arg1 ;
-(void)updateState;
@end

