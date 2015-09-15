/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:44 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGToolPickerCell.h>

@class NSString, UILabel, IGGradientView;

@interface IGClipPickerCell : IGToolPickerCell {

	NSString* _videoDurationText;
	UILabel* _clipDurationLabel;
	IGGradientView* _clipGradientView;

}

@property (nonatomic,copy) NSString * videoDurationText;                     //@synthesize videoDurationText=_videoDurationText - In the implementation block
@property (nonatomic,retain) UILabel * clipDurationLabel;                    //@synthesize clipDurationLabel=_clipDurationLabel - In the implementation block
@property (nonatomic,retain) IGGradientView * clipGradientView;              //@synthesize clipGradientView=_clipGradientView - In the implementation block
-(void)setDurationLabel:(id)arg1 ;
-(NSString *)videoDurationText;
-(void)setVideoDurationText:(NSString *)arg1 ;
-(IGGradientView *)clipGradientView;
-(UILabel *)clipDurationLabel;
-(void)setClipDurationLabel:(UILabel *)arg1 ;
-(void)setClipGradientView:(IGGradientView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
@end

