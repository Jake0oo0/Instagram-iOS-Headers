/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:59 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UISegmentedControl.h>

@class NSArray;

@interface RCTSegmentedControl : UISegmentedControl {

	NSArray* _values;
	int _selectedIndex;
	/*^block*/id _onChange;

}

@property (nonatomic,copy) NSArray * values;                 //@synthesize values=_values - In the implementation block
@property (assign,nonatomic) int selectedIndex;              //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,copy) id onChange;                      //@synthesize onChange=_onChange - In the implementation block
-(id)onChange;
-(void)didChange;
-(void)setOnChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
@end

