
#import <Instagram/RCTViewManager.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class NSString;

@interface RCTMapManager : RCTViewManager <MKMapViewDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)moduleName;
+(id)propConfig_onChange;
+(id)propConfig_showsUserLocation;
+(id)propConfig_showsPointsOfInterest;
+(id)propConfig_showsCompass;
+(id)propConfig_followUserLocation;
+(id)propConfig_zoomEnabled;
+(id)propConfig_rotateEnabled;
+(id)propConfig_pitchEnabled;
+(id)propConfig_maxDelta;
+(id)propConfig_minDelta;
+(id)propConfig_legalLabelInsets;
+(id)propConfig_mapType;
+(id)propConfig_annotations;
+(id)propConfig_overlays;
+(id)propConfig_onAnnotationDragStateChange;
+(id)propConfig_onAnnotationFocus;
+(id)propConfig_onAnnotationBlur;
+(id)propConfig_onPress;
+(id)propConfig_region;
+(id)propConfig_scrollEnabled;
+(void)load;
-(void)_regionChanged:(id)arg1 ;
-(void)_onTick:(id)arg1 ;
-(void)_emitRegionChangeEvent:(id)arg1 continuous:(char)arg2 ;
-(void)set_region:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3 ;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(char)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(char)arg2 ;
-(void)mapViewWillStartRenderingMap:(id)arg1 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned)arg3 fromOldState:(unsigned)arg4 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(id)view;
@end

