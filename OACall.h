/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:46 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OACallDelegate;
@class NSURL, NSString, NSArray, NSDictionary, NSObject, OADataFetcher, OAMutableURLRequest, OAServiceTicket;

@interface OACall : NSObject {

	NSURL* url;
	NSString* method;
	NSArray* parameters;
	NSDictionary* files;
	NSObject*<OACallDelegate> delegate;
	SEL finishedSelector;
	OADataFetcher* fetcher;
	OAMutableURLRequest* request;
	OAServiceTicket* ticket;

}

@property (readonly) NSURL * url; 
@property (readonly) NSString * method; 
@property (readonly) NSArray * parameters; 
@property (readonly) NSDictionary * files; 
@property (nonatomic,retain) OAServiceTicket * ticket; 
-(id)initWithURL:(id)arg1 method:(id)arg2 parameters:(id)arg3 files:(id)arg4 ;
-(id)initWithURL:(id)arg1 method:(id)arg2 parameters:(id)arg3 ;
-(void)callFailed:(id)arg1 withError:(id)arg2 ;
-(void)callFinished:(id)arg1 withData:(id)arg2 ;
-(id)initWithURL:(id)arg1 parameters:(id)arg2 ;
-(id)initWithURL:(id)arg1 parameters:(id)arg2 files:(id)arg3 ;
-(void)perform:(id)arg1 token:(id)arg2 realm:(id)arg3 delegate:(id)arg4 didFinish:(SEL)arg5 ;
-(void)dealloc;
-(id)init;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 ;
-(NSString *)method;
-(OAServiceTicket *)ticket;
-(void)setTicket:(OAServiceTicket *)arg1 ;
-(id)initWithURL:(id)arg1 method:(id)arg2 ;
-(NSArray *)parameters;
-(NSDictionary *)files;
@end

