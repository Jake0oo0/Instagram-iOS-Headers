
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UITabBarItem, UIImage;

@interface RCTTabBarItem : UIView {

	char _selected;
	UITabBarItem* _barItem;
	id _badge;
	UIImage* _icon;
	int _systemIcon;
	/*^block*/id _onPress;

}

@property (nonatomic,copy) id badge;                                       //@synthesize badge=_badge - In the implementation block
@property (nonatomic,retain) UIImage * icon;                               //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) int systemIcon;                               //@synthesize systemIcon=_systemIcon - In the implementation block
@property (assign,getter=isSelected,nonatomic) char selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) UITabBarItem * barItem;                     //@synthesize barItem=_barItem - In the implementation block
@property (nonatomic,copy) id onPress;                                     //@synthesize onPress=_onPress - In the implementation block
-(id)reactViewController;
-(void)setOnPress:(id)arg1 ;
-(id)onPress;
-(void)setSystemIcon:(int)arg1 ;
-(int)systemIcon;
-(UITabBarItem *)barItem;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)isSelected;
-(void)setSelected:(char)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(UIImage *)icon;
-(id)badge;
-(void)setBadge:(id)arg1 ;
@end

