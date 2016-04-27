
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IGExperimentGroup, NSMutableArray, NSString, NSArray, NSDictionary;

@interface IGExperiment : NSObject <NSCopying> {

	double _lastExposureEventTime;
	IGExperimentGroup* _exposedGroup;
	NSMutableArray* _storedBackgroundRequests;
	char _needRestart;
	char _isHoldoutUniverse;
	NSString* _key;
	NSArray* _predefinedGroups;
	NSString* _descriptiveName;
	int _category;
	IGExperimentGroup* _serverSideGroup;
	IGExperimentGroup* _defaultGroup;
	int _experimentType;
	NSDictionary* _exposeData;
	NSString* _associatedHoldoutUniverse;

}

@property (nonatomic,copy) NSString * key;                                     //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSArray * predefinedGroups;                //@synthesize predefinedGroups=_predefinedGroups - In the implementation block
@property (nonatomic,copy,readonly) NSString * descriptiveName;                //@synthesize descriptiveName=_descriptiveName - In the implementation block
@property (nonatomic,readonly) int category;                                   //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) IGExperimentGroup * overrideGroup; 
@property (nonatomic,retain) IGExperimentGroup * serverSideGroup;              //@synthesize serverSideGroup=_serverSideGroup - In the implementation block
@property (nonatomic,readonly) IGExperimentGroup * defaultGroup;               //@synthesize defaultGroup=_defaultGroup - In the implementation block
@property (assign,nonatomic) int experimentType;                               //@synthesize experimentType=_experimentType - In the implementation block
@property (assign,nonatomic) char needRestart;                                 //@synthesize needRestart=_needRestart - In the implementation block
@property (nonatomic,retain) NSDictionary * exposeData;                        //@synthesize exposeData=_exposeData - In the implementation block
@property (nonatomic,copy) NSString * associatedHoldoutUniverse;               //@synthesize associatedHoldoutUniverse=_associatedHoldoutUniverse - In the implementation block
@property (assign,nonatomic) char isHoldoutUniverse;                           //@synthesize isHoldoutUniverse=_isHoldoutUniverse - In the implementation block
+(id)experimentWithKey:(id)arg1 name:(id)arg2 category:(int)arg3 holdout:(id)arg4 groups:(id)arg5 experimentType:(int)arg6 ;
+(id)experimentWithKey:(id)arg1 name:(id)arg2 category:(int)arg3 holdout:(id)arg4 booleanValue:(char)arg5 experimentType:(int)arg6 ;
+(id)holdoutExperimentWithKey:(id)arg1 name:(id)arg2 category:(int)arg3 ;
-(NSArray *)predefinedGroups;
-(IGExperimentGroup *)overrideGroup;
-(id)effectiveGroup;
-(void)clearGroupOverride;
-(void)setOverrideGroup:(IGExperimentGroup *)arg1 ;
-(char)needRestart;
-(NSString *)descriptiveName;
-(id)initWithKey:(id)arg1 name:(id)arg2 category:(int)arg3 holdout:(id)arg4 groups:(id)arg5 experimentType:(int)arg6 isSelfHoldoutUniverse:(char)arg7 ;
-(NSDictionary *)exposeData;
-(void)sendBackgroundExposure;
-(void)sendExposureEventIfNecessary;
-(id)overrideGroupIndexKey;
-(void)setNeedRestart:(char)arg1 ;
-(void)setExposeData:(NSDictionary *)arg1 ;
-(void)setAssociatedHoldoutUniverse:(NSString *)arg1 ;
-(char)isHoldoutUniverse;
-(void)setIsHoldoutUniverse:(char)arg1 ;
-(int)experimentType;
-(IGExperimentGroup *)serverSideGroup;
-(IGExperimentGroup *)defaultGroup;
-(NSString *)associatedHoldoutUniverse;
-(id)exposeValueForParameterNamed:(id)arg1 ;
-(id)generateServerSideGroupParameters:(id)arg1 ;
-(char)wasExposed;
-(void)setServerSideGroup:(IGExperimentGroup *)arg1 ;
-(void)setExperimentType:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)key;
-(int)category;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end
