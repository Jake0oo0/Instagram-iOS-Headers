

@class IGSponsoredPostInfo, IGFeedItem, IGDirectResponseInfo, NSString;

@interface IGAdPreviewFeedItemWrapper : NSObject {

	IGSponsoredPostInfo* _sponsoredPostInfo;
	IGFeedItem* _feedItem;
	IGDirectResponseInfo* _directResponseInfo;
	int _directResponseStyle;
	NSString* _actionText;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;                                  //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) IGSponsoredPostInfo * sponsoredPostInfo;                //@synthesize sponsoredPostInfo=_sponsoredPostInfo - In the implementation block
@property (nonatomic,readonly) IGDirectResponseInfo * directResponseInfo;              //@synthesize directResponseInfo=_directResponseInfo - In the implementation block
@property (nonatomic,readonly) int directResponseStyle;                                //@synthesize directResponseStyle=_directResponseStyle - In the implementation block
@property (nonatomic,readonly) NSString * actionText;                                  //@synthesize actionText=_actionText - In the implementation block
-(IGFeedItem *)feedItem;
-(id)spondoredInfoFromAdViewModel:(id)arg1 ;
-(id)directResponseInfoFromAdViewModel:(id)arg1 ;
-(id)initWithFeedItem:(id)arg1 adViewModel:(id)arg2 ;
-(IGSponsoredPostInfo *)sponsoredPostInfo;
-(char)isDirectResponse;
-(IGDirectResponseInfo *)directResponseInfo;
-(int)directResponseStyle;
-(NSString *)actionText;
-(id)valueForKey:(id)arg1 ;
-(char)isKindOfClass:(Class)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)items;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end
