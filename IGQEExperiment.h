
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IGQEExperimentUserGroup, NSMutableArray, NSString, NSArray, NSDictionary;

@interface IGQEExperiment : NSObject <NSCopying> {

	double _lastExposureEventTime;
	IGQEExperimentUserGroup* _exposedGroup;
	NSMutableArray* _storedBackgroundRequests;
	char _isHoldoutUniverse;
	NSString* _key;
	NSArray* _userGroups;
	NSString* _descriptiveName;
	int _category;
	IGQEExperimentUserGroup* _serverSideUserGroup;
	IGQEExperimentUserGroup* _defaultUserGroup;
	int _experimentType;
	NSDictionary* _exposeData;
	NSString* _associatedHoldoutUniverse;

}

@property (nonatomic,copy) NSString * key;                                               //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userGroups;                                //@synthesize userGroups=_userGroups - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptiveName;                          //@synthesize descriptiveName=_descriptiveName - In the implementation block
@property (nonatomic,readonly) int category;                                             //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) IGQEExperimentUserGroup * overrideUserGroup; 
@property (nonatomic,retain) IGQEExperimentUserGroup * serverSideUserGroup;              //@synthesize serverSideUserGroup=_serverSideUserGroup - In the implementation block
@property (nonatomic,readonly) IGQEExperimentUserGroup * defaultUserGroup;               //@synthesize defaultUserGroup=_defaultUserGroup - In the implementation block
@property (assign,nonatomic) int experimentType;                                         //@synthesize experimentType=_experimentType - In the implementation block
@property (nonatomic,retain) NSDictionary * exposeData;                                  //@synthesize exposeData=_exposeData - In the implementation block
@property (nonatomic,copy) NSString * associatedHoldoutUniverse;                         //@synthesize associatedHoldoutUniverse=_associatedHoldoutUniverse - In the implementation block
@property (assign,nonatomic) char isHoldoutUniverse;                                     //@synthesize isHoldoutUniverse=_isHoldoutUniverse - In the implementation block
+(id)experimentWithKey:(id)arg1 name:(id)arg2 category:(int)arg3 holdout:(id)arg4 groups:(id)arg5 experimentType:(int)arg6 ;
+(id)experimentWithKey:(id)arg1 name:(id)arg2 category:(int)arg3 holdout:(id)arg4 booleanValue:(char)arg5 experimentType:(int)arg6 ;
+(id)holdoutExperimentWithKey:(id)arg1 name:(id)arg2 category:(int)arg3 ;
-(NSString *)descriptiveName;
-(NSArray *)userGroups;
-(IGQEExperimentUserGroup *)overrideUserGroup;
-(void)clearUserGroupOverride;
-(void)setOverrideUserGroup:(IGQEExperimentUserGroup *)arg1 ;
-(id)initWithKey:(id)arg1 name:(id)arg2 category:(int)arg3 holdout:(id)arg4 groups:(id)arg5 experimentType:(int)arg6 isSelfHoldoutUniverse:(char)arg7 ;
-(char)wasExposed;
-(IGQEExperimentUserGroup *)serverSideUserGroup;
-(int)experimentType;
-(NSDictionary *)exposeData;
-(void)sendBackgroundExposure;
-(id)effectiveGroup;
-(void)sendExposureEventIfNecessary;
-(IGQEExperimentUserGroup *)defaultUserGroup;
-(id)overrideUserGroupIndexKey;
-(void)setServerSideUserGroup:(IGQEExperimentUserGroup *)arg1 ;
-(void)clearExposed;
-(id)exposeValueForParameterNamed:(id)arg1 ;
-(id)generateServerSideUserGroupParameters:(id)arg1 ;
-(void)setExperimentType:(int)arg1 ;
-(void)setExposeData:(NSDictionary *)arg1 ;
-(NSString *)associatedHoldoutUniverse;
-(void)setAssociatedHoldoutUniverse:(NSString *)arg1 ;
-(char)isHoldoutUniverse;
-(void)setIsHoldoutUniverse:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)key;
-(int)category;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end

