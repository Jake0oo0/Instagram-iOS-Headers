/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 29, 2016 at 3:36:45 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8E0CB1D4-3D23-4350-ABAD-ADD1AC46A9D0/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/IGDKDiffable.h>

@class NSArray, NSString;

@interface IGSearchNullStateSuggestionModel : NSObject <IGDKDiffable> {

	NSArray* _users;
	NSString* _diffIdentifier;

}

@property (nonatomic,readonly) NSArray * users;                      //@synthesize users=_users - In the implementation block
@property (nonatomic,retain) NSString * diffIdentifier;              //@synthesize diffIdentifier=_diffIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)diffIdentifier;
-(id)initWithUsers:(id)arg1 ;
-(void)setDiffIdentifier:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSArray *)users;
@end

