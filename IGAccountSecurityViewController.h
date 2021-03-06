
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGChangePhoneNumberViewControllerDelegate.h>
#import <Instagram/IGConfirmPhoneNumberViewControllerDelegate.h>

@class NSString, NSArray, IGGroupedTableViewFooterView, IGSwitch;

@interface IGAccountSecurityViewController : IGGroupedTableViewController <IGChangePhoneNumberViewControllerDelegate, IGConfirmPhoneNumberViewControllerDelegate> {

	char _hasTwoFactor;
	char _hasPhoneNumber;
	NSString* _countryNumber;
	NSString* _phoneNumber;
	NSArray* _backupCodes;
	IGGroupedTableViewFooterView* _twoFactorFooterView;
	IGGroupedTableViewFooterView* _backupAccessFooterView;
	IGSwitch* _twoFactorSwitch;
	int _dataState;
	int _twoFactorState;

}

@property (nonatomic,retain) NSString * countryNumber;                                           //@synthesize countryNumber=_countryNumber - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                                             //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSArray * backupCodes;                                              //@synthesize backupCodes=_backupCodes - In the implementation block
@property (nonatomic,retain) IGGroupedTableViewFooterView * twoFactorFooterView;                 //@synthesize twoFactorFooterView=_twoFactorFooterView - In the implementation block
@property (nonatomic,retain) IGGroupedTableViewFooterView * backupAccessFooterView;              //@synthesize backupAccessFooterView=_backupAccessFooterView - In the implementation block
@property (nonatomic,retain) IGSwitch * twoFactorSwitch;                                         //@synthesize twoFactorSwitch=_twoFactorSwitch - In the implementation block
@property (assign,nonatomic) int dataState;                                                      //@synthesize dataState=_dataState - In the implementation block
@property (assign,nonatomic) int twoFactorState;                                                 //@synthesize twoFactorState=_twoFactorState - In the implementation block
@property (assign,nonatomic) char hasTwoFactor;                                                  //@synthesize hasTwoFactor=_hasTwoFactor - In the implementation block
@property (assign,nonatomic) char hasPhoneNumber;                                                //@synthesize hasPhoneNumber=_hasPhoneNumber - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)fetchUserData;
-(void)updateTwoFactorSettings:(char)arg1 ;
-(void)setTwoFactorSwitch:(IGSwitch *)arg1 ;
-(void)setTwoFactorState:(int)arg1 ;
-(int)dataState;
-(IGSwitch *)twoFactorSwitch;
-(char)hasTwoFactor;
-(void)setDataState:(int)arg1 ;
-(void)adjustTableViewForDataState;
-(void)setHasPhoneNumber:(char)arg1 ;
-(void)setHasTwoFactor:(char)arg1 ;
-(char)hasPhoneNumber;
-(void)startAddPhoneNumberFlow;
-(void)sendTwoFactorSMS;
-(void)cancelTwoFactor;
-(int)twoFactorState;
-(void)startConfirmPhoneNumberFlow:(id)arg1 ;
-(void)configureTwoFactorCell:(id)arg1 forRow:(int)arg2 ;
-(void)configureBackupAccessCell:(id)arg1 forRow:(int)arg2 ;
-(IGGroupedTableViewFooterView *)twoFactorFooterView;
-(IGGroupedTableViewFooterView *)backupAccessFooterView;
-(void)setTwoFactorFooterView:(IGGroupedTableViewFooterView *)arg1 ;
-(void)setBackupAccessFooterView:(IGGroupedTableViewFooterView *)arg1 ;
-(NSArray *)backupCodes;
-(void)setBackupCodes:(NSArray *)arg1 ;
-(NSString *)countryNumber;
-(void)setCountryNumber:(NSString *)arg1 ;
-(void)changePhoneNumberViewController:(id)arg1 doneEditingWithCountryNumber:(id)arg2 phoneNumber:(id)arg3 contactPreference:(unsigned)arg4 ;
-(void)confirmPhoneNumberViewControllerWantsToChangePhoneNumber:(id)arg1 ;
-(void)confirmPhoneNumberViewControllerWantsConfirmationCodeResent:(id)arg1 ;
-(void)confirmPhoneNumberViewControllerDidConfirmPhoneNumber:(id)arg1 withResponse:(id)arg2 ;
-(void)dataFetchedWithDictionary:(id)arg1 ;
-(void)dataFetchFailed:(id)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

