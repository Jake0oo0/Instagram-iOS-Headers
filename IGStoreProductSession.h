/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:39 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/SKStoreProductViewControllerDelegate.h>

@class SKStoreProductViewController, NSDictionary, NSString;

@interface IGStoreProductSession : NSObject <SKStoreProductViewControllerDelegate> {

	int _status;
	SKStoreProductViewController* _productVC;
	NSDictionary* _parameters;

}

@property (assign,nonatomic) int status;                                            //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) SKStoreProductViewController * productVC;              //@synthesize productVC=_productVC - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                             //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentWithViewController:(id)arg1 ;
-(void)setProductVC:(SKStoreProductViewController *)arg1 ;
-(SKStoreProductViewController *)productVC;
-(void)dealloc;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)loadProductWithParameters:(id)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
@end

