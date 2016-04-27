

@class NSArray, NSString;

@interface IGBrandLiftSurvey : NSObject {

	char _showResults;
	NSArray* _questions;
	NSString* _primerText;
	NSString* _surveyID;
	NSString* _trackingToken;

}

@property (nonatomic,retain) NSArray * questions;                 //@synthesize questions=_questions - In the implementation block
@property (nonatomic,copy) NSString * primerText;                 //@synthesize primerText=_primerText - In the implementation block
@property (nonatomic,copy) NSString * surveyID;                   //@synthesize surveyID=_surveyID - In the implementation block
@property (nonatomic,copy) NSString * trackingToken;              //@synthesize trackingToken=_trackingToken - In the implementation block
@property (assign,nonatomic) char showResults;                    //@synthesize showResults=_showResults - In the implementation block
+(id)surveyForServerMessage:(id)arg1 ;
+(id)mockBrandLiftSurveyJSON;
-(void)setSurveyID:(NSString *)arg1 ;
-(void)setQuestions:(NSArray *)arg1 ;
-(NSArray *)questions;
-(void)setShowResults:(char)arg1 ;
-(void)setPrimerText:(NSString *)arg1 ;
-(NSString *)primerText;
-(NSString *)surveyID;
-(char)showResults;
-(NSString *)trackingToken;
-(void)setTrackingToken:(NSString *)arg1 ;
@end

