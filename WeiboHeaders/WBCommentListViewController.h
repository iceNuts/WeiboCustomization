/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBStatusBusinessViewController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WBCommentListTableViewCellDelegate-Protocol.h"
#import "WBProgressSheetDelegate-Protocol.h"

@class WBCommentEngine;

@interface WBCommentListViewController : WBStatusBusinessViewController <WBCommentListTableViewCellDelegate, UIActionSheetDelegate, UIAlertViewDelegate, WBProgressSheetDelegate>
{
    WBCommentEngine *commentEngine;
}

- (void)commentDidFinishSending:(id)arg1;
- (void)didPressReplyButtonInCell:(id)arg1;
- (void)cell:(id)arg1 didPressAvatarViewWithUser:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)heightForRowAtIndexPath:(id)arg1;
- (void)initStatusBusinessEngine;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
