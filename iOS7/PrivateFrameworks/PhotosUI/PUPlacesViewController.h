/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PLAssetContainerListChangeObserver-Protocol.h"
#import "PLAssetContainerObserver-Protocol.h"
#import "PlacesMapViewDelegateDetailsDelegate-Protocol.h"

@class MKMapView, NSArray, NSObject<PLDiagnosticsProvider>, PLPlaces, PLPlacesMapViewDelegate;

@interface PUPlacesViewController : UIViewController <PlacesMapViewDelegateDetailsDelegate, PLAssetContainerObserver, PLAssetContainerListChangeObserver>
{
    PLPlacesMapViewDelegate *_placesMapKitDelegate;
    PLPlaces *_places;
    struct NSObject *_allPhotosAlbum;
    MKMapView *_mapView;
    _Bool _networkingEnabled;
    _Bool _refreshMapAfterResume;
    _Bool _suspended;
    _Bool _allowDetails;
    NSArray *_locationAssets;
    NSObject<PLDiagnosticsProvider> *_diagnosticsProvider;
}

@property(retain, nonatomic) NSObject<PLDiagnosticsProvider> *diagnosticsProvider; // @synthesize diagnosticsProvider=_diagnosticsProvider;
@property(copy, nonatomic) NSArray *locationAssets; // @synthesize locationAssets=_locationAssets;
@property(nonatomic) _Bool allowDetails; // @synthesize allowDetails=_allowDetails;
- (void).cxx_destruct;
- (void)_handleReportButton:(id)arg1;
- (void)assetContainerDidChange:(id)arg1;
- (void)assetContainerListDidChange:(id)arg1;
- (void)displayDetailsForAlbum:(struct NSObject *)arg1;
- (void)_updateNavItem;
- (_Bool)pu_wantsTabBarVisible;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_setNetworkingEnabled:(_Bool)arg1;
- (void)dealloc;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidLoad;
- (id)init;

@end

