/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ImageDownoaderDelegate-Protocol.h"

@class NSMutableDictionary;

@interface ImageLoader : NSObject <ImageDownoaderDelegate>
{
    NSMutableDictionary *_cache;
    NSMutableDictionary *_activeDownloads;
    NSMutableDictionary *_activeDownloadView;
    id <ImageLoaderDelegate> delegate;
}

+ (id)sharedLoader;
@property(nonatomic) id <ImageLoaderDelegate> delegate; // @synthesize delegate;
- (void)dealloc;
- (void)receivedImage:(id)arg1 sender:(id)arg2;
- (void)setImageWithURL:(id)arg1 toView:(id)arg2 delegate:(id)arg3;
- (void)setImageWithURL:(id)arg1 toView:(id)arg2;
- (void)setImageWithURL:(id)arg1 toButton:(id)arg2;
- (void)setImageWithURL:(id)arg1 toObject:(id)arg2;
- (void)setImage:(id)arg1 toObject:(id)arg2 withUrl:(id)arg3;
- (id)imageWithURL:(id)arg1;
- (id)init;

@end
