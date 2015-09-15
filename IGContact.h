/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, September 15, 2015 at 5:29:39 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/78EC956B-7ED8-4B50-8025-C2B1976EEC28/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface IGContact : NSObject {

	NSString* _firstName;
	NSString* _lastName;
	NSArray* _phoneNumbers;
	NSArray* _emailAddresses;

}

@property (nonatomic,copy) NSString * firstName;                    //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                     //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSArray * phoneNumbers;                //@synthesize phoneNumbers=_phoneNumbers - In the implementation block
@property (nonatomic,retain) NSArray * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
-(id)initWithContactRef:(void*)arg1 ;
-(void)setPhoneNumbers:(NSArray *)arg1 ;
-(id)description;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)asDictionary;
-(NSArray *)phoneNumbers;
-(NSArray *)emailAddresses;
-(void)setEmailAddresses:(NSArray *)arg1 ;
@end

