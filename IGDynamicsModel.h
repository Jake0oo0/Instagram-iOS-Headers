/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:34 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGDynamicsProperties;

@interface IGDynamicsModel : NSObject {

	char _isDone;
	IGDynamicsProperties* _properties;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) IGDynamicsProperties * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) char isDone;                                  //@synthesize isDone=_isDone - In the implementation block
@property (nonatomic,copy) id completionBlock;                               //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)callCompletionHandlerWithCompleted:(char)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(IGDynamicsProperties *)properties;
-(void)setProperties:(IGDynamicsProperties *)arg1 ;
-(char)isDone;
-(void)step:(double)arg1 ;
-(char)notify;
@end

