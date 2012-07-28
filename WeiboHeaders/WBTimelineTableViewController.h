/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBTableViewController.h"

#import "PRLMTableViewWrapperDelegate-Protocol.h"
#import "WBTimelineTableViewCellDelegate-Protocol.h"

@class NSMutableArray, WBPRLMTableViewWrapper;

@interface WBTimelineTableViewController : WBTableViewController <PRLMTableViewWrapperDelegate, WBTimelineTableViewCellDelegate>
{
    NSMutableArray *_timelineItems;
    WBPRLMTableViewWrapper *prlmWrapper;
    int selectedTimelineItemIndex;
}

- (id)showUserProfileInController;
- (void)setShowUserProfileInController:(id)arg1;
- (id)configOfKey:(id)arg1;
- (void)setConfigKey:(id)arg1 withObject:(id)arg2;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (void)didPressAvatarOfUser:(id)arg1 inCell:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)rowHeightOfTimelineItem:(id)arg1 tableView:(id)arg2;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)handleTimelineItemDidRemoveNotification:(id)arg1;
- (void)configPRLMWrapper;

@end
