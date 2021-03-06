

@class NSString, NSData;

@interface OAAttachment : NSObject {

	NSString* name;
	NSString* fileName;
	NSString* contentType;
	NSData* data;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * fileName; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSData * data; 
-(id)initWithName:(id)arg1 filename:(id)arg2 contentType:(id)arg3 data:(id)arg4 ;
-(void)setContentType:(NSString *)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSString *)contentType;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
@end

