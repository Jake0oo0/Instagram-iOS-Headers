/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:52 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCountedSet, NSMapTable;

@interface IGListDisplayHandler : NSObject {

	NSCountedSet* _visibleListSections;
	NSMapTable* _visibleCellListMap;
	NSMapTable* _visibleCellObjectMap;

}

@property (nonatomic,retain) NSCountedSet * visibleListSections;              //@synthesize visibleListSections=_visibleListSections - In the implementation block
@property (nonatomic,retain) NSMapTable * visibleCellListMap;                 //@synthesize visibleCellListMap=_visibleCellListMap - In the implementation block
@property (nonatomic,retain) NSMapTable * visibleCellObjectMap;               //@synthesize visibleCellObjectMap=_visibleCellObjectMap - In the implementation block
-(NSMapTable *)visibleCellListMap;
-(NSMapTable *)visibleCellObjectMap;
-(NSCountedSet *)visibleListSections;
-(void)willDisplayCell:(id)arg1 inListAdapter:(id)arg2 forListItemController:(id)arg3 object:(id)arg4 atIndexPath:(id)arg5 ;
-(void)didEndDisplayingCell:(id)arg1 inListAdapter:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setVisibleListSections:(NSCountedSet *)arg1 ;
-(void)setVisibleCellListMap:(NSMapTable *)arg1 ;
-(void)setVisibleCellObjectMap:(NSMapTable *)arg1 ;
-(id)init;
@end

