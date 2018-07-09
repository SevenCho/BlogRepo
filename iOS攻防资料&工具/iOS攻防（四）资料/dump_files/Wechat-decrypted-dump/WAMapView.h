//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QMapView.h"

#import "QMapViewDelegate.h"
#import "WAMapAnnotationViewDelegate.h"

@class MMHeadImageAnnotation, NSMutableArray, NSString, WABaseView, WAMapViewGestureListener;

@interface WAMapView : QMapView <QMapViewDelegate, WAMapAnnotationViewDelegate>
{
    BOOL _showUserLocation;
    unsigned long _mapId;
    id <WAMapViewDelegate> _mapDelegate;
    float _scaleToFit;
    MMHeadImageAnnotation *_headAnnotation;
    NSMutableArray *_mapControls;
    WAMapViewGestureListener *_gestureListener;
    WABaseView *_firstBaseView;
}

@property(nonatomic) BOOL showUserLocation; // @synthesize showUserLocation=_showUserLocation;
@property(nonatomic) __weak WABaseView *firstBaseView; // @synthesize firstBaseView=_firstBaseView;
@property(retain, nonatomic) WAMapViewGestureListener *gestureListener; // @synthesize gestureListener=_gestureListener;
@property(retain, nonatomic) NSMutableArray *mapControls; // @synthesize mapControls=_mapControls;
@property(retain, nonatomic) MMHeadImageAnnotation *headAnnotation; // @synthesize headAnnotation=_headAnnotation;
@property(nonatomic) float scaleToFit; // @synthesize scaleToFit=_scaleToFit;
@property(nonatomic) __weak id <WAMapViewDelegate> mapDelegate; // @synthesize mapDelegate=_mapDelegate;
@property(nonatomic) unsigned long mapId; // @synthesize mapId=_mapId;
- (void).cxx_destruct;
- (void)enterBackground:(BOOL)arg1;
- (void)addSubview:(id)arg1;
- (void)onMapAnnotationViewTap:(id)arg1;
- (void)calloutClickAction:(id)arg1;
- (void)onControlClick:(id)arg1;
- (void)gestureAction:(id)arg1;
- (void)addMapImageControl:(id)arg1;
- (void)addMapButtonControl:(id)arg1;
- (void)clearControls;
- (id)getMapMarker:(int)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 gesture:(BOOL)arg3;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 fromHeading:(BOOL)arg3;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (void)enableUserLocation:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

