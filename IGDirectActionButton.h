
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, IGDirectInboxAction;

@interface IGDirectActionButton : UIView {

	UILabel* _titleLabel;
	IGDirectInboxAction* _action;

}

@property (nonatomic,retain) UILabel * titleLabel;                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) IGDirectInboxAction * action;              //@synthesize action=_action - In the implementation block
-(void)buttonTapped;
-(id)initWithInboxAction:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(IGDirectInboxAction *)action;
-(UILabel *)titleLabel;
-(void)setAction:(IGDirectInboxAction *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

