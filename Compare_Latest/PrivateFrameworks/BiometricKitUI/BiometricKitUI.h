/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface BiometricKitUI : NSObject
{
}

+ (id)sharedInstance;
- (id)_createEnrollUIViewController:(id)arg1;
- (id)_getDefaultEnrollUIViewController:(int)arg1 bundleNames:(id)arg2;
- (id)getEnrollUIViewController:(int)arg1 bundleName:(id)arg2;
- (id)getEnrollUIBundlesNames:(int)arg1;
- (id)systemDefaultEnrollUIBundleName:(int)arg1;

@end
