/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBTableViewController.h"

#import "AppMuLanguageViewControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class MGTwitterEngine, UISegmentedControl, UISlider, UISwitch;

@interface AppSettingViewController : WBTableViewController <UIActionSheetDelegate, AppMuLanguageViewControllerDelegate>
{
    MGTwitterEngine *_twitter;
    int sectionCount;
    int rowCount;
    UISwitch *updateSwitch;
    UISwitch *soundSwitch;
    UISwitch *collapseWeiboSwitch;
    UISlider *imgSizeSlider;
    UISegmentedControl *fontSizeSegment;
    id <AppSettingViewControllerDelegate> delegate;
}

@property(nonatomic) id <AppSettingViewControllerDelegate> delegate; // @synthesize delegate;
- (void)fontSizeChanged:(id)arg1;
- (void)delImageDirectoryEnd;
- (void)delImageDirectory;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)dealloc;
- (void)onCollapsedSwitchChange:(id)arg1;
- (void)soundAction:(id)arg1;
- (void)imgSizeChange:(id)arg1;
- (void)reSetMuLanguage;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(int)arg1;

@end

