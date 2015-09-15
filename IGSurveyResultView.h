/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:43 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGSurveyQuestion, IGSurveyAnswer, UIImageView, UILabel;

@interface IGSurveyResultView : UIView {

	IGSurveyQuestion* _question;
	IGSurveyAnswer* _answer;
	UIImageView* _checkmarkImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) IGSurveyQuestion * question;                   //@synthesize question=_question - In the implementation block
@property (nonatomic,retain) IGSurveyAnswer * answer;                       //@synthesize answer=_answer - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkImageView;              //@synthesize checkmarkImageView=_checkmarkImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                       //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(IGSurveyQuestion *)question;
-(void)setQuestion:(IGSurveyQuestion *)arg1 ;
-(id)checkmarkImageForAnswer:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setCheckmarkImageView:(UIImageView *)arg1 ;
-(UIImageView *)checkmarkImageView;
-(void)setAnswer:(IGSurveyAnswer *)arg1 ;
-(IGSurveyAnswer *)answer;
@end

