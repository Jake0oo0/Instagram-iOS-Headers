/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:50 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/POPAnimation.h>

@class POPAnimatableProperty;

@interface POPPropertyAnimation : POPAnimation

@property (nonatomic,retain) POPAnimatableProperty * property; 
@property (nonatomic,copy) id fromValue; 
@property (nonatomic,copy) id toValue; 
@property (assign,nonatomic) float roundingFactor; 
@property (assign,nonatomic) unsigned clampMode; 
@property (assign,getter=isAdditive,nonatomic) char additive; 
-(void)setRoundingFactor:(float)arg1 ;
-(void)_initState;
-(void)_appendDescription:(id)arg1 debug:(char)arg2 ;
-(id)progressMarkers;
-(void)setProgressMarkers:(id)arg1 ;
-(float)roundingFactor;
-(unsigned)clampMode;
-(void)setClampMode:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fromValue;
-(void)setAdditive:(char)arg1 ;
-(void)setFromValue:(id)arg1 ;
-(void)setToValue:(id)arg1 ;
-(id)toValue;
-(char)isAdditive;
-(POPAnimatableProperty *)property;
-(void)setProperty:(POPAnimatableProperty *)arg1 ;
-(id)currentValue;
@end

