
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGCollectionViewCell.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Instagram/IGLocationPickerDelegate.h>
#import <Instagram/IGLocationDataSourceDelegate.h>

@protocol IGLocationSuggestionDelegateIGLocationSuggestionDataSource;
@class IGLocationMetadata, IGNearbyLocationDataSource, UIView, UICollectionView, UICollectionViewFlowLayout, IGGradientView, IGLocationSuggestionTitleControl, IGActiveLocationDetailView, IGButton, IGLocationPickerViewController, NSArray, IGLabel, NSString;

@interface IGLocationSuggestionCell : IGCollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IGLocationPickerDelegate, IGLocationDataSourceDelegate> {

	id<IGLocationSuggestionDelegate><IGLocationSuggestionDataSource> _delegate;
	IGLocationMetadata* _locationMetadata;
	IGNearbyLocationDataSource* _locationDataSource;
	int _suggestionState;
	UIView* _suggestionView;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _layout;
	IGGradientView* _gradientView;
	IGLocationSuggestionTitleControl* _titleView;
	IGActiveLocationDetailView* _activeLocationView;
	IGButton* _clearButton;
	IGLocationPickerViewController* _locationPickerVC;
	NSArray* _locations;
	IGLabel* _nuxLabel;

}

@property (assign,nonatomic) int suggestionState;                                                                           //@synthesize suggestionState=_suggestionState - In the implementation block
@property (nonatomic,retain) UIView * suggestionView;                                                                       //@synthesize suggestionView=_suggestionView - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                                             //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * layout;                                                           //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) IGGradientView * gradientView;                                                                 //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) IGLocationSuggestionTitleControl * titleView;                                                  //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) IGActiveLocationDetailView * activeLocationView;                                               //@synthesize activeLocationView=_activeLocationView - In the implementation block
@property (nonatomic,retain) IGButton * clearButton;                                                                        //@synthesize clearButton=_clearButton - In the implementation block
@property (nonatomic,retain) IGLocationPickerViewController * locationPickerVC;                                             //@synthesize locationPickerVC=_locationPickerVC - In the implementation block
@property (nonatomic,copy) NSArray * locations;                                                                             //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) IGLabel * nuxLabel;                                                                            //@synthesize nuxLabel=_nuxLabel - In the implementation block
@property (assign,nonatomic,__weak) id<IGLocationSuggestionDelegate><IGLocationSuggestionDataSource> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGLocationMetadata * locationMetadata;                                                         //@synthesize locationMetadata=_locationMetadata - In the implementation block
@property (nonatomic,retain) IGNearbyLocationDataSource * locationDataSource;                                               //@synthesize locationDataSource=_locationDataSource - In the implementation block
@property (nonatomic,readonly) float cellHeight; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGLabel *)nuxLabel;
-(void)setLocationMetadata:(IGLocationMetadata *)arg1 ;
-(IGLocationMetadata *)locationMetadata;
-(void)setLocationDataSource:(IGNearbyLocationDataSource *)arg1 ;
-(IGNearbyLocationDataSource *)locationDataSource;
-(void)locationPickerViewController:(id)arg1 didFinish:(char)arg2 withLocation:(id)arg3 ;
-(void)locationDataSourceDidFailToLocate;
-(void)locationDataSourceWasDeniedAccess;
-(void)onLocationAuthorzied;
-(void)onLocationDenied;
-(int)suggestionState;
-(UIView *)suggestionView;
-(IGActiveLocationDetailView *)activeLocationView;
-(void)layoutSuggestionView;
-(void)showActiveLocationDetailView:(char)arg1 ;
-(char)authStatusNotDenied;
-(void)onLocationTitleControlTapped;
-(void)locationClearButtonTapped;
-(void)showLocationSettingInstruction;
-(void)showActiveLocation:(id)arg1 ;
-(void)updateSuggestionStateUsingLocations;
-(id)detailsStringForLocation:(id)arg1 ;
-(void)setSuggestionState:(int)arg1 ;
-(void)showClearButton:(char)arg1 ;
-(void)configureLocationSuggestionCell:(id)arg1 indexPath:(id)arg2 ;
-(void)configureLocationSearchButtonCell:(id)arg1 ;
-(id)cellFontAttribute;
-(CGSize)searchButtonCellSize;
-(void)presentLocationPickerVC;
-(void)setSuggestionView:(UIView *)arg1 ;
-(void)setActiveLocationView:(IGActiveLocationDetailView *)arg1 ;
-(void)setClearButton:(IGButton *)arg1 ;
-(IGLocationPickerViewController *)locationPickerVC;
-(void)setLocationPickerVC:(IGLocationPickerViewController *)arg1 ;
-(void)setNuxLabel:(IGLabel *)arg1 ;
-(id)locationForIndexPath:(id)arg1 ;
-(void)locationDataSourceDidStartLoading;
-(void)locationDataSourceDidFinishLoadingDataSource:(id)arg1 ;
-(void)locationDataSourceDidFailLoading;
-(float)cellHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(void)setDelegate:(id<IGLocationSuggestionDelegate><IGLocationSuggestionDataSource>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGLocationSuggestionDelegate><IGLocationSuggestionDataSource>)delegate;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(IGLocationSuggestionTitleControl *)titleView;
-(void)setTitleView:(IGLocationSuggestionTitleControl *)arg1 ;
-(UICollectionViewFlowLayout *)layout;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)setLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(IGButton *)clearButton;
-(void)setGradientView:(IGGradientView *)arg1 ;
-(IGGradientView *)gradientView;
-(void)updateLocations;
-(NSArray *)locations;
@end

