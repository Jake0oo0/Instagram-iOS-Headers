/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:52 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface IGInsightsSeeAllPostsFilterSummaryView : UIView {

	NSString* _mediaType;
	NSString* _timeframe;
	NSString* _dataOrdering;
	NSString* _skeleton;
	UILabel* _label;

}

@property (nonatomic,copy) NSString * mediaType;                 //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy) NSString * timeframe;                 //@synthesize timeframe=_timeframe - In the implementation block
@property (nonatomic,copy) NSString * dataOrdering;              //@synthesize dataOrdering=_dataOrdering - In the implementation block
@property (nonatomic,copy) NSString * skeleton;                  //@synthesize skeleton=_skeleton - In the implementation block
@property (nonatomic,readonly) UILabel * label;                  //@synthesize label=_label - In the implementation block
-(NSString *)timeframe;
-(NSString *)dataOrdering;
-(void)updateMediaType:(id)arg1 timeframe:(id)arg2 dataOrdering:(id)arg3 skeleton:(id)arg4 ;
-(void)setTimeframe:(NSString *)arg1 ;
-(void)setDataOrdering:(NSString *)arg1 ;
-(id)generatedLabelTextAttributedString;
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
-(NSString *)skeleton;
-(void)setSkeleton:(NSString *)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)label;
@end

