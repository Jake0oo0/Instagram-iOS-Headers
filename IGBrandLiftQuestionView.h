
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol IGBrandLiftQuestionViewDelegate;
@class IGBrandLiftQuestion, NSString, UIView, UITableView, NSMutableSet, UITableViewCell;

@interface IGBrandLiftQuestionView : UIView <UITableViewDataSource, UITableViewDelegate> {

	id<IGBrandLiftQuestionViewDelegate> _delegate;
	IGBrandLiftQuestion* _question;
	NSString* _headerText;
	UIView* _headerView;
	UITableView* _tableView;
	NSMutableSet* _selectedAnswers;
	UITableViewCell* _nextCell;

}

@property (nonatomic,retain) IGBrandLiftQuestion * question;                                   //@synthesize question=_question - In the implementation block
@property (nonatomic,copy) NSString * headerText;                                              //@synthesize headerText=_headerText - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                              //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                          //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSMutableSet * selectedAnswers;                                   //@synthesize selectedAnswers=_selectedAnswers - In the implementation block
@property (nonatomic,retain) UITableViewCell * nextCell;                                       //@synthesize nextCell=_nextCell - In the implementation block
@property (assign,nonatomic,__weak) id<IGBrandLiftQuestionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelectedAnswers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)selectedAnswers;
-(IGBrandLiftQuestion *)question;
-(id)answerForIndexPath:(id)arg1 ;
-(char)nextButtonEnabled;
-(id)initWithQuestion:(id)arg1 headerString:(id)arg2 frame:(CGRect)arg3 ;
-(void)setQuestion:(IGBrandLiftQuestion *)arg1 ;
-(void)setNextCell:(UITableViewCell *)arg1 ;
-(void)setDelegate:(id<IGBrandLiftQuestionViewDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGBrandLiftQuestionViewDelegate>)delegate;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(UITableViewCell *)nextCell;
@end

