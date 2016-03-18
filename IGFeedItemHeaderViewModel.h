

@class NSString, IGFeedItem, IGUser, NSDate, CLLocation, IGLocation;

@interface IGFeedItemHeaderViewModel : NSObject {

	char _showSponsoredPostIcon;
	char _editing;
	NSString* _sponsoredPostLabel;
	IGFeedItem* _feedItem;
	IGUser* _user;
	NSDate* _takenAt;
	NSString* _primaryName;
	CLLocation* _mediaCoord;
	int _accessoryViewType;
	NSString* _customizableButtonTitle;
	IGLocation* _location;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;                           //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) char editing;                                    //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) IGUser * user;                                     //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) NSDate * takenAt;                                  //@synthesize takenAt=_takenAt - In the implementation block
@property (nonatomic,retain) NSString * primaryName;                            //@synthesize primaryName=_primaryName - In the implementation block
@property (nonatomic,retain) CLLocation * mediaCoord;                           //@synthesize mediaCoord=_mediaCoord - In the implementation block
@property (nonatomic,readonly) NSString * locationName; 
@property (nonatomic,readonly) char showSponsoredPostIcon;                      //@synthesize showSponsoredPostIcon=_showSponsoredPostIcon - In the implementation block
@property (nonatomic,readonly) NSString * sponsoredPostLabel;                   //@synthesize sponsoredPostLabel=_sponsoredPostLabel - In the implementation block
@property (nonatomic,readonly) int accessoryViewType;                           //@synthesize accessoryViewType=_accessoryViewType - In the implementation block
@property (nonatomic,readonly) NSString * customizableButtonTitle;              //@synthesize customizableButtonTitle=_customizableButtonTitle - In the implementation block
@property (nonatomic,retain) IGLocation * location;                             //@synthesize location=_location - In the implementation block
-(CLLocation *)mediaCoord;
-(IGFeedItem *)feedItem;
-(id)initWithFeedItem:(id)arg1 configuration:(id)arg2 ;
-(int)accessoryViewType;
-(NSString *)sponsoredPostLabel;
-(char)showSponsoredPostIcon;
-(NSDate *)takenAt;
-(NSString *)customizableButtonTitle;
-(id)initWithUser:(id)arg1 location:(id)arg2 takenAt:(id)arg3 mediaCoord:(id)arg4 editing:(char)arg5 ;
-(void)setTakenAt:(NSDate *)arg1 ;
-(void)setMediaCoord:(CLLocation *)arg1 ;
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(NSString *)primaryName;
-(char)editing;
-(IGLocation *)location;
-(void)setLocation:(IGLocation *)arg1 ;
-(void)setPrimaryName:(NSString *)arg1 ;
-(char)hasUserLocation;
-(char)hasLocation;
-(NSString *)locationName;
@end
