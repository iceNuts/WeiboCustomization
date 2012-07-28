/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBTimelineTableViewController.h"

#import "WBMessageCenterProtocol-Protocol.h"
#import "WBSkinning-Protocol.h"

@class UIViewController, WBMessageCenterEngine;

@interface WBMessageCenterNoticeViewController : WBTimelineTableViewController <WBMessageCenterProtocol, WBSkinning>
{
    UIViewController *rootViewController;
    WBMessageCenterEngine *noticeEngine;
}

@property(retain, nonatomic) WBMessageCenterEngine *noticeEngine; // @synthesize noticeEngine;
@property(nonatomic) UIViewController *rootViewController; // @synthesize rootViewController;
- (void)didTriggerLoadMoreInWrapper:(id)arg1;
- (void)didTriggerPullRefreshInWrapper:(id)arg1;
- (void)didPressAvatarOfUser:(id)arg1 inCell:(id)arg2;
- (void)didSelectStatusInTableView:(id)arg1;
- (void)appLanguageDidChangeNotification:(id)arg1;
- (void)forceReloadData;
- (void)onBringToFront;
- (void)loadDataFromCache;
- (void)loadMoreData;
- (void)reloadData;
- (BOOL)hasNewOrNoData;
- (BOOL)hasNoData;
- (BOOL)hasNewData;
- (void)reloadUIElements;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithRootViewController:(id)arg1;

@end
