/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EDReference;

@interface EDPane : NSObject
{
    double mXSplitPosition;
    double mYSplitPosition;
    EDReference *mTopLeftCell;
    int mActivePane;
}

+ (id)pane;
- (id)init;
- (void)dealloc;
- (double)xSplitPosition;
- (void)setXSplitPosition:(double)arg1;
- (double)ySplitPosition;
- (void)setYSplitPosition:(double)arg1;
- (id)topLeftCell;
- (void)setTopLeftCell:(id)arg1;
- (int)activePane;
- (void)setActivePane:(int)arg1;

@end

