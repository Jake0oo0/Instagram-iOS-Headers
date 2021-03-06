
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface FBSDKGameRequestContent : NSObject <FBSDKCopying, NSSecureCoding> {

	unsigned _actionType;
	NSString* _data;
	unsigned _filters;
	NSString* _message;
	NSString* _objectID;
	NSArray* _recipients;
	NSArray* _recipientSuggestions;
	NSString* _title;

}

@property (assign,nonatomic) unsigned actionType;                       //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * data;                             //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned filters;                          //@synthesize filters=_filters - In the implementation block
@property (nonatomic,copy) NSString * message;                          //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * objectID;                         //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,copy) NSArray * recipients;                        //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy) NSArray * recipientSuggestions;              //@synthesize recipientSuggestions=_recipientSuggestions - In the implementation block
@property (nonatomic,copy) NSArray * suggestions; 
@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * to; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(NSArray *)recipientSuggestions;
-(void)setRecipientSuggestions:(NSArray *)arg1 ;
-(char)isEqualToGameRequestContent:(id)arg1 ;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSString *)objectID;
-(unsigned)actionType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)data;
-(void)setData:(NSString *)arg1 ;
-(void)setFilters:(unsigned)arg1 ;
-(unsigned)filters;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)setSuggestions:(NSArray *)arg1 ;
-(NSArray *)suggestions;
-(void)setActionType:(unsigned)arg1 ;
-(NSArray *)to;
-(void)setTo:(NSArray *)arg1 ;
-(void)setObjectID:(NSString *)arg1 ;
@end

