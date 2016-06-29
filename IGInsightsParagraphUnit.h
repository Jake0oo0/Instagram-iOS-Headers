

@class NSString, NSURL;

@interface IGInsightsParagraphUnit : NSObject {

	NSString* _title;
	NSString* _subtitle;
	NSString* _urlText;
	NSURL* _url;
	NSString* _imageName;
	NSString* _action;
	NSString* _actionText;

}

@property (nonatomic,copy) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * urlText;                 //@synthesize urlText=_urlText - In the implementation block
@property (nonatomic,retain) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * imageName;               //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSString * action;                  //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * actionText;              //@synthesize actionText=_actionText - In the implementation block
-(NSString *)actionText;
-(void)setActionText:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSString *)action;
-(NSString *)title;
-(void)setAction:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)imageName;
-(void)setUrlText:(NSString *)arg1 ;
-(NSString *)urlText;
-(void)setImageName:(NSString *)arg1 ;
@end

