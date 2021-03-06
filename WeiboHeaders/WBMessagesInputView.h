/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "HPGrowingTextViewDelegate-Protocol.h"

@class HPGrowingTextView, UIButton, UILabel, WBRoundedImageView;

@interface WBMessagesInputView : UIView <HPGrowingTextViewDelegate>
{
    id <WBMessagesInputViewDelegate> delegate;
    int mediaMode;
    WBRoundedImageView *imageView;
    HPGrowingTextView *textView;
    UIButton *toggleToolbarButton;
    UILabel *wordsCountLabel;
    UIButton *clearTextButton;
    UIButton *sendButton;
    UIButton *recordButton;
}

@property(readonly, nonatomic) UIButton *recordButton; // @synthesize recordButton;
@property(readonly, nonatomic) UIButton *sendButton; // @synthesize sendButton;
@property(readonly, nonatomic) UIButton *clearTextButton; // @synthesize clearTextButton;
@property(readonly, nonatomic) UILabel *wordsCountLabel; // @synthesize wordsCountLabel;
@property(readonly, nonatomic) UIButton *toggleToolbarButton; // @synthesize toggleToolbarButton;
@property(readonly, nonatomic) HPGrowingTextView *textView; // @synthesize textView;
@property(readonly, nonatomic) WBRoundedImageView *imageView; // @synthesize imageView;
@property(nonatomic) int mediaMode; // @synthesize mediaMode;
@property(nonatomic) id <WBMessagesInputViewDelegate> delegate; // @synthesize delegate;
- (void)dealloc;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)updateControls;
- (BOOL)growingTextViewShouldBackspace:(id)arg1;
- (BOOL)growingTextViewShouldReturn:(id)arg1;
- (void)growingTextViewDidChange:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)hideAudioControls;
- (void)showAudioControls;
- (id)inputText;
- (void)setInputText:(id)arg1;
- (id)inputImage;
- (void)setInputImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

