/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableArray;

@interface AVCaptureStillImageOutputInternal : NSObject
{
    NSMutableArray *stillImageRequests;
    struct CGSize previewImageSize;
    unsigned long imageDataFormatType;
    long long imageMaxDataSize;
    float jpegQuality;
    BOOL jpegQualitySpecified;
    BOOL HDRCaptureEnabled;
    BOOL EV0CaptureEnabled;
    BOOL chromaNoiseReductionEnabled;
    BOOL suspendsVideoProcessingDuringCapture;
    NSDictionary *outputSettings;
    BOOL isCapturingPhoto;
    BOOL rawCaptureEnabled;
}

- (void)dealloc;
- (id)init;

@end

