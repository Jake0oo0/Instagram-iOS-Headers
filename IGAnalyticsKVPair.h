

@class NSString;

@interface IGAnalyticsKVPair : NSObject {

	NSString* _key;
	id _value;

}

@property (nonatomic,copy) NSString * key;              //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id value;                  //@synthesize value=_value - In the implementation block
-(NSString *)key;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
@end

