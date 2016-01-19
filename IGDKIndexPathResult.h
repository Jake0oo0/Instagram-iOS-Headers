/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:15:03 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface IGDKIndexPathResult : NSObject {

	NSArray* _inserts;
	NSArray* _deletes;
	NSArray* _updates;
	NSArray* _moves;

}

@property (nonatomic,copy,readonly) NSArray * inserts;              //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,copy,readonly) NSArray * deletes;              //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * updates;              //@synthesize updates=_updates - In the implementation block
@property (nonatomic,copy,readonly) NSArray * moves;                //@synthesize moves=_moves - In the implementation block
-(NSArray *)moves;
-(id)initWithInserts:(id)arg1 deletes:(id)arg2 updates:(id)arg3 moves:(id)arg4 ;
-(NSArray *)inserts;
-(NSArray *)deletes;
-(char)hasChanges;
-(id)description;
-(NSArray *)updates;
@end

