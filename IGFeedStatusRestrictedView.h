
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGCoreTextLinkHandler.h>

@protocol IGFeedStatusRestrictedViewDelegate;
@class NSDictionary, IGUser, UIImageView, IGCoreTextView, UILabel, IGSpringButton, NSString;

@interface IGFeedStatusRestrictedView : UIView <IGCoreTextLinkHandler> {

	id<IGFeedStatusRestrictedViewDelegate> _delegate;
	NSDictionary* _ageGateInfo;
	IGUser* _blockedUser;
	UIImageView* _restrictedIcon;
	IGCoreTextView* _learnMoreLink;
	UILabel* _messageLabel;
	UILabel* _titleLabel;
	IGSpringButton* _leftButton;
	IGSpringButton* _rightButton;
	NSString* _title;
	NSString* _message;
	NSString* _learnMoreText;
	NSString* _learnMoreURLString;
	NSString* _leftButtonText;
	NSString* _rightButtonText;

}

@property (nonatomic,retain) UIImageView * restrictedIcon;                                        //@synthesize restrictedIcon=_restrictedIcon - In the implementation block
@property (nonatomic,retain) IGCoreTextView * learnMoreLink;                                      //@synthesize learnMoreLink=_learnMoreLink - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                              //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) IGSpringButton * leftButton;                                         //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) IGSpringButton * rightButton;                                        //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,copy) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                                    //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * learnMoreText;                                              //@synthesize learnMoreText=_learnMoreText - In the implementation block
@property (nonatomic,copy) NSString * learnMoreURLString;                                         //@synthesize learnMoreURLString=_learnMoreURLString - In the implementation block
@property (nonatomic,copy) NSString * leftButtonText;                                             //@synthesize leftButtonText=_leftButtonText - In the implementation block
@property (nonatomic,copy) NSString * rightButtonText;                                            //@synthesize rightButtonText=_rightButtonText - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedStatusRestrictedViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDictionary * ageGateInfo;                                          //@synthesize ageGateInfo=_ageGateInfo - In the implementation block
@property (nonatomic,retain) IGUser * blockedUser;                                                //@synthesize blockedUser=_blockedUser - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(IGCoreTextView *)learnMoreLink;
-(UIImageView *)restrictedIcon;
-(void)setLeftButtonText:(NSString *)arg1 ;
-(void)setRightButtonText:(NSString *)arg1 ;
-(void)setLearnMoreText:(NSString *)arg1 ;
-(void)setLearnMoreURLString:(NSString *)arg1 ;
-(void)didTapLeftButton;
-(void)didTapRightButton;
-(float)maxMessageWidth;
-(void)layoutMessages;
-(NSString *)learnMoreText;
-(NSString *)learnMoreURLString;
-(NSString *)rightButtonText;
-(NSString *)leftButtonText;
-(IGUser *)blockedUser;
-(void)setAgeGateInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)ageGateInfo;
-(void)setBlockedUser:(IGUser *)arg1 ;
-(void)setRestrictedIcon:(UIImageView *)arg1 ;
-(void)setLearnMoreLink:(IGCoreTextView *)arg1 ;
-(void)layoutButtons;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedStatusRestrictedViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id<IGFeedStatusRestrictedViewDelegate>)delegate;
-(NSString *)title;
-(UILabel *)titleLabel;
-(NSString *)message;
-(UILabel *)messageLabel;
-(void)setMessage:(NSString *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(IGSpringButton *)leftButton;
-(IGSpringButton *)rightButton;
-(void)setLeftButton:(IGSpringButton *)arg1 ;
-(void)setRightButton:(IGSpringButton *)arg1 ;
@end

