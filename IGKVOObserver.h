/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:01 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IGKVOObserver : NSObject {

	id _object;
	NSString* _keypath;

}

@property (nonatomic,readonly) id object;                       //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSString * keypath;              //@synthesize keypath=_keypath - In the implementation block
-(id)initWithObject:(id)arg1 keypath:(id)arg2 ;
-(id)observeOnMain:(/*^block*/id)arg1 ;
-(id)observeWithOptions:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(id)observeWithOptions:(unsigned)arg1 block:(/*^block*/id)arg2 deliverOn:(id)arg3 ;
-(id)observeOnMainWithOptions:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(NSString *)keypath;
-(id)observe:(/*^block*/id)arg1 deliverOn:(id)arg2 ;
-(id)object;
-(id)observe:(/*^block*/id)arg1 ;
@end

