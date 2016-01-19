/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, January 19, 2016 at 3:14:57 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/4DC55608-3697-420B-B226-BE8BA2A1BD0A/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Instagram/Instagram-Structs.h>
@interface IGTimestampContainer : NSObject {

	unordered_map<std::__1::basic_string<char>, double, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, double> > >* _mappedTimestamps;
	set<std::__1::pair<double, std::__1::basic_string<char> >, std::__1::less<std::__1::pair<double, std::__1::basic_string<char> > >, std::__1::allocator<std::__1::pair<double, std::__1::basic_string<char> > > >* _orderedTimestamps;

}
-(void)setTimestamp:(double)arg1 forKey:(id)arg2 ;
-(double)timestampForKey:(id)arg1 ;
-(void)insertTimestampsFromDictionary:(id)arg1 ;
-(void)removeTimestampForKey:(id)arg1 ;
-(void)removeAllTimestamps;
-(id)description;
-(id)dictionaryRepresentation;
@end

