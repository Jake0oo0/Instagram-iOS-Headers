
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UITextField.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSMutableArray, NSMutableDictionary, IGTokenizerToken, UITapGestureRecognizer, NSString;

@interface IGTokenizerTextField : UITextField <UIGestureRecognizerDelegate> {

	NSMutableArray* _tokens;
	NSMutableDictionary* _tokensToLabels;
	IGTokenizerToken* _selectedToken;
	UITapGestureRecognizer* _tokenTapGestureRecognizer;
	CGPoint _cursorOrigin;

}

@property (assign,nonatomic,__weak) id<IGTokenizerTextFieldDelegate> delegate; 
@property (nonatomic,retain) NSMutableArray * tokens;                                         //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * tokensToLabels;                            //@synthesize tokensToLabels=_tokensToLabels - In the implementation block
@property (nonatomic,retain) IGTokenizerToken * selectedToken;                                //@synthesize selectedToken=_selectedToken - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tokenTapGestureRecognizer;              //@synthesize tokenTapGestureRecognizer=_tokenTapGestureRecognizer - In the implementation block
@property (assign,nonatomic) CGPoint cursorOrigin;                                            //@synthesize cursorOrigin=_cursorOrigin - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)labelForToken:(id)arg1 ;
+(id)tokenTextColor;
+(id)tokenBackgroundColor;
+(id)tokenSelectedBackgroundColor;
+(id)tokenSelectedTextColor;
-(void)didChange;
-(NSMutableDictionary *)tokensToLabels;
-(void)setCursorOrigin:(CGPoint)arg1 ;
-(void)resetSelectedToken;
-(CGPoint)cursorOrigin;
-(IGTokenizerToken *)selectedToken;
-(void)removeToken:(id)arg1 ;
-(void)selectToken:(id)arg1 ;
-(UITapGestureRecognizer *)tokenTapGestureRecognizer;
-(void)setSelectedToken:(IGTokenizerToken *)arg1 ;
-(void)setTokensToLabels:(NSMutableDictionary *)arg1 ;
-(void)setTokenTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)currentTokens;
-(void)addToken:(id)arg1 ;
-(void)didTap:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setText:(id)arg1 ;
-(CGRect)editingRectForBounds:(CGRect)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(void)deleteBackward;
-(void)begin;
-(CGRect)textRectForBounds:(CGRect)arg1 ;
-(void)done;
-(CGRect)placeholderRectForBounds:(CGRect)arg1 ;
-(NSMutableArray *)tokens;
-(void)setTokens:(NSMutableArray *)arg1 ;
-(void)resetSearch;
@end

