
#import <UIKit/UIAlertView.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface IGAlertView : UIAlertView <UIAlertViewDelegate> {

	NSString* _cancelButtonTitle;
	NSString* _otherButtonTitle;
	NSString* _otherButton2Title;
	/*^block*/id _cancelBlock;
	/*^block*/id _otherBlock;
	/*^block*/id _other2Block;

}

@property (nonatomic,copy) NSString * cancelButtonTitle;              //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * otherButtonTitle;               //@synthesize otherButtonTitle=_otherButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * otherButton2Title;              //@synthesize otherButton2Title=_otherButton2Title - In the implementation block
@property (nonatomic,copy) id cancelBlock;                            //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (nonatomic,copy) id otherBlock;                             //@synthesize otherBlock=_otherBlock - In the implementation block
@property (nonatomic,copy) id other2Block;                            //@synthesize other2Block=_other2Block - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)showWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 cancelBlock:(/*^block*/id)arg5 otherBlock:(/*^block*/id)arg6 ;
+(void)showWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 otherButton2Title:(id)arg5 cancelBlock:(/*^block*/id)arg6 otherBlock:(/*^block*/id)arg7 other2Block:(/*^block*/id)arg8 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 otherButton2Title:(id)arg5 cancelBlock:(/*^block*/id)arg6 otherBlock:(/*^block*/id)arg7 other2Block:(/*^block*/id)arg8 ;
-(void)setOtherButtonTitle:(NSString *)arg1 ;
-(void)setOtherBlock:(id)arg1 ;
-(void)setOtherButton2Title:(NSString *)arg1 ;
-(void)setOther2Block:(id)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 cancelBlock:(/*^block*/id)arg5 otherBlock:(/*^block*/id)arg6 ;
-(NSString *)otherButtonTitle;
-(NSString *)otherButton2Title;
-(id)otherBlock;
-(id)other2Block;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2 ;
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(NSString *)cancelButtonTitle;
@end

