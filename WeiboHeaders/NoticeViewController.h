/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBTableViewController.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIActivityIndicatorView, UILabel, UIPickerView, UISwitch, UIToolbar;

@interface NoticeViewController : WBTableViewController <UIPickerViewDelegate, UIPickerViewDataSource>
{
    UILabel *loadLabel;
    UISwitch *noticeSwitch_comment;
    UISwitch *noticeSwitch_me;
    UISwitch *noticeSwitch_priv;
    UISwitch *noticeSwitch_new;
    UISwitch *noticeSwitch_commentAt;
    UIPickerView *m_picker;
    NSMutableArray *m_array_start;
    NSMutableArray *m_array_end;
    NSString *_startTime;
    NSString *_endTime;
    NSString *_shareURL;
    UIToolbar *toolBar;
    UIActivityIndicatorView *m_indicatorView;
    BOOL isFailed;
    unsigned int pushType;
}

- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)setTimeNotice;
- (void)viewDidLoad;
- (void)successFul;
- (void)creatLoadLabel;
- (void)sendSetting;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (id)init;
- (unsigned int)getPushTypeFromUI;

@end

