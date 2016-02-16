/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 16, 2016 at 3:15:52 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/C13E072C-E6C1-44DA-8A86-89C97396B2E7/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(NSArray *)emailAddresses;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)description;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(id)asDictionary;
-(NSArray *)phoneNumbers;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
@end

