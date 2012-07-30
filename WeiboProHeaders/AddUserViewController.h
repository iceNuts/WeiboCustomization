/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "UserMailInfoViewDelegate-Protocol.h"

@class MGTwitterEngine_WeiboV4, NSArray, NSMutableArray, UITextField, UserMailInfoView;

@interface AddUserViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, UserMailInfoViewDelegate>
{
    MGTwitterEngine_WeiboV4 *_engine;
    NSArray *userArray;
    NSArray *userInfoArray;
    UITextField *input_MailTextField;
    UITextField *input_PasswordTextField;
    _Bool loginStatus;
    _Bool isAccredit;
    UserMailInfoView *mailInfoView;
    NSMutableArray *allMailInfoArray;
}

@property(nonatomic) _Bool isAccredit; // @synthesize isAccredit;
@property(nonatomic) _Bool loginStatus; // @synthesize loginStatus;
- (void)requestFailed:(id)arg1 withError:(id)arg2;
- (void)requestSucceeded:(id)arg1;
- (void)userInfoReceived:(id)arg1 forRequest:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)hideViewController;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)mailTextFieldExit;
- (void)selectedMailInfo:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)addUserAcition;
- (void)mailTextFieldFirstResponder;
- (void)onCancelTouched;
- (void)viewDidLoad;

@end
