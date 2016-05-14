/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:36 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCountedSet, NSMapTable;

@interface IGListDisplayHandler : NSObject {

	NSCountedSet* _visibleListSections;
	NSMapTable* _visibleCellObjectMap;

}

@property (nonatomic,retain) NSCountedSet * visibleListSections;              //@synthesize visibleListSections=_visibleListSections - In the implementation block
@property (nonatomic,retain) NSMapTable * visibleCellObjectMap;               //@synthesize visibleCellObjectMap=_visibleCellObjectMap - In the implementation block
-(NSMapTable *)visibleCellObjectMap;
-(NSCountedSet *)visibleListSections;
-(void)willDisplayCell:(id)arg1 forListAdapter:(id)arg2 listItemController:(id)arg3 object:(id)arg4 indexPath:(id)arg5 ;
-(void)didEndDisplayingCell:(id)arg1 forListAdapter:(id)arg2 listItemController:(id)arg3 indexPath:(id)arg4 ;
-(void)setVisibleListSections:(NSCountedSet *)arg1 ;
-(void)setVisibleCellObjectMap:(NSMapTable *)arg1 ;
-(id)init;
@end

