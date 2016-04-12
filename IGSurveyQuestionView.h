/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:51 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGSurveyQuestionControllerDelegate.h>

@protocol IGSurveyQuestionViewDelegate, IGSurveyQuestionController;
@class UIView, IGSurveyQuestion;

@interface IGSurveyQuestionView : UIView <IGSurveyQuestionControllerDelegate> {

	id<IGSurveyQuestionViewDelegate> _delegate;
	UIView* _headerView;
	id<IGSurveyQuestionController> _questionController;
	IGSurveyQuestion* _question;

}

@property (assign,nonatomic,__weak) id<IGSurveyQuestionViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) id<IGSurveyQuestionController> questionController;              //@synthesize questionController=_questionController - In the implementation block
@property (nonatomic,retain) IGSurveyQuestion * question;                                    //@synthesize question=_question - In the implementation block
-(id<IGSurveyQuestionController>)questionController;
-(IGSurveyQuestion *)question;
-(void)setQuestion:(IGSurveyQuestion *)arg1 ;
-(void)surveyAnswerWasSelectedWith:(id)arg1 ;
-(void)setQuestionController:(id<IGSurveyQuestionController>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 question:(id)arg2 ;
-(void)setDelegate:(id<IGSurveyQuestionViewDelegate>)arg1 ;
-(void)dealloc;
-(id<IGSurveyQuestionViewDelegate>)delegate;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
@end

