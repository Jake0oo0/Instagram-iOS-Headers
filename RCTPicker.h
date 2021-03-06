
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIPickerView.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class NSArray, UIColor, UIFont, NSString;

@interface RCTPicker : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate> {

	NSArray* _items;
	int _selectedIndex;
	UIColor* _color;
	UIFont* _font;
	int _textAlign;
	/*^block*/id _onChange;

}

@property (nonatomic,copy) NSArray * items;                         //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) int selectedIndex;                     //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,retain) UIColor * color;                       //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIFont * font;                         //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) int textAlign;                         //@synthesize textAlign=_textAlign - In the implementation block
@property (nonatomic,copy) id onChange;                             //@synthesize onChange=_onChange - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)onChange;
-(void)setOnChange:(id)arg1 ;
-(void)setTextAlign:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3 ;
-(id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(UIFont *)font;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(int)textAlign;
@end

