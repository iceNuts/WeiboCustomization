/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBHintBoard.h"

@class UILabel;

@interface WBHomeNewStatusHintBoard : WBHintBoard
{
    UILabel *countLabel;
}

- (void)dealloc;
- (void)showHintWithNewStatusCount:(unsigned int)arg1;
- (void)initHintLabel;
- (void)initCloseButton;
- (void)reloadUIElements;
- (void)appLanguageDidChange:(id)arg1;

@end

