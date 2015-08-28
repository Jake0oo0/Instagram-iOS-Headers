/*
* This header is generated by classdump-dyld 0.7
* on Thursday, August 27, 2015 at 8:47:20 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/2DC1EEC6-8BB6-4C9F-8658-A819865606D1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/IGCollectionViewCell.h>

@class NSArray, UIImage, UIView;

@interface IGAddPeopleCell : IGCollectionViewCell {

	char _showDetectionSpinner;
	NSArray* _faceRectangles;
	UIImage* _snapshot;
	UIView* _faceLabelContainerView;

}

@property (assign,nonatomic) char showDetectionSpinner;                    //@synthesize showDetectionSpinner=_showDetectionSpinner - In the implementation block
@property (nonatomic,retain) NSArray * faceRectangles;                     //@synthesize faceRectangles=_faceRectangles - In the implementation block
@property (nonatomic,retain) UIImage * snapshot;                           //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,retain) UIView * faceLabelContainerView;              //@synthesize faceLabelContainerView=_faceLabelContainerView - In the implementation block
-(void)setFaceRectangles:(NSArray *)arg1 ;
-(NSArray *)faceRectangles;
-(UIView *)faceLabelContainerView;
-(void)setFaceLabelContainerView:(UIView *)arg1 ;
-(id)faceImageViewForFacesInSnapshot:(id)arg1 ;
-(void)setFaceRectangles:(id)arg1 forSnapshot:(id)arg2 ;
-(char)showDetectionSpinner;
-(void)setShowDetectionSpinner:(char)arg1 ;
-(UIImage *)snapshot;
-(void)setSnapshot:(UIImage *)arg1 ;
@end

