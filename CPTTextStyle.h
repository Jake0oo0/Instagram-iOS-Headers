
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, CPTColor, NSDictionary;

@interface CPTTextStyle : NSObject <NSCoding, NSCopying, NSMutableCopying> {

	float fontSize;
	NSString* fontName;
	CPTColor* color;
	int textAlignment;
	int lineBreakMode;

}

@property (nonatomic,readonly) NSDictionary * attributes; 
@property (nonatomic,copy) NSString * fontName; 
@property (assign,nonatomic) float fontSize; 
@property (nonatomic,copy) CPTColor * color; 
@property (assign,nonatomic) int textAlignment; 
@property (assign,nonatomic) int lineBreakMode; 
+(id)textStyleWithAttributes:(id)arg1 ;
+(id)textStyleWithStyle:(id)arg1 ;
+(id)textStyle;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setTextAlignment:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLineBreakMode:(int)arg1 ;
-(int)textAlignment;
-(CPTColor *)color;
-(int)lineBreakMode;
-(NSString *)fontName;
-(void)setColor:(CPTColor *)arg1 ;
-(void)setFontSize:(float)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setFontName:(NSString *)arg1 ;
-(NSDictionary *)attributes;
-(id)debugQuickLookObject;
-(float)fontSize;
@end

