

@interface IGExperimentManager : NSObject
+(id)dumpExperimentGroupMappingForDebugging;
+(void)setConfigurationProvider:(id)arg1 ;
+(char)exposeValueForBoolExperiment:(id)arg1 ;
+(void)refreshExperimentsIfNecessary;
+(char)wantsColdStart;
+(id)exposeValueForExperiment:(id)arg1 parameterName:(id)arg2 ;
+(char)exposeCachedValueForMainFeedExperiment;
+(id)currentExperimentSets;
+(void)disableExperiments;
@end

