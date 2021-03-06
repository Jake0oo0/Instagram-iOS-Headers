

@class IGAdsManagerDataProvider, IGGraphQLService;

@interface IGAdsManagerDeleteAdHandler : NSObject {

	IGAdsManagerDataProvider* _adsDataProvider;

}

@property (readonly) IGGraphQLService * graphQLService; 
@property (nonatomic,readonly) IGAdsManagerDataProvider * adsDataProvider;              //@synthesize adsDataProvider=_adsDataProvider - In the implementation block
-(IGGraphQLService *)graphQLService;
-(void)updateFeedItemForDeletedPromotionStateWithAdViewModel:(id)arg1 ;
-(IGAdsManagerDataProvider *)adsDataProvider;
-(void)performDeleteForAd:(id)arg1 successCompletion:(/*^block*/id)arg2 errorCompletion:(/*^block*/id)arg3 ;
-(void)performDeleteForFeedItem:(id)arg1 successCompletion:(/*^block*/id)arg2 errorCompletion:(/*^block*/id)arg3 ;
-(id)init;
@end

