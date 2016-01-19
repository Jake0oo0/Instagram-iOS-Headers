/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:04 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/SKPaymentTransactionObserver.h>

@class NSString;

@interface FBSDKPaymentObserver : NSObject <SKPaymentTransactionObserver> {

	char _observingTransactions;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)startObservingTransactions;
+(void)stopObservingTransactions;
+(id)singleton;
-(void)startObservingTransactions;
-(void)stopObservingTransactions;
-(void)handleTransaction:(id)arg1 ;
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2 ;
-(id)init;
@end

