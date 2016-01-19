/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:52 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

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
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)loadProductWithParameters:(id)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
@end

