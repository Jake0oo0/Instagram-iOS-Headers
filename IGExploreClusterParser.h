/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:39 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGNetworkParser.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface IGExploreClusterParser : NSObject <IGNetworkParser> {

	NSObject*<OS_dispatch_queue> _parsingQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> parsingQueue;              //@synthesize parsingQueue=_parsingQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)parsingQueue;
-(id)parsedObjectFromResponse:(id)arg1 ;
-(void)setParsingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
@end

