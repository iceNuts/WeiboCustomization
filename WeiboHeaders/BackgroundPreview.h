/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBViewController.h"

@class UIImage;

@interface BackgroundPreview : WBViewController
{
    int bgIndex;
    UIImage *imgBack;
}

@property(retain, nonatomic) UIImage *imgBack; // @synthesize imgBack;
@property(nonatomic) int bgIndex; // @synthesize bgIndex;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)setBackImageWithbg;
- (void)setBackImageWithPic;
- (void)setBackImage;
- (void)cancelAction:(id)arg1;
- (void)dismissModalViewController;
- (void)viewDidLoad;

@end
