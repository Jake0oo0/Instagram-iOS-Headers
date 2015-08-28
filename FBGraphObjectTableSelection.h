/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:51:38 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/FBGraphObjectSelectionQueryDelegate.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBGraphObjectSelectionChangedDelegate;
@class NSObject, NSArray, FBGraphObjectTableDataSource, NSString;

@interface FBGraphObjectTableSelection : NSObject <FBGraphObjectSelectionQueryDelegate, UITableViewDelegate> {

	char _allowsMultipleSelection;
	NSObject*<FBGraphObjectSelectionChangedDelegate> _delegate;
	NSArray* _selection;
	FBGraphObjectTableDataSource* _dataSource;

}

@property (assign,nonatomic) NSObject*<FBGraphObjectSelectionChangedDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * selection;                                                    //@synthesize selection=_selection - In the implementation block
@property (assign,nonatomic) char allowsMultipleSelection;                                           //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
@property (nonatomic,retain) FBGraphObjectTableDataSource * dataSource;                              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)graphObjectTableDataSource:(id)arg1 selectionIncludesItem:(id)arg2 ;
-(void)deselectItems:(id)arg1 tableView:(id)arg2 ;
-(void)selectItem:(id)arg1 cell:(id)arg2 raiseSelectionChanged:(char)arg3 ;
-(void)deselectItem:(id)arg1 cell:(id)arg2 raiseSelectionChanged:(char)arg3 ;
-(char)selectionIncludesItem:(id)arg1 ;
-(void)selectItem:(id)arg1 tableView:(id)arg2 ;
-(void)clearSelectionInTableView:(id)arg1 ;
-(void)dealloc;
-(void)setDataSource:(FBGraphObjectTableDataSource *)arg1 ;
-(void)setDelegate:(NSObject*<FBGraphObjectSelectionChangedDelegate>)arg1 ;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(NSString *)description;
-(char)allowsMultipleSelection;
-(FBGraphObjectTableDataSource *)dataSource;
-(NSObject*<FBGraphObjectSelectionChangedDelegate>)delegate;
-(NSArray *)selection;
-(void)setSelection:(NSArray *)arg1 ;
-(void)selectionChanged;
-(id)initWithDataSource:(id)arg1 ;
@end

