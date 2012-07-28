/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBViewController.h"

#import "ActionSheetHintDelegate-Protocol.h"
#import "HotwordDelegate-Protocol.h"
#import "IFlyRecognizeControlDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"
#import "WBContactAtPersonViewControllerDelegate-Protocol.h"
#import "WBEmoticonScrollViewDelegate-Protocol.h"

@class ActionSheetHint, CommentBarView, IFlyRecognizeControl, NSString, UIBarButtonItem, UIButton, UIImageView, UILabel, UITextView, WBEmoticonScrollView, WBForwardTask;

@interface ForwardBlogViewController : WBViewController <UITextViewDelegate, HotwordDelegate, UIActionSheetDelegate, ActionSheetHintDelegate, WBEmoticonScrollViewDelegate, WBContactAtPersonViewControllerDelegate, IFlyRecognizeControlDelegate>
{
    UIBarButtonItem *_cancle;
    UIBarButtonItem *_send;
    UITextView *textEdit;
    UILabel *charsCount;
    UIButton *checkCurbtn;
    UILabel *CurUesrNameLabel;
    UIButton *CurUserNameLabelBtn;
    UIButton *checkOrigbtn;
    UILabel *OrigalUserNameLabel;
    UIButton *OrigalUserNameLabelBtn;
    BOOL bCommentToCur;
    BOOL bCommentToOrigal;
    UIImageView *imageClear;
    UIButton *charButton;
    CommentBarView *commentbar;
    NSString *defaultRtReason;
    BOOL isOrientation;
    UIButton *hideFaceBtn;
    BOOL isDisplaylabel;
    struct _NSRange rangeSel;
    BOOL isDisplayFace;
    BOOL isMove;
    struct CGPoint location;
    BOOL isDisplayWords;
    ActionSheetHint *progressSheet;
    NSString *_srcuid;
    NSString *_srcid;
    NSString *_user;
    UILabel *toField;
    NSString *_cmtuid;
    NSString *_cmtid;
    int viewFrom;
    NSString *curUserName;
    NSString *origUserName;
    int firstTime;
    WBEmoticonScrollView *emoticonScrollView;
    UIImageView *emoticonBackgroundImageView;
    BOOL isShowingEmoticon;
    WBForwardTask *task;
    IFlyRecognizeControl *_iFlyRecognizeControl;
    BOOL isRecording;
}

@property(retain, nonatomic) WBForwardTask *task; // @synthesize task;
@property(retain, nonatomic) NSString *defaultRtReason; // @synthesize defaultRtReason;
@property(nonatomic) int viewFrom; // @synthesize viewFrom;
@property(retain, nonatomic) UITextView *textEdit; // @synthesize textEdit;
- (void)onResult:(id)arg1 theResult:(id)arg2;
- (void)onRecognizeResult:(id)arg1;
- (void)onUpdateTextView:(id)arg1;
- (void)onRecognizeEnd:(id)arg1 theError:(int)arg2;
- (void)getVoiceBegin:(id)arg1;
- (id)initWithTask:(id)arg1;
- (void)readFromTask;
- (void)saveTask;
- (void)atPersonViewController:(id)arg1 didSelectAtPersonWithName:(id)arg2;
- (id)getReleaseCommentPostData:(id)arg1;
- (id)getReleaseBlogCommentURL:(id)arg1 srcuid:(id)arg2 srcid:(id)arg3;
- (void)setBlog_cmtid:(id)arg1;
- (void)setBlog_cmtuid:(id)arg1;
- (void)setForwardFlag:(id)arg1;
- (void)setBlogID:(id)arg1;
- (void)setBlogUID:(id)arg1;
- (void)setUser:(id)arg1;
- (void)setButtonNormal:(id)arg1 Highlight:(id)arg2;
- (void)HiddenFace;
- (void)DisplayFace;
- (void)emoticonDidSelect:(id)arg1;
- (void)setNavigatorButtons;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)displayTopic:(id)arg1;
- (void)displayHotwordCancelled;
- (void)displayHotword:(id)arg1;
- (void)displayTopicList;
- (void)displayAtPerson;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)setupEmoticonKeyboard;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)send;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)cancle;
- (void)setCharsCount;
- (void)checkOrigbtnpressed;
- (void)checkCurbtnpressed;
- (void)charButtonPressed:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)hideFacebtnPressed;
- (void)viewDidLoad;
- (void)setViewsLocationBasedOnInterfaceOrientation:(int)arg1;
- (void)keyboardChangedNotification:(id)arg1;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardDidShowNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (id)initWithCurName:(id)arg1 OrigName:(id)arg2;
- (void)dismissViewControllerAnimated:(BOOL)arg1;

@end
