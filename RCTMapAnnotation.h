
#import <Instagram/Instagram-Structs.h>
#import <MapKit/MKPointAnnotation.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString, UIColor, UIImage;

@interface RCTMapAnnotation : MKPointAnnotation <MKAnnotation> {

	char _hasLeftCallout;
	char _hasRightCallout;
	char _animateDrop;
	char _draggable;
	NSString* _identifier;
	UIColor* _tintColor;
	UIImage* _image;
	unsigned _viewIndex;
	unsigned _leftCalloutViewIndex;
	unsigned _rightCalloutViewIndex;
	unsigned _detailCalloutViewIndex;

}

@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) char hasLeftCallout;                          //@synthesize hasLeftCallout=_hasLeftCallout - In the implementation block
@property (assign,nonatomic) char hasRightCallout;                         //@synthesize hasRightCallout=_hasRightCallout - In the implementation block
@property (assign,nonatomic) char animateDrop;                             //@synthesize animateDrop=_animateDrop - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                          //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIImage * image;                              //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned viewIndex;                           //@synthesize viewIndex=_viewIndex - In the implementation block
@property (assign,nonatomic) unsigned leftCalloutViewIndex;                //@synthesize leftCalloutViewIndex=_leftCalloutViewIndex - In the implementation block
@property (assign,nonatomic) unsigned rightCalloutViewIndex;               //@synthesize rightCalloutViewIndex=_rightCalloutViewIndex - In the implementation block
@property (assign,nonatomic) unsigned detailCalloutViewIndex;              //@synthesize detailCalloutViewIndex=_detailCalloutViewIndex - In the implementation block
@property (assign,nonatomic) char draggable;                               //@synthesize draggable=_draggable - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_IG36 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(char)hasLeftCallout;
-(void)setHasLeftCallout:(char)arg1 ;
-(char)hasRightCallout;
-(void)setHasRightCallout:(char)arg1 ;
-(char)animateDrop;
-(void)setAnimateDrop:(char)arg1 ;
-(unsigned)viewIndex;
-(void)setViewIndex:(unsigned)arg1 ;
-(unsigned)leftCalloutViewIndex;
-(void)setLeftCalloutViewIndex:(unsigned)arg1 ;
-(unsigned)rightCalloutViewIndex;
-(void)setRightCalloutViewIndex:(unsigned)arg1 ;
-(unsigned)detailCalloutViewIndex;
-(void)setDetailCalloutViewIndex:(unsigned)arg1 ;
-(void)setDraggable:(char)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)identifier;
-(UIImage *)image;
-(void)setIdentifier:(NSString *)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(char)draggable;
@end

