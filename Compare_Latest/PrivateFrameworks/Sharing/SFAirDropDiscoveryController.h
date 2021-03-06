/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIActionSheetDelegate-Protocol.h"

@class UIActionSheet;

@interface SFAirDropDiscoveryController : NSObject <UIActionSheetDelegate>
{
    _Bool _isVisible;
    struct __SFOperation *_controller;
    UIActionSheet *_actionSheet;
    long long _discoverableMode;
    id <SFAirDropDiscoveryControllerDelegate> _delegate;
    id <SFAirDropDiscoveryActionSheetDelegate> _actionSheetDelegate;
}

@property __weak id <SFAirDropDiscoveryActionSheetDelegate> actionSheetDelegate; // @synthesize actionSheetDelegate=_actionSheetDelegate;
@property __weak id <SFAirDropDiscoveryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)discoverableModeToString:(long long)arg1;
- (long long)operationDiscoverableModeToInteger:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(nonatomic) long long discoverableMode;
- (id)discoverableModeActionSheet;
- (void)dealloc;
@property(readonly, getter=isVisible) _Bool visible;
- (void)handleOperationCallback:(struct __SFOperation *)arg1 event:(long long)arg2 withResults:(id)arg3;
- (id)init;

@end

