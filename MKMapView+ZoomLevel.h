// MKMapView+ZoomLevel.h
#import <MapKit/MapKit.h>

@interface MKMapView (ZoomLevel)

@property (atomic) NSUInteger zoomLevel;

- (void)setCenterCoordinate:(CLLocationCoordinate2D)centerCoordinate
    zoomLevel:(NSUInteger)zoomLevel
    animated:(BOOL)animated;

-(MKCoordinateRegion)coordinateRegionWithMapView:(MKMapView *)mapView
                                centerCoordinate:(CLLocationCoordinate2D)centerCoordinate
								andZoomLevel:(NSUInteger)zoomLevel;

@end
