/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:34 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface IGAutocompleteAbstractDataSource : NSObject {

	char _shouldReverseSort;
	int _defaultSet;
	NSString* _query;
	NSArray* _filteredStrings;
	NSArray* _filteredResults;

}

@property (assign,nonatomic) int defaultSet;                         //@synthesize defaultSet=_defaultSet - In the implementation block
@property (assign,nonatomic) char shouldReverseSort;                 //@synthesize shouldReverseSort=_shouldReverseSort - In the implementation block
@property (nonatomic,copy) NSString * query;                         //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSArray * filteredStrings;              //@synthesize filteredStrings=_filteredStrings - In the implementation block
@property (nonatomic,retain) NSArray * filteredResults;              //@synthesize filteredResults=_filteredResults - In the implementation block
-(void)setFilteredStrings:(NSArray *)arg1 ;
-(int)sortedOrder:(int)arg1 ;
-(id)allResults;
-(id)resultForRow:(int)arg1 ;
-(int)defaultSet;
-(void)setDefaultSet:(int)arg1 ;
-(char)shouldReverseSort;
-(void)setShouldReverseSort:(char)arg1 ;
-(NSArray *)filteredStrings;
-(NSArray *)filteredResults;
-(void)setFilteredResults:(NSArray *)arg1 ;
-(NSString *)query;
-(void)setQuery:(NSString *)arg1 ;
-(unsigned)numberOfResults;
@end

