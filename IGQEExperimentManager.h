/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:45 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGQEExperimentSet, IGUser;

@interface IGQEExperimentManager : NSObject {

	IGQEExperimentSet* _userExperimentSet;
	IGQEExperimentSet* _deviceExperimentSet;
	IGUser* _previousUser;

}

@property (nonatomic,retain) IGQEExperimentSet * userExperimentSet;                //@synthesize userExperimentSet=_userExperimentSet - In the implementation block
@property (nonatomic,retain) IGQEExperimentSet * deviceExperimentSet;              //@synthesize deviceExperimentSet=_deviceExperimentSet - In the implementation block
@property (nonatomic,retain) IGUser * previousUser;                                //@synthesize previousUser=_previousUser - In the implementation block
+(char)exposeValueForBoolExperiment:(id)arg1 ;
+(id)exposeValueForExperiment:(id)arg1 parameterName:(id)arg2 ;
+(id)experimentsGroupsMapping;
+(id)exposeCachedValueForExperiment:(id)arg1 parameterName:(id)arg2 ;
+(char)exposeCachedValueForBoolExperiment:(id)arg1 ;
+(id)effectiveGroupNameForExperiment:(id)arg1 ;
+(id)experiments;
+(void)refreshExperimentsIfNecessary;
+(char)wantsColdStart;
+(id)experimentForKey:(id)arg1 ;
+(id)cachedExperimentForKey:(id)arg1 ;
+(id)exposeValueForExperiment:(id)arg1 parameterName:(id)arg2 respectingHoldout:(id)arg3 ;
+(id)experimentsByCategory;
+(void)disableExperiments;
+(id)sharedInstance;
-(void)loginStateChange;
-(IGQEExperimentSet *)userExperimentSet;
-(IGQEExperimentSet *)deviceExperimentSet;
-(void)setUserExperimentSet:(IGQEExperimentSet *)arg1 ;
-(void)setDeviceExperimentSet:(IGQEExperimentSet *)arg1 ;
-(IGUser *)previousUser;
-(void)setPreviousUser:(IGUser *)arg1 ;
-(void)dealloc;
-(id)init;
@end

