/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:48 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, IGQuadtreeRegion;

@interface IGQuadtree : NSObject {

	IGQuadtree* _northwest;
	IGQuadtree* _northeast;
	IGQuadtree* _southwest;
	IGQuadtree* _southeast;
	NSMutableArray* _points;
	double _minLatitude;
	double _maxLatitude;
	double _minLongitude;
	double _maxLongitude;
	IGQuadtreeRegion* _region;
	NSMutableArray* _allPoints;

}

@property (nonatomic,readonly) IGQuadtreeRegion * region;               //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) NSMutableArray * allPoints;              //@synthesize allPoints=_allPoints - In the implementation block
-(NSMutableArray *)allPoints;
-(id)query:(id)arg1 ;
-(id)centerGeoPoint;
-(char)hasPointsInRegion:(id)arg1 ;
-(char)containsRegion:(id)arg1 ;
-(char)intersectsRegion:(id)arg1 ;
-(id)minGeoPoint;
-(id)maxGeoPoint;
-(void)subdivide;
-(id)initWithRegion:(id)arg1 ;
-(char)remove:(id)arg1 ;
-(char)add:(id)arg1 ;
-(int)count;
-(id)init;
-(char)containsPoint:(id)arg1 ;
-(IGQuadtreeRegion *)region;
@end

