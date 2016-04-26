/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:38 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGSequence;

@interface IGPatchRange : NSObject {

	IGSequence* _start;
	IGSequence* _end;

}

@property (nonatomic,readonly) IGSequence * start;              //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) IGSequence * end;                //@synthesize end=_end - In the implementation block
-(id)unionRangeWithRange:(id)arg1 ;
-(char)containsSequence:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(IGSequence *)start;
-(IGSequence *)end;
-(id)initWithStart:(id)arg1 end:(id)arg2 ;
@end

