/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IMHandle, NSAttributedString, NSString, UIImage;

@interface CKEntity : NSObject
{
    IMHandle *_handle;
}

+ (id)copyEntityForAddressString:(id)arg1;
+ (id)_copyEntityForAddressString:(id)arg1 onAccount:(id)arg2;
@property(retain, nonatomic) IMHandle *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) NSAttributedString *attributedTranscriptText;
@property(readonly, nonatomic) UIImage *transcriptContactImage;
@property(readonly, nonatomic) NSString *textVibrationIdentifier;
@property(readonly, nonatomic) NSString *textToneIdentifier;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *fullName;
@property(readonly, nonatomic) NSString *originalAddress;
@property(readonly, nonatomic) NSString *rawAddress;
@property(readonly, nonatomic) int propertyType;
@property(readonly, nonatomic) int identifier;
@property(readonly, nonatomic) void *abRecord;
@property(readonly, nonatomic) IMHandle *defaultIMHandle;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithIMHandle:(id)arg1;

@end

