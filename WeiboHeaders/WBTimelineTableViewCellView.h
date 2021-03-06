/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class WBContentImageView, WBTimelineTableViewCellDrawingContext, WBUserScreenNameLabel;

@interface WBTimelineTableViewCellView : UIView
{
    WBTimelineTableViewCellDrawingContext *drawingContext;
    WBUserScreenNameLabel *screenNameLabel;
    WBContentImageView *photoImageView;
    BOOL highlighted;
    id <WBTimelineTableViewCellViewDelegate> delegate;
}

+ (void)renderDrawingContext:(id)arg1;
+ (struct _ContentMeasures)contentMeasures;
+ (void)initialize;
@property(nonatomic) id <WBTimelineTableViewCellViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted;
@property(retain, nonatomic) WBTimelineTableViewCellDrawingContext *drawingContext; // @synthesize drawingContext;
@property(readonly, nonatomic) WBContentImageView *photoImageView; // @synthesize photoImageView;
- (void)photoImageViewPressed:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initScreenNameLabel;
- (void)initPhotoImageView;

@end

