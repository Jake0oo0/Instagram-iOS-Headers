/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:35 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFMultipartFormData
@required
-(void)appendPartWithFormData:(id)arg1 name:(id)arg2;
-(char)appendPartWithFileURL:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4 error:(id*)arg5;
-(void)appendPartWithHeaders:(id)arg1 body:(id)arg2;
-(char)appendPartWithFileURL:(id)arg1 name:(id)arg2 error:(id*)arg3;
-(void)appendPartWithInputStream:(id)arg1 name:(id)arg2 fileName:(id)arg3 length:(long long)arg4 mimeType:(id)arg5;
-(void)appendPartWithFileData:(id)arg1 name:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4;
-(void)throttleBandwidthWithPacketSize:(unsigned)arg1 delay:(double)arg2;

@end

