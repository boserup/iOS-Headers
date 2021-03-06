/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSString, NSURL;

// Not exported
@interface NSSubstituteWebResource : NSObject
{
    NSData *_data;
    NSURL *_url;
    NSString *_mimeType;
    NSString *_textEncodingName;
    NSString *_frameName;
}

- (id)webResource;
- (id)frameName;
- (id)textEncodingName;
- (id)MIMEType;
- (id)URL;
- (id)data;
- (void)dealloc;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;
- (Class)_webResourceClass;

@end

