/*
* This header is generated by classdump-dyld 1.0
* on Monday, April 11, 2016 at 7:41:50 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F2F7650E-6416-4D13-A52F-83DEE7C62D71/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGGraphQLParsing.h>

@class NSString;

@interface IGGraphQLBusinessConversionParser : NSObject <IGGraphQLParsing> {

	NSString* _rootString;

}

@property (nonatomic,copy) NSString * rootString;                   //@synthesize rootString=_rootString - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)rootString;
-(id)parseGraphQLResponseWithResult:(id)arg1 error:(id*)arg2 ;
-(id)initWithRootString:(id)arg1 ;
-(void)setRootString:(NSString *)arg1 ;
@end

