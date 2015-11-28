
@class NSString;


@protocol MKAnnotation <NSObject>
@property (nonatomic,readonly) SCD_Struct_IG24 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@optional
-(void)setCoordinate:(SCD_Struct_IG24)arg1;
-(NSString *)title;
-(NSString *)subtitle;

@required
-(SCD_Struct_IG24)coordinate;

@end

