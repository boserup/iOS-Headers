/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVQueue, NSMutableArray;

@interface AVPlaybackQueue : NSObject
{
    id _delegate;
    AVQueue *_avItemQueue;
    NSMutableArray *_pbItemQueue;
    struct OpaqueFigPlayer *_figPlayer;
    int _ignoreAVQueueModifications;
    BOOL _hasBuiltPlaybackQueue;
    BOOL _waitingToAddFirstItem;
    int _avQueueTransactionCount;
    int _repeatMode;
}

- (id)initWithDelegate:(id)arg1 figPlayer:(struct OpaqueFigPlayer *)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)checkQueueConsistency;
- (void)clearPBItemQueueFromIndex:(int)arg1;
- (void)fillInPBItemQueue;
- (void)setAVItemQueue:(id)arg1;
- (void)ensurePlaybackQueue;
- (id)currentPlaybackItem;
- (void)setRepeatMode:(int)arg1;
- (void)updateBookmarkTimesIncludeFirst:(BOOL)arg1 updateFirst:(BOOL)arg2;
- (void)beginAVQueueTransaction;
- (void)endAVQueueTransaction;
- (void)queueItemWasAddedNotification:(id)arg1;
- (void)queueItemWillBeRemovedNotification:(id)arg1;
- (void)removeItemsNoLongerInPlayQueue;
- (void)scheduleRemoveItemsNoLongerInPlayQueue;
- (void)playbackItemWasRemovedFromPlayQueue:(id)arg1;
- (void)ensurePlaybackQueueImmed;
- (void)playbackItemInspectionComplete:(id)arg1;

@end
