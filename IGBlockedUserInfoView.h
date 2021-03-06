
#import <UIKit/UIView.h>
#import <Instagram/IGCoreTextLinkHandler.h>

@class NSString, UIView, UIImageView, UILabel, IGCoreTextView;

@interface IGBlockedUserInfoView : UIView <IGCoreTextLinkHandler> {

	NSString* _message;
	UIView* _containerView;
	UIImageView* _geoIPBlockedIcon;
	UIView* _messageView;
	UILabel* _messageLabel;
	UIView* _learnMoreLink;
	IGCoreTextView* _learnMoreTextView;

}

@property (nonatomic,copy) NSString * message;                                //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIView * containerView;                          //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIImageView * geoIPBlockedIcon;                  //@synthesize geoIPBlockedIcon=_geoIPBlockedIcon - In the implementation block
@property (nonatomic,retain) UIView * messageView;                            //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                          //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIView * learnMoreLink;                          //@synthesize learnMoreLink=_learnMoreLink - In the implementation block
@property (nonatomic,retain) IGCoreTextView * learnMoreTextView;              //@synthesize learnMoreTextView=_learnMoreTextView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3 ;
-(UIView *)messageView;
-(void)setMessageView:(UIView *)arg1 ;
-(UIView *)learnMoreLink;
-(void)setLearnMoreLink:(UIView *)arg1 ;
-(UIImageView *)geoIPBlockedIcon;
-(IGCoreTextView *)learnMoreTextView;
-(void)setGeoIPBlockedIcon:(UIImageView *)arg1 ;
-(void)setLearnMoreTextView:(IGCoreTextView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(NSString *)message;
-(UILabel *)messageLabel;
-(void)setMessage:(NSString *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(id)initWithMessage:(id)arg1 ;
@end

