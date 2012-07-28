/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WBViewController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class AlterErrorShowView, UIButton;

@interface AboutViewController : WBViewController <UIWebViewDelegate, UIAlertViewDelegate>
{
    BOOL isAbout;
    AlterErrorShowView *alteView;
    UIButton *enterpriseUserButton;
    UIButton *personalUserButton;
}

@property(nonatomic) BOOL isAbout; // @synthesize isAbout;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)userButtonPressed:(id)arg1;
- (void)viewDidLoad;
- (id)init;

@end
