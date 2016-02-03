/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:36 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IGAnalyticsLogFileManager : NSObject {

	NSString* _logFileDirectory;

}

@property (nonatomic,readonly) NSString * logFileDirectory;              //@synthesize logFileDirectory=_logFileDirectory - In the implementation block
-(void)setLogFileDirectory:(NSString *)arg1 ;
-(void)deleteLogFile:(id)arg1 ;
-(id)initWithLogFileDirectory:(id)arg1 ;
-(id)allLogFiles;
-(void)deleteLogFiles:(id)arg1 keepNewestFiles:(unsigned)arg2 ;
-(char)isBinaryFile:(id)arg1 ;
-(id)createLogFileWithData:(id)arg1 binary:(char)arg2 ;
-(NSString *)logFileDirectory;
@end

