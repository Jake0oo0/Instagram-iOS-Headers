
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@class NSArray, NSNumberFormatter, NSString;

@interface IGInsightsMediaFeedListItemController : IGListItemController <IGListItemType> {

	NSArray* _mediaBundles;
	int _mediaCellCategory;
	NSNumberFormatter* _commaNumberFormatter;

}

@property (nonatomic,retain) NSNumberFormatter * commaNumberFormatter;              //@synthesize commaNumberFormatter=_commaNumberFormatter - In the implementation block
@property (nonatomic,copy) NSArray * mediaBundles;                                  //@synthesize mediaBundles=_mediaBundles - In the implementation block
@property (assign,nonatomic) int mediaCellCategory;                                 //@synthesize mediaCellCategory=_mediaCellCategory - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(NSNumberFormatter *)commaNumberFormatter;
-(void)setMediaBundles:(NSArray *)arg1 ;
-(NSArray *)mediaBundles;
-(void)initializeCommaNumberFormatter;
-(void)setCommaNumberFormatter:(NSNumberFormatter *)arg1 ;
-(CGSize)cellSizeForWidth:(float)arg1 ;
-(int)mediaCellCategory;
-(void)setMediaCellCategory:(int)arg1 ;
-(id)init;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

